// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cyberpunk2022/Cyberpunk2022HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCyberpunk2022HUD() {}
// Cross Module References
	CYBERPUNK2022_API UClass* Z_Construct_UClass_ACyberpunk2022HUD_NoRegister();
	CYBERPUNK2022_API UClass* Z_Construct_UClass_ACyberpunk2022HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Cyberpunk2022();
// End Cross Module References
	void ACyberpunk2022HUD::StaticRegisterNativesACyberpunk2022HUD()
	{
	}
	UClass* Z_Construct_UClass_ACyberpunk2022HUD_NoRegister()
	{
		return ACyberpunk2022HUD::StaticClass();
	}
	struct Z_Construct_UClass_ACyberpunk2022HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACyberpunk2022HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Cyberpunk2022,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Cyberpunk2022HUD.h" },
		{ "ModuleRelativePath", "Cyberpunk2022HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACyberpunk2022HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACyberpunk2022HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACyberpunk2022HUD_Statics::ClassParams = {
		&ACyberpunk2022HUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACyberpunk2022HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACyberpunk2022HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACyberpunk2022HUD, 705829871);
	template<> CYBERPUNK2022_API UClass* StaticClass<ACyberpunk2022HUD>()
	{
		return ACyberpunk2022HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACyberpunk2022HUD(Z_Construct_UClass_ACyberpunk2022HUD, &ACyberpunk2022HUD::StaticClass, TEXT("/Script/Cyberpunk2022"), TEXT("ACyberpunk2022HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACyberpunk2022HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
