// Copyright Epic Games, Inc. All Rights Reserved.

#include "Cyberpunk2022Character.h"
#include "Cyberpunk2022Projectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId
#include "Engine/SkeletalMeshSocket.h"
#include "Weapon.h"
#include <Sound/SoundCue.h>
#include "DrawDebugHelpers.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "TakingDamageInterface.h"
#include "GameFramework/CharacterMovementComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// ACyberpunk2022Character

ACyberpunk2022Character::ACyberpunk2022Character()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	_crosshairInAirFactor = 0.f;
	_crosshairInShootingFactor = 0.f;
	_crosshairVelocityFactor = 0.f;
	_crosshairSpreadMultiplier = 0.f;
	_shootTimeDuration = 0.05f;
	_bFiringBullet = false;
	_combatState = ECombatState::ECS_Unoccupied;

	_bShouldFire = true;
	_bFireButtonPressed = false;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

}

void ACyberpunk2022Character::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	Mesh1P->SetHiddenInGame(false, true);

	SpawnDefaultWeapon();
	InitializeAmmoMap();
}

void ACyberpunk2022Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CalculateCrosshairSpread(DeltaTime);
}

//////////////////////////////////////////////////////////////////////////
// Input

void ACyberpunk2022Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ACyberpunk2022Character::FireButtonPressed);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &ACyberpunk2022Character::FireButtonReleased);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &ACyberpunk2022Character::ReloadButtonPressed);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &ACyberpunk2022Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACyberpunk2022Character::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ACyberpunk2022Character::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ACyberpunk2022Character::LookUpAtRate);
}

void ACyberpunk2022Character::OnFire()
{
	//// try and fire a projectile
	//if (ProjectileClass != nullptr)
	//{
	//	UWorld* const World = GetWorld();
	//	if (World != nullptr)
	//	{
	//		const FRotator SpawnRotation = GetControlRotation();
	//		// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
	//		const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

	//		//Set Spawn Collision Handling Override
	//		FActorSpawnParameters ActorSpawnParams;
	//		ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

	//		// spawn the projectile at the muzzle
	//		World->SpawnActor<ACyberpunk2022Projectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
	//	}
	//}

	//// try and play the sound if specified
	//if (FireSound != nullptr)
	//{
	//	UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	//}

	//// try and play a firing animation if specified
	//if (FireAnimation != nullptr)
	//{
	//	// Get the animation object for the arms mesh
	//	UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
	//	if (AnimInstance != nullptr)
	//	{
	//		AnimInstance->Montage_Play(FireAnimation, 1.f);
	//	}
	//}
}

void ACyberpunk2022Character::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void ACyberpunk2022Character::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

//Commenting this section out to be consistent with FPS BP template.
//This allows the user to turn without using the right virtual joystick

//void ACyberpunk2022Character::TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location)
//{
//	if ((TouchItem.bIsPressed == true) && (TouchItem.FingerIndex == FingerIndex))
//	{
//		if (TouchItem.bIsPressed)
//		{
//			if (GetWorld() != nullptr)
//			{
//				UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport();
//				if (ViewportClient != nullptr)
//				{
//					FVector MoveDelta = Location - TouchItem.Location;
//					FVector2D ScreenSize;
//					ViewportClient->GetViewportSize(ScreenSize);
//					FVector2D ScaledDelta = FVector2D(MoveDelta.X, MoveDelta.Y) / ScreenSize;
//					if (FMath::Abs(ScaledDelta.X) >= 4.0 / ScreenSize.X)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.X * BaseTurnRate;
//						AddControllerYawInput(Value);
//					}
//					if (FMath::Abs(ScaledDelta.Y) >= 4.0 / ScreenSize.Y)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.Y * BaseTurnRate;
//						AddControllerPitchInput(Value);
//					}
//					TouchItem.Location = Location;
//				}
//				TouchItem.Location = Location;
//			}
//		}
//	}
//}

void ACyberpunk2022Character::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ACyberpunk2022Character::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ACyberpunk2022Character::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ACyberpunk2022Character::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ACyberpunk2022Character::FireWeapon()
{
	if (_equippedWeapon == nullptr) return;
	if (_combatState != ECombatState::ECS_Unoccupied) return;

	if(WeaponHasAmmo())
	{
		PlayFireSound();
		SendBullet();
		//Play animation
		StartCrosshairBulletFire();
		_equippedWeapon->DecrementAmmo();

		StartFireTimer();
	}
}

void ACyberpunk2022Character::PlayFireSound() const
{
	if (_equippedWeapon->GetFireSound())
	{
		UGameplayStatics::PlaySound2D(this, _equippedWeapon->GetFireSound());
	}
}

