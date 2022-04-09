// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuffType.h"
#include "CharacterStats.h"
#include "Buff.generated.h"

/**
 * 
 */
UCLASS()
class CYBERPUNK2022_API UBuff : public UObject
{
	GENERATED_BODY()

public:
	UBuff();
	UBuff(UCharacterStats* stats);

	EBuffType GetBuffType() const
	{
		return _buffType;
	}
	void SetBuffType(EBuffType type)
	{
		_buffType = type;
	}
	void SetCharacterStats(UCharacterStats* stats)
	{
		_characterStats = stats;
	}

	void ResetEffect();
	void ApplyEffect();

protected:

	EBuffType _buffType;
	UCharacterStats* _characterStats;
	
};
