// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cyberpunk2022/TakingDamageInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakingDamageInterface() {}
// Cross Module References
	CYBERPUNK2022_API UClass* Z_Construct_UClass_UTakingDamageInterface_NoRegister();
	CYBERPUNK2022_API UClass* Z_Construct_UClass_UTakingDamageInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Cyberpunk2022();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ITakingDamageInterface::TakingDamage(FName bone, int32 damage, FVector impact_normal)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TakingDamage instead.");
	}
	void UTakingDamageInterface::StaticRegisterNativesUTakingDamageInterface()
	{
	}
	struct Z_Construct_UFunction_UTakingDamageInterface_TakingDamage_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bone;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impact_normal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTakingDamageInterface_TakingDamage_Statics::NewProp_bone = { "bone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TakingDamageInterface_eventTakingDamage_Parms, bone), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTakingDamageInterface_TakingDamage_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TakingDamageInterface_eventTakingDamage_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTakingDamageInterface_TakingDamage_Statics::NewProp_impact_normal = { "impact_normal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TakingDamageInterface_eventTakingDamage_Parms, impact_normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakingDamageInterface_TakingDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakingDamageInterface_TakingDamage_Statics::NewProp_bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakingDamageInterface_TakingDamage_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakingDamageInterface_TakingDamage_Statics::NewProp_impact_normal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakingDamageInterface_TakingDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TakingDamageInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakingDamageInterface_TakingDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakingDamageInterface, nullptr, "TakingDamage", nullptr, nullptr, sizeof(TakingDamageInterface_eventTakingDamage_Parms), Z_Construct_UFunction_UTakingDamageInterface_TakingDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakingDamageInterface_TakingDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakingDamageInterface_TakingDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakingDamageInterface_TakingDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakingDamageInterface_TakingDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTakingDamageInterface_TakingDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTakingDamageInterface_NoRegister()
	{
		return UTakingDamageInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTakingDamageInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakingDamageInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Cyberpunk2022,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTakingDamageInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTakingDamageInterface_TakingDamage, "TakingDamage" }, // 1490424039
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakingDamageInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TakingDamageInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakingDamageInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITakingDamageInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTakingDamageInterface_Statics::ClassParams = {
		&UTakingDamageInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTakingDamageInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakingDamageInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakingDamageInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTakingDamageInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTakingDamageInterface, 2956121640);
	template<> CYBERPUNK2022_API UClass* StaticClass<UTakingDamageInterface>()
	{
		return UTakingDamageInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTakingDamageInterface(Z_Construct_UClass_UTakingDamageInterface, &UTakingDamageInterface::StaticClass, TEXT("/Script/Cyberpunk2022"), TEXT("UTakingDamageInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakingDamageInterface);
	static FName NAME_UTakingDamageInterface_TakingDamage = FName(TEXT("TakingDamage"));
	void ITakingDamageInterface::Execute_TakingDamage(UObject* O, FName bone, int32 damage, FVector impact_normal)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTakingDamageInterface::StaticClass()));
		TakingDamageInterface_eventTakingDamage_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTakingDamageInterface_TakingDamage);
		if (Func)
		{
			Parms.bone=bone;
			Parms.damage=damage;
			Parms.impact_normal=impact_normal;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
