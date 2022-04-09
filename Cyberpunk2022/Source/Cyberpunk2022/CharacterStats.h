// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterStats.generated.h"

/**
 * 
 */
UCLASS()
class CYBERPUNK2022_API UCharacterStats : public UObject
{
	GENERATED_BODY()

private:
	float _speedModifier;
	float _damageModifier;
	float _damageResistModifier;

public:

	UCharacterStats();
	UCharacterStats(float speed, float damage, float resist);

	FORCEINLINE float GetSpeedModifier() const
	{
		return _speedModifier;
	}
	FORCEINLINE float GetDamageModifier() const
	{
		return _damageModifier;
	}
	FORCEINLINE float GetDamageResistModifier() const
	{
		return _damageResistModifier;
	}

	void SetSpeedMultiplier(float value)
	{
		_speedModifier = value;
	}
	void SetDamageMultiplier(float value)
	{
		_damageModifier = value;
	}
	void SetDamageResistMultiplier(float value)
	{
		_damageResistModifier = value;
	}
	
};
