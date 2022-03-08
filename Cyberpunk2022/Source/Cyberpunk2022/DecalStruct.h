#pragma once

#include "Materials/MaterialInterface.h"
#include "Engine/DataTable.h"
#include "DecalStruct.generated.h"

USTRUCT(BlueprintType)
struct FUDecalStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInterface* Material;
};