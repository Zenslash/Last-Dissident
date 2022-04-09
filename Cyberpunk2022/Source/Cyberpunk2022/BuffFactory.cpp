// Fill out your copyright notice in the Description page of Project Settings.


#include "BuffFactory.h"

#include "DamageBuff.h"
#include "DamageResistBuff.h"
#include "SpeedBuff.h"

UBuff* UBuffFactory::ConstructBuff(EBuffType type, UCharacterStats* stats)
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

	return result;
}
