// Fill out your copyright notice in the Description page of Project Settings.


#include "ShieldPickup.h"

#include "Cyberpunk2022Character.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"

AShieldPickup::AShieldPickup()
{
	_pickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AmmoMesh"));
	SetRootComponent(_pickupMesh);

	GetCollisionBox()->SetupAttachment(GetRootComponent());
	GetAreaSphere()->SetupAttachment(GetRootComponent());

	_collisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("AmmoCollisionSphere"));
	_collisionSphere->SetupAttachment(GetRootComponent());
	_collisionSphere->SetSphereRadius(50.f);
}

void AShieldPickup::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);
}

void AShieldPickup::BeginPlay()
{
	Super::BeginPlay();

	_collisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AShieldPickup::OnPickupSphereOverlap);
}

void AShieldPickup::SetItemProperties(EItemState state)
{
	Super::SetItemProperties(state);

	switch (state)
	{
	case EItemState::EIS_Pickup:
		// Set mesh properties
		_pickupMesh->SetSimulatePhysics(false);
		_pickupMesh->SetEnableGravity(false);
		_pickupMesh->SetVisibility(true);
		_pickupMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_pickupMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		break;
	case EItemState::EIS_Equipped:
		// Set mesh properties
		_pickupMesh->SetSimulatePhysics(false);
		_pickupMesh->SetEnableGravity(false);
		_pickupMesh->SetVisibility(true);
		_pickupMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_pickupMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		break;
	case EItemState::EIS_Falling:
		// Set mesh properties
		_pickupMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		_pickupMesh->SetSimulatePhysics(true);
		_pickupMesh->SetEnableGravity(true);
		_pickupMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_pickupMesh->SetCollisionResponseToChannel(
			ECollisionChannel::ECC_WorldStatic,
			ECollisionResponse::ECR_Block);
		break;
	case EItemState::EIS_EquipInterping:
		// Set mesh properties
		_pickupMesh->SetSimulatePhysics(false);
		_pickupMesh->SetEnableGravity(false);
		_pickupMesh->SetVisibility(true);
		_pickupMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_pickupMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		break;
	}
}

void AShieldPickup::OnPickupSphereOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (otherActor)
	{
		auto character = Cast<ACyberpunk2022Character>(otherActor);
		if (character)
		{
			character->GetPickupItem(this);
		}
	}
}