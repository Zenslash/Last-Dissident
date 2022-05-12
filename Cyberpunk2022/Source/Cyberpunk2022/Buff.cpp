// Fill out your copyright notice in the Description page of Project Settings.


#include "Buff.h"
#include "Item.h"

UBuff::UBuff()
{

}

UBuff::UBuff(UCharacterStats* stats)
{
	_characterStats = stats;
}

void UBuff::RemoveEffect()
{
	if (_sourceActor != nullptr)
	{
		_sourceActor->GetWorld()->GetTimerManager().ClearTimer(_timerHandle);
	}
}

void UBuff::ResetEffect()
{
	if(_sourceActor != nullptr)
	{
		_sourceActor->GetWorld()->GetTimerManager().ClearTimer(_timerHandle);
	}
}

void UBuff::ApplyEffect()
{
}

