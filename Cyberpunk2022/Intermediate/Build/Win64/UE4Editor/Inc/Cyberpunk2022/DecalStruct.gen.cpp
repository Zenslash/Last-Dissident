// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cyberpunk2022/DecalStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecalStruct() {}
// Cross Module References
	CYBERPUNK2022_API UScriptStruct* Z_Construct_UScriptStruct_FUDecalStruct();
	UPackage* Z_Construct_UPackage__Script_Cyberpunk2022();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FUDecalStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FUDecalStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FUDecalStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CYBERPUNK2022_API uint32 Get_Z_Construct_UScriptStruct_FUDecalStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUDecalStruct, Z_Construct_UPackage__Script_Cyberpunk2022(), TEXT("UDecalStruct"), sizeof(FUDecalStruct), Get_Z_Construct_UScriptStruct_FUDecalStruct_Hash());
	}
	return Singleton;
}
template<> CYBERPUNK2022_API UScriptStruct* StaticStruct<FUDecalStruct>()
{
	return FUDecalStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUDecalStruct(FUDecalStruct::StaticStruct, TEXT("/Script/Cyberpunk2022"), TEXT("UDecalStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Cyberpunk2022_StaticRegisterNativesFUDecalStruct
{
	FScriptStruct_Cyberpunk2022_StaticRegisterNativesFUDecalStruct()
	{
		UScriptStruct::DeferCppStructOps<FUDecalStruct>(FName(TEXT("UDecalStruct")));
	}
} ScriptStruct_Cyberpunk2022_StaticRegisterNativesFUDecalStruct;
	struct Z_Construct_UScriptStruct_FUDecalStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUDecalStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DecalStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUDecalStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUDecalStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUDecalStruct_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "UDecalStruct" },
		{ "ModuleRelativePath", "DecalStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUDecalStruct_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUDecalStruct, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUDecalStruct_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUDecalStruct_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUDecalStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUDecalStruct_Statics::NewProp_Material,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUDecalStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Cyberpunk2022,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"UDecalStruct",
		sizeof(FUDecalStruct),
		alignof(FUDecalStruct),
		Z_Construct_UScriptStruct_FUDecalStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUDecalStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUDecalStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUDecalStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUDecalStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUDecalStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Cyberpunk2022();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UDecalStruct"), sizeof(FUDecalStruct), Get_Z_Construct_UScriptStruct_FUDecalStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUDecalStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUDecalStruct_Hash() { return 4201983839U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
