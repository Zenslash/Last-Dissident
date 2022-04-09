// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterStats.h"


UCharacterStats::UCharacterStats()
{
	_speedModifier = 1.f;
	_damageModifier = 1.f;
	_damageResistModifier = 0.f;
}

UCharacterStats::UCharacterStats(float speed, float damage, float resist)
{
	_speedModifier = speed;
	_damageModifier = damage;
	_damageResistModifier = resist;
}
