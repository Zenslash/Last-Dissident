// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuffType.h"
#include "CharacterStats.h"
#include "Buff.generated.h"

class AItem;
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
	void SetSourceActor(AActor* actor)
	{
		_sourceActor = actor;
	}
	void SetSourceItem(AItem* item)
	{
		_sourceItem = item;
	}

	void ResetEffect();
	virtual void RemoveEffect();
	virtual void ApplyEffect();

protected:

	EBuffType _buffType;
	UPROPERTY()
	UCharacterStats* _characterStats;
	FTimerHandle _timerHandle;
	UPROPERTY()
	AActor* _sourceActor;
	UPROPERTY()
	AItem* _sourceItem;

	//Get timer from pickup or data asset?

};