void ACyberpunk2022Character::SendBullet()
{
	//Send bullet
	const USkeletalMeshComponent* itemMesh = _equippedWeapon->GetItemMesh();
	if (!itemMesh)
	{
		UE_LOG(LogTemp, Error, TEXT("Weapon doesnt have USkeletalMeshComponent!"));
	}

	const USkeletalMeshSocket* barrelSocket = itemMesh->GetSocketByName("BarrelPoint");
	if (barrelSocket)
	{
		const FTransform socketTransform = barrelSocket->GetSocketTransform(itemMesh);

		if (_equippedWeapon->GetMuzzleFlash())
		{
			UParticleSystemComponent* muzzle = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), _equippedWeapon->GetMuzzleFlash(), socketTransform);
			muzzle->AttachTo((USceneComponent*)itemMesh);
		}

		//Line trace
		FHitResult hitInfo;
		const FVector startPoint{ socketTransform.GetLocation() };
		FTransform cameraTransform = FirstPersonCameraComponent->GetComponentTransform();
		const FVector rotationAxis{ cameraTransform.GetRotation().GetForwardVector() };
		const FVector endPoint{ cameraTransform.GetLocation() + rotationAxis * 50'000.f + _equippedWeapon->GetRecoilOffset() };

		FVector beamEndPoint{ endPoint };

		GetWorld()->LineTraceSingleByChannel(hitInfo, startPoint, endPoint, ECollisionChannel::ECC_Visibility);
		if (hitInfo.bBlockingHit)
		{
			/*DrawDebugLine(GetWorld(), startPoint, endPoint, FColor::Red, false, 2.f);
			DrawDebugPoint(GetWorld(), hitInfo.Location, 5.f, FColor::Yellow, false, 2.f);*/
			bool bImplTakingDamage = UKismetSystemLibrary::DoesImplementInterface(hitInfo.GetActor(), UTakingDamageInterface::StaticClass());
			if (bImplTakingDamage)
			{
				ITakingDamageInterface::Execute_TakingDamage(hitInfo.GetActor(), hitInfo.BoneName, _equippedWeapon->GetDamagePerBullet(), nullptr);
			}

			beamEndPoint = hitInfo.Location;

			if (_equippedWeapon->GetImpactParticles())
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), _equippedWeapon->GetImpactParticles(), hitInfo.Location);
			}
		}

		if (_equippedWeapon->GetBeamParticles())
		{
			UParticleSystemComponent* beam = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), _equippedWeapon->GetBeamParticles(),
				socketTransform);
			if (beam)
			{
				beam->SetVectorParameter(FName("Target"), beamEndPoint);
			}
		}
	}
}

void ACyberpunk2022Character::ReloadButtonPressed()
{
	ReloadWeapon();
}

void ACyberpunk2022Character::ReloadWeapon()
{
	if(_combatState != ECombatState::ECS_Unoccupied)
	{
		return;
	}
	if(_equippedWeapon == nullptr)
	{
		return;
	}

	//TODO Create bool CarryingAmmo()
	//Do we have ammo?
	if(CarryingAmmo())
	{
		_combatState = ECombatState::ECS_Reloading;

		UAnimInstance* animInstance = GetMesh1P()->GetAnimInstance();
		UAnimInstance* weaponInstance = _equippedWeapon->GetItemMesh()->GetAnimInstance();
		if(animInstance && ReloadAnimation)
		{
			animInstance->Montage_Play(ReloadAnimation);
			animInstance->Montage_JumpToSection(_equippedWeapon->GetReloadMontage());
		}
		if(weaponInstance)
		{
			weaponInstance->Montage_Play(_equippedWeapon->GetReloadAnimation());
			weaponInstance->Montage_JumpToSection(_equippedWeapon->GetReloadMontage());
		}
	}
}

bool ACyberpunk2022Character::CarryingAmmo()
{
	if (_equippedWeapon == nullptr) return false;

	auto ammoType = _equippedWeapon->GetAmmoType();

	if(_ammoMap.Contains(ammoType))
	{
		return _ammoMap[ammoType] > 0;
	}

	return false;
}

void ACyberpunk2022Character::InitializeAmmoMap()
{
	_ammoMap.Add(EAmmoType::EAT_SMG, 90);
}

void ACyberpunk2022Character::FinishReloading()
{
	_combatState = ECombatState::ECS_Unoccupied;

	if(_equippedWeapon == nullptr)
	{
		return;
	}

	const auto ammoType = _equippedWeapon->GetAmmoType();

	if(_ammoMap.Contains(ammoType))
	{
		int32 carriedAmmo = _ammoMap[ammoType];

		const int32 magEmptySpace =
			_equippedWeapon->GetMagazineCapacity() -
			_equippedWeapon->GetAmmo();

		if(magEmptySpace > carriedAmmo)
		{
			_equippedWeapon->ReloadAmmo(carriedAmmo);
			carriedAmmo = 0;
		}
		else
		{
			_equippedWeapon->ReloadAmmo(magEmptySpace);
			carriedAmmo -= magEmptySpace;
		}
		_ammoMap.Add(ammoType, carriedAmmo);
	}
}


