// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BuffType.h"
#include <vector>
#include "Components/ActorComponent.h"
#include "BuffComponent.generated.h"

class UCharacterStats;
class UBuff;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CYBERPUNK2022_API UBuffComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBuffComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void AddBuff(EBuffType type, UCharacterStats* stats);


private:

	class UBuffFactory* _factory;

	std::vector<UBuff*> _activeBuff;
		
};
