// Fill out your copyright notice in the Description page of Project Settings.


#include "BuffComponent.h"
#include "BuffFactory.h"
#include "Buff.h"
#include "CharacterStats.h"

// Sets default values for this component's properties
UBuffComponent::UBuffComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBuffComponent::BeginPlay()
{
	Super::BeginPlay();

	_factory = NewObject<UBuffFactory>();
	//_activeBuff = std::vector<UBuff>();
	// ...
	
}


// Called every frame
void UBuffComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	// ...
}

void UBuffComponent::AddBuff(EBuffType type, UCharacterStats* stats, AItem* item, AActor* sourceActor)
{
	for(int i = 0; i < _activeBuff.Num(); i++)
	{
		if(_activeBuff[i]->GetBuffType() == type)
		{
			_activeBuff[i]->RemoveEffect();
			_activeBuff.RemoveAt(i);
			break;
		}
	}

	UBuff* buff = _factory->ConstructBuff(type, stats, item, sourceActor);
	_activeBuff.Add(buff);
	buff->ApplyEffect();
}

