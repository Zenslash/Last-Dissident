// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	_currentHealth = _maxHealth;
	_resist = 0.f;

	// ...
	
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealthComponent::UpdateHealth(int value)
{
	if(value > 0)
	{
		value *= 1 - _resist;
	}
	_currentHealth -= value;

	if(_currentHealth <= 0)
	{
		_outOfHealthEvent.Broadcast();
	}
}

void UHealthComponent::ApplyResist(float value)
{
	_resist = value;
}





