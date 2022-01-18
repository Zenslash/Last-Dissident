// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cyberpunk2022/Cyberpunk2022GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCyberpunk2022GameMode() {}
// Cross Module References
	CYBERPUNK2022_API UClass* Z_Construct_UClass_ACyberpunk2022GameMode_NoRegister();
	CYBERPUNK2022_API UClass* Z_Construct_UClass_ACyberpunk2022GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Cyberpunk2022();
// End Cross Module References
	void ACyberpunk2022GameMode::StaticRegisterNativesACyberpunk2022GameMode()
	{
	}
	UClass* Z_Construct_UClass_ACyberpunk2022GameMode_NoRegister()
	{
		return ACyberpunk2022GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACyberpunk2022GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACyberpunk2022GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Cyberpunk2022,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Cyberpunk2022GameMode.h" },
		{ "ModuleRelativePath", "Cyberpunk2022GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACyberpunk2022GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACyberpunk2022GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACyberpunk2022GameMode_Statics::ClassParams = {
		&ACyberpunk2022GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACyberpunk2022GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACyberpunk2022GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACyberpunk2022GameMode, 540314383);
	template<> CYBERPUNK2022_API UClass* StaticClass<ACyberpunk2022GameMode>()
	{
		return ACyberpunk2022GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACyberpunk2022GameMode(Z_Construct_UClass_ACyberpunk2022GameMode, &ACyberpunk2022GameMode::StaticClass, TEXT("/Script/Cyberpunk2022"), TEXT("ACyberpunk2022GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACyberpunk2022GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
