// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BuffType.h"
#include "Cyberpunk2022Character.h"
#include "UObject/NoExportTypes.h"
#include "BuffFactory.generated.h"

class UBuff;

/**
 * 
 */
UCLASS()
class CYBERPUNK2022_API UBuffFactory : public UObject
{
	GENERATED_BODY()

public:

	UBuff* ConstructBuff(EBuffType type, UCharacterStats* stats,AItem* item, AActor* sourceActor);
	
};
