// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TakingDamageInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable)
class UTakingDamageInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class CYBERPUNK2022_API ITakingDamageInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void TakingDamage(FName bone, int damage, FVector impact_normal, FVector victimLocation);

};
