// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterStats.generated.h"

DECLARE_DELEGATE_OneParam(OnCharacterStatModifiedSignature, float)

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

	OnCharacterStatModifiedSignature OnDamageResistModified;
	OnCharacterStatModifiedSignature OnSpeedModified;

	UCharacterStats();
	UCharacterStats(float speed, float damage, float resist);

	UFUNCTION(BlueprintCallable)
	FORCEINLINE float GetSpeedModifier() const
	{
		return _speedModifier;
	}
	UFUNCTION(BlueprintCallable)
	FORCEINLINE float GetDamageModifier() const
	{
		return _damageModifier;
	}
	UFUNCTION(BlueprintCallable)
	FORCEINLINE float GetDamageResistModifier() const
	{
		return _damageResistModifier;
	}

	void SetSpeedMultiplier(float value)
	{
		_speedModifier = value;
		OnSpeedModified.ExecuteIfBound(_speedModifier);
	}
	void SetDamageMultiplier(float value)
	{
		_damageModifier = value;
	}
	void SetDamageResistMultiplier(float value)
	{
		_damageResistModifier = value;
		OnDamageResistModified.ExecuteIfBound(value);
	}
	
};
