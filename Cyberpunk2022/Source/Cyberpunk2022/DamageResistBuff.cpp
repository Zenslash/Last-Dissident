// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageResistBuff.h"

#include "ShieldPickup.h"

void UDamageResistBuff::ApplyEffect()
{
	Super::ApplyEffect();

	if(_sourceItem == nullptr)
	{
		return;
	}

	AShieldPickup* pickup = Cast<AShieldPickup>(_sourceItem);
	_characterStats->SetDamageResistMultiplier(pickup->GetShieldResist());

	//Init Timer
}

void UDamageResistBuff::RemoveEffect()
{
	Super::RemoveEffect();

	_characterStats->SetDamageResistMultiplier(0);
}
