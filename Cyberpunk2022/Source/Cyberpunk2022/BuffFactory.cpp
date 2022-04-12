// Fill out your copyright notice in the Description page of Project Settings.


#include "BuffFactory.h"

#include "DamageBuff.h"
#include "DamageResistBuff.h"
#include "SpeedBuff.h"

UBuff* UBuffFactory::ConstructBuff(EBuffType type, UCharacterStats* stats, AItem* sourceItem)
{
	UBuff* result = nullptr;

	switch (type)
	{
	case EBuffType::DAMAGE:
		result = NewObject<UDamageBuff>();
		break;
	case EBuffType::SPEED:
		result = NewObject<USpeedBuff>();
		break;
	case EBuffType::RESIST:
		result = NewObject<UDamageResistBuff>();
		break;
	}

	if(result != nullptr)
	{
		result->SetBuffType(type);
		result->SetCharacterStats(stats);
		result->SetSourceItem(sourceItem);
	}

	return result;
}
