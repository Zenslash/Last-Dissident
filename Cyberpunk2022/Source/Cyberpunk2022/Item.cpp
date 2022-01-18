// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include <Components/BoxComponent.h>

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_itemMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Item Mesh"));
	SetRootComponent(_itemMesh);

	_collisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	_collisionBox->SetupAttachment(_itemMesh);

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