bool ACyberpunk2022Character::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &ACyberpunk2022Character::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &ACyberpunk2022Character::EndTouch);

		//Commenting this out to be more consistent with FPS BP template.
		//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &ACyberpunk2022Character::TouchUpdate);
		return true;
	}
	
	return false;
}

void ACyberpunk2022Character::SpawnDefaultWeapon()
{
	if (DefaultWeaponClass)
	{
		AWeapon* DefaultWeapon = GetWorld()->SpawnActor<AWeapon>(DefaultWeaponClass);

		const USkeletalMeshSocket* handSocket = Mesh1P->GetSocketByName(FName("GripPoint"));
		if (handSocket)
		{
			handSocket->AttachActor(DefaultWeapon, Mesh1P);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Cannot find Grip socket!"));
		}

		_ikLeftHandSocket = DefaultWeapon->GetItemMesh()->GetSocketByName(FName("LeftHandIK"));
		if(!_ikLeftHandSocket)
		{
			UE_LOG(LogTemp, Error, TEXT("Cannot find left hand IK socket"));
		}

		_equippedWeapon = DefaultWeapon;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Assign DefaultWeaponClass!"));
	}
}

void ACyberpunk2022Character::EquipWeapon(AWeapon* weaponToEquip)
{
	if (weaponToEquip)
	{
		const USkeletalMeshSocket* handSocket = Mesh1P->GetSocketByName(FName("GripPoint"));
		if (handSocket)
		{
			handSocket->AttachActor(weaponToEquip, Mesh1P);
		}

		_equippedWeapon = weaponToEquip;
	}
}

void ACyberpunk2022Character::CalculateCrosshairSpread(float delta)
{
	FVector2D walkSpeedRange{ 0.f, 600.f };
	FVector2D velocityMultiplierRange{ 0.f, 1.f };
	FVector velocity{ GetVelocity() };
	velocity.Z = 0.f;

	_crosshairVelocityFactor = FMath::GetMappedRangeValueClamped(
		walkSpeedRange,
		velocityMultiplierRange,
		velocity.Size());

	if(GetCharacterMovement()->IsFalling())
	{
		_crosshairInAirFactor = FMath::FInterpTo(_crosshairInAirFactor, 2.25f, delta, 2.25f);
	}
	else
	{
		_crosshairInAirFactor = FMath::FInterpTo(_crosshairInAirFactor, 0.f, delta, 30.f);
	}

	if(_bFiringBullet)
	{
		_crosshairInShootingFactor = FMath::FInterpTo(_crosshairInShootingFactor, 0.3f, delta, 15.f);
	}
	else
	{
		_crosshairInShootingFactor = FMath::FInterpTo(_crosshairInShootingFactor, 0.f, delta, 30.f);
	}

	_crosshairSpreadMultiplier = 0.5f +
		_crosshairVelocityFactor +
		_crosshairInAirFactor +
		_crosshairInShootingFactor;
}

void ACyberpunk2022Character::StartCrosshairBulletFire()
{
	_bFiringBullet = true;

	GetWorldTimerManager().SetTimer(
		_crosshairShootTimer,
		this,
		&ACyberpunk2022Character::FinishCrosshairBulletFire,
		_shootTimeDuration);
}

void ACyberpunk2022Character::FinishCrosshairBulletFire()
{
	_bFiringBullet = false;
}

float ACyberpunk2022Character::GetCrosshairSpreadMultiplier() const
{
	return _crosshairSpreadMultiplier;
}

void ACyberpunk2022Character::FireButtonPressed()
{
	_bFireButtonPressed = true;
	FireWeapon();
}

void ACyberpunk2022Character::FireButtonReleased()
{
	_bFireButtonPressed = false;
}

void ACyberpunk2022Character::StartFireTimer()
{
	_combatState = ECombatState::ECS_FireTimerInProgress;

	GetWorldTimerManager().SetTimer(
		_fireTimer,
		this,
		&ACyberpunk2022Character::FireReset,
		_equippedWeapon->GetFireRate());
}

void ACyberpunk2022Character::FireReset()
{
	_combatState = ECombatState::ECS_Unoccupied;

	if(WeaponHasAmmo())
	{
		if(_bFireButtonPressed)
		{
			FireWeapon();
		}
	}
	else
	{
		//Reload weapon
		ReloadWeapon();
	}
}

bool ACyberpunk2022Character::WeaponHasAmmo()
{
	if (_equippedWeapon == nullptr) return false;

	return _equippedWeapon->GetAmmo() > 0;
}
