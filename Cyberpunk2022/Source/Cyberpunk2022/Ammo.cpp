// Fill out your copyright notice in the Description page of Project Settings.


#include "Ammo.h"

#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Cyberpunk2022Character.h"

AAmmo::AAmmo()
{
	_ammoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AmmoMesh"));
	SetRootComponent(_ammoMesh);

	GetCollisionBox()->SetupAttachment(GetRootComponent());
	GetAreaSphere()->SetupAttachment(GetRootComponent());

	_ammoCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("AmmoCollisionSphere"));
	_ammoCollisionSphere->SetupAttachment(GetRootComponent());
	_ammoCollisionSphere->SetSphereRadius(50.f);
}

void AAmmo::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);
}

void AAmmo::BeginPlay()
{
	Super::BeginPlay();

	_ammoCollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AAmmo::OnAmmoSphereOverlap);
}

void AAmmo::SetItemProperties(EItemState state)
{
	Super::SetItemProperties(state);

	switch (state)
	{
		case EItemState::EIS_Pickup:
			// Set mesh properties
			_ammoMesh->SetSimulatePhysics(false);
			_ammoMesh->SetEnableGravity(false);
			_ammoMesh->SetVisibility(true);
			_ammoMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
			_ammoMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			break;
		case EItemState::EIS_Equipped:
			// Set mesh properties
			_ammoMesh->SetSimulatePhysics(false);
			_ammoMesh->SetEnableGravity(false);
			_ammoMesh->SetVisibility(true);
			_ammoMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
			_ammoMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			break;
		case EItemState::EIS_Falling:
			// Set mesh properties
			_ammoMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			_ammoMesh->SetSimulatePhysics(true);
			_ammoMesh->SetEnableGravity(true);
			_ammoMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
			_ammoMesh->SetCollisionResponseToChannel(
				ECollisionChannel::ECC_WorldStatic,
				ECollisionResponse::ECR_Block);
			break;
		case EItemState::EIS_EquipInterping:
			// Set mesh properties
			_ammoMesh->SetSimulatePhysics(false);
			_ammoMesh->SetEnableGravity(false);
			_ammoMesh->SetVisibility(true);
			_ammoMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
			_ammoMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			break;
	}
}

void AAmmo::OnAmmoSphereOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(otherActor)
	{
		auto character = Cast<ACyberpunk2022Character>(otherActor);
		if(character)
		{
			character->GetPickupItem(this);
		}
	}
}
