// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cyberpunk2022/LootStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootStruct() {}
// Cross Module References
	CYBERPUNK2022_API UScriptStruct* Z_Construct_UScriptStruct_FULootStruct();
	UPackage* Z_Construct_UPackage__Script_Cyberpunk2022();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CYBERPUNK2022_API UClass* Z_Construct_UClass_AItem_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FULootStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FULootStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FULootStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CYBERPUNK2022_API uint32 Get_Z_Construct_UScriptStruct_FULootStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FULootStruct, Z_Construct_UPackage__Script_Cyberpunk2022(), TEXT("ULootStruct"), sizeof(FULootStruct), Get_Z_Construct_UScriptStruct_FULootStruct_Hash());
	}
	return Singleton;
}
template<> CYBERPUNK2022_API UScriptStruct* StaticStruct<FULootStruct>()
{
	return FULootStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FULootStruct(FULootStruct::StaticStruct, TEXT("/Script/Cyberpunk2022"), TEXT("ULootStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Cyberpunk2022_StaticRegisterNativesFULootStruct
{
	FScriptStruct_Cyberpunk2022_StaticRegisterNativesFULootStruct()
	{
		UScriptStruct::DeferCppStructOps<FULootStruct>(FName(TEXT("ULootStruct")));
	}
} ScriptStruct_Cyberpunk2022_StaticRegisterNativesFULootStruct;
	struct Z_Construct_UScriptStruct_FULootStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dropItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__dropItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dropChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__dropChance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FULootStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "LootStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FULootStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FULootStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FULootStruct_Statics::NewProp__dropItem_MetaData[] = {
		{ "Category", "ULootStruct" },
		{ "ModuleRelativePath", "LootStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FULootStruct_Statics::NewProp__dropItem = { "_dropItem", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FULootStruct, _dropItem), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FULootStruct_Statics::NewProp__dropItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FULootStruct_Statics::NewProp__dropItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FULootStruct_Statics::NewProp__dropChance_MetaData[] = {
		{ "Category", "ULootStruct" },
		{ "ModuleRelativePath", "LootStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FULootStruct_Statics::NewProp__dropChance = { "_dropChance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FULootStruct, _dropChance), METADATA_PARAMS(Z_Construct_UScriptStruct_FULootStruct_Statics::NewProp__dropChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FULootStruct_Statics::NewProp__dropChance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FULootStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FULootStruct_Statics::NewProp__dropItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FULootStruct_Statics::NewProp__dropChance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FULootStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Cyberpunk2022,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ULootStruct",
		sizeof(FULootStruct),
		alignof(FULootStruct),
		Z_Construct_UScriptStruct_FULootStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FULootStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FULootStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FULootStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FULootStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FULootStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Cyberpunk2022();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ULootStruct"), sizeof(FULootStruct), Get_Z_Construct_UScriptStruct_FULootStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FULootStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FULootStruct_Hash() { return 1814595059U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
