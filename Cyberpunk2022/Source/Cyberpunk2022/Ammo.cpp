// Fill out your copyright notice in the Description page of Project Settings.


#include "Ammo.h"

#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"

AAmmo::AAmmo()
{
	_ammoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AmmoMesh"));
	SetRootComponent(_ammoMesh);

	GetCollisionBox()->SetupAttachment(GetRootComponent());
	GetAreaSphere()->SetupAttachment(GetRootComponent());
}

void AAmmo::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);
}

void AAmmo::BeginPlay()
{
	Super::BeginPlay();
}
