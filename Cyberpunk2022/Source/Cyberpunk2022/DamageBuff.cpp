// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageBuff.h"

#include "DamagePickup.h"

UDamageBuff::UDamageBuff()
{
}

UDamageBuff::UDamageBuff(UCharacterStats* stats) : UBuff(stats)
{
	
}

void UDamageBuff::ApplyEffect()
{
	Super::ApplyEffect();

	if (_sourceActor == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("SourceActor is null!"));
		return;
	}
	if (_sourceItem == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("SourceItem is null!"));
		return;
	}

	ADamagePickup* pickup = Cast<ADamagePickup>(_sourceItem);
	if (pickup == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid cast! Trying cast sourceItem to ADamagePickup"));
		return;
	}
	_characterStats->SetDamageMultiplier(pickup->GetDamageMultiplier());

	//Init Timer
	_sourceActor->GetWorld()->GetTimerManager().SetTimer(_timerHandle, this, &UDamageBuff::RemoveEffect, pickup->GetBuffDuration());
}

void UDamageBuff::RemoveEffect()
{
	Super::RemoveEffect();

	if (_characterStats == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("CharacterStats is nullptr!"));
		return;
	}
	_characterStats->SetDamageMultiplier(1.f);
}
