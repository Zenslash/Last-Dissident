#pragma once

#include "Item.h"
#include "Engine/DataTable.h"
#include "LootStruct.generated.h"

USTRUCT(BlueprintType)
struct FULootStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TAssetSubclassOf<AItem> _dropItem;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _dropChance;
};