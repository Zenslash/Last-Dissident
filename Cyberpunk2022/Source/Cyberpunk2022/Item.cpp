// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include <Components/BoxComponent.h>
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_itemMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Item Mesh"));
	SetRootComponent(_itemMesh);

	_collisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	_collisionBox->SetupAttachment(_itemMesh);

	_areaSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Area Sphere"));
	_areaSphere->SetupAttachment(_itemMesh);

	_itemState = EItemState::EIS_Pickup;
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();

	_areaSphere->OnComponentBeginOverlap.AddDynamic(this, &AItem::OnSphereOverlap);
	_areaSphere->OnComponentEndOverlap.AddDynamic(this, &AItem::OnSphereEndOverlap);

	SetItemProperties(_itemState);
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItem::SetItemProperties(EItemState state)
{
	switch (state)
	{
	case EItemState::EIS_Pickup:
		// Set mesh properties
		_itemMesh->SetSimulatePhysics(false);
		_itemMesh->SetEnableGravity(false);
		_itemMesh->SetVisibility(true);
		_itemMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_itemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		// Set AreaSphere properties
		_areaSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
		_areaSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		// Set CollisionBox properties
		_collisionBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_collisionBox->SetCollisionResponseToChannel(
			ECollisionChannel::ECC_Visibility,
			ECollisionResponse::ECR_Block);
		_collisionBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		break;
	case EItemState::EIS_Equipped:
		// Set mesh properties
		_itemMesh->SetSimulatePhysics(false);
		_itemMesh->SetEnableGravity(false);
		_itemMesh->SetVisibility(true);
		_itemMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_itemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		// Set AreaSphere properties
		_areaSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_areaSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		// Set CollisionBox properties
		_collisionBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_collisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		break;
	case EItemState::EIS_Falling:
		// Set mesh properties
		_itemMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		_itemMesh->SetSimulatePhysics(true);
		_itemMesh->SetEnableGravity(true);
		_itemMesh->SetVisibility(true);
		_itemMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_itemMesh->SetCollisionResponseToChannel(
			ECollisionChannel::ECC_WorldStatic,
			ECollisionResponse::ECR_Block);
		// Set AreaSphere properties
		_areaSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_areaSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		// Set CollisionBox properties
		_collisionBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_collisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		break;
	case EItemState::EIS_EquipInterping:
		// Set mesh properties
		_itemMesh->SetSimulatePhysics(false);
		_itemMesh->SetEnableGravity(false);
		_itemMesh->SetVisibility(true);
		_itemMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_itemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		// Set AreaSphere properties
		_areaSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_areaSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		// Set CollisionBox properties
		_collisionBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_collisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		break;
	case EItemState::EIS_PickedUp:
		// Set mesh properties
		_itemMesh->SetSimulatePhysics(false);
		_itemMesh->SetEnableGravity(false);
		_itemMesh->SetVisibility(false);
		_itemMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_itemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		// Set AreaSphere properties
		_areaSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_areaSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		// Set CollisionBox properties
		_collisionBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_collisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		break;
	}
}

void AItem::PlayPickupSound(bool bForcePlaySound)
{
	if (_pickupSound)
	{
		UGameplayStatics::PlaySound2D(this, _pickupSound, _pickupSound->VolumeMultiplier);
	}
}

void AItem::OnSphereOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor,
                            UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}

void AItem::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}

void AItem::SetItemState(EItemState state)
{
	_itemState = state;
	SetItemProperties(state);
}

