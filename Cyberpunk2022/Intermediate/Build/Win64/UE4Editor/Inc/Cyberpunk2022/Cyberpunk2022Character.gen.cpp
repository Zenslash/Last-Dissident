// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cyberpunk2022/Cyberpunk2022Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCyberpunk2022Character() {}
// Cross Module References
	CYBERPUNK2022_API UEnum* Z_Construct_UEnum_Cyberpunk2022_ECombatState();
	UPackage* Z_Construct_UPackage__Script_Cyberpunk2022();
	CYBERPUNK2022_API UClass* Z_Construct_UClass_ACyberpunk2022Character_NoRegister();
	CYBERPUNK2022_API UClass* Z_Construct_UClass_ACyberpunk2022Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CYBERPUNK2022_API UClass* Z_Construct_UClass_ACyberpunk2022Projectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSocket_NoRegister();
	CYBERPUNK2022_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	CYBERPUNK2022_API UEnum* Z_Construct_UEnum_Cyberpunk2022_EAmmoType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static UEnum* ECombatState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Cyberpunk2022_ECombatState, Z_Construct_UPackage__Script_Cyberpunk2022(), TEXT("ECombatState"));
		}
		return Singleton;
	}
	template<> CYBERPUNK2022_API UEnum* StaticEnum<ECombatState>()
	{
		return ECombatState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECombatState(ECombatState_StaticEnum, TEXT("/Script/Cyberpunk2022"), TEXT("ECombatState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Cyberpunk2022_ECombatState_Hash() { return 3107482365U; }
	UEnum* Z_Construct_UEnum_Cyberpunk2022_ECombatState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Cyberpunk2022();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECombatState"), 0, Get_Z_Construct_UEnum_Cyberpunk2022_ECombatState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECombatState::ECS_Unoccupied", (int64)ECombatState::ECS_Unoccupied },
				{ "ECombatState::ECS_FireTimerInProgress", (int64)ECombatState::ECS_FireTimerInProgress },
				{ "ECombatState::ECS_Reloading", (int64)ECombatState::ECS_Reloading },
				{ "ECombatState::ECS_MAX", (int64)ECombatState::ECS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ECS_FireTimerInProgress.DisplayName", "FireTimerInProgress" },
				{ "ECS_FireTimerInProgress.Name", "ECombatState::ECS_FireTimerInProgress" },
				{ "ECS_MAX.DisplayName", "DefaultMax" },
				{ "ECS_MAX.Name", "ECombatState::ECS_MAX" },
				{ "ECS_Reloading.DisplayName", "Reloading" },
				{ "ECS_Reloading.Name", "ECombatState::ECS_Reloading" },
				{ "ECS_Unoccupied.DisplayName", "Unoccupied" },
				{ "ECS_Unoccupied.Name", "ECombatState::ECS_Unoccupied" },
				{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Cyberpunk2022,
				nullptr,
				"ECombatState",
				"ECombatState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ACyberpunk2022Character::execFireReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireReset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACyberpunk2022Character::execGetCrosshairSpreadMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCrosshairSpreadMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACyberpunk2022Character::execGetMesh1P)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMesh1P();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACyberpunk2022Character::execFinishCrosshairBulletFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishCrosshairBulletFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACyberpunk2022Character::execFinishReloading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishReloading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACyberpunk2022Character::execReleaseClip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseClip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACyberpunk2022Character::execGrabClip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrabClip();
		P_NATIVE_END;
	}
	void ACyberpunk2022Character::StaticRegisterNativesACyberpunk2022Character()
	{
		UClass* Class = ACyberpunk2022Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishCrosshairBulletFire", &ACyberpunk2022Character::execFinishCrosshairBulletFire },
			{ "FinishReloading", &ACyberpunk2022Character::execFinishReloading },
			{ "FireReset", &ACyberpunk2022Character::execFireReset },
			{ "GetCrosshairSpreadMultiplier", &ACyberpunk2022Character::execGetCrosshairSpreadMultiplier },
			{ "GetMesh1P", &ACyberpunk2022Character::execGetMesh1P },
			{ "GrabClip", &ACyberpunk2022Character::execGrabClip },
			{ "ReleaseClip", &ACyberpunk2022Character::execReleaseClip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACyberpunk2022Character_FinishCrosshairBulletFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunk2022Character_FinishCrosshairBulletFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunk2022Character_FinishCrosshairBulletFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunk2022Character, nullptr, "FinishCrosshairBulletFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunk2022Character_FinishCrosshairBulletFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunk2022Character_FinishCrosshairBulletFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunk2022Character_FinishCrosshairBulletFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberpunk2022Character_FinishCrosshairBulletFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunk2022Character_FinishReloading_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunk2022Character_FinishReloading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunk2022Character_FinishReloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunk2022Character, nullptr, "FinishReloading", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunk2022Character_FinishReloading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunk2022Character_FinishReloading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunk2022Character_FinishReloading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberpunk2022Character_FinishReloading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunk2022Character_FireReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunk2022Character_FireReset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunk2022Character_FireReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunk2022Character, nullptr, "FireReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunk2022Character_FireReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunk2022Character_FireReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunk2022Character_FireReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberpunk2022Character_FireReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunk2022Character_GetCrosshairSpreadMultiplier_Statics
	{
		struct Cyberpunk2022Character_eventGetCrosshairSpreadMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACyberpunk2022Character_GetCrosshairSpreadMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Cyberpunk2022Character_eventGetCrosshairSpreadMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberpunk2022Character_GetCrosshairSpreadMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberpunk2022Character_GetCrosshairSpreadMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunk2022Character_GetCrosshairSpreadMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunk2022Character_GetCrosshairSpreadMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunk2022Character, nullptr, "GetCrosshairSpreadMultiplier", nullptr, nullptr, sizeof(Cyberpunk2022Character_eventGetCrosshairSpreadMultiplier_Parms), Z_Construct_UFunction_ACyberpunk2022Character_GetCrosshairSpreadMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunk2022Character_GetCrosshairSpreadMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunk2022Character_GetCrosshairSpreadMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunk2022Character_GetCrosshairSpreadMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunk2022Character_GetCrosshairSpreadMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberpunk2022Character_GetCrosshairSpreadMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunk2022Character_GetMesh1P_Statics
	{
		struct Cyberpunk2022Character_eventGetMesh1P_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunk2022Character_GetMesh1P_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACyberpunk2022Character_GetMesh1P_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Cyberpunk2022Character_eventGetMesh1P_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunk2022Character_GetMesh1P_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunk2022Character_GetMesh1P_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberpunk2022Character_GetMesh1P_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberpunk2022Character_GetMesh1P_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunk2022Character_GetMesh1P_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns Mesh1P subobject **/" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
		{ "ToolTip", "Returns Mesh1P subobject *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunk2022Character_GetMesh1P_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunk2022Character, nullptr, "GetMesh1P", nullptr, nullptr, sizeof(Cyberpunk2022Character_eventGetMesh1P_Parms), Z_Construct_UFunction_ACyberpunk2022Character_GetMesh1P_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunk2022Character_GetMesh1P_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunk2022Character_GetMesh1P_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunk2022Character_GetMesh1P_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunk2022Character_GetMesh1P()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberpunk2022Character_GetMesh1P_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunk2022Character_GrabClip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunk2022Character_GrabClip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunk2022Character_GrabClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunk2022Character, nullptr, "GrabClip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunk2022Character_GrabClip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunk2022Character_GrabClip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunk2022Character_GrabClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberpunk2022Character_GrabClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunk2022Character_ReleaseClip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunk2022Character_ReleaseClip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunk2022Character_ReleaseClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunk2022Character, nullptr, "ReleaseClip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunk2022Character_ReleaseClip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunk2022Character_ReleaseClip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunk2022Character_ReleaseClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberpunk2022Character_ReleaseClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACyberpunk2022Character_NoRegister()
	{
		return ACyberpunk2022Character::StaticClass();
	}
	struct Z_Construct_UClass_ACyberpunk2022Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsingMotionControllers_MetaData[];
#endif
		static void NewProp_bUsingMotionControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingMotionControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__moveSide_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__moveSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ikLeftHandSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ikLeftHandSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__equippedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__equippedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultWeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultWeaponClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__combatState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__combatState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__combatState;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__ammoMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__ammoMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__ammoMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ammoMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__ammoMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crosshairSpreadMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__crosshairSpreadMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crosshairVelocityFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__crosshairVelocityFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crosshairInAirFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__crosshairInAirFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crosshairInShootingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__crosshairInShootingFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__clipTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__clipTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__handSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__handSceneComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACyberpunk2022Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Cyberpunk2022,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACyberpunk2022Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACyberpunk2022Character_FinishCrosshairBulletFire, "FinishCrosshairBulletFire" }, // 529400376
		{ &Z_Construct_UFunction_ACyberpunk2022Character_FinishReloading, "FinishReloading" }, // 4039475776
		{ &Z_Construct_UFunction_ACyberpunk2022Character_FireReset, "FireReset" }, // 2531355662
		{ &Z_Construct_UFunction_ACyberpunk2022Character_GetCrosshairSpreadMultiplier, "GetCrosshairSpreadMultiplier" }, // 3224777735
		{ &Z_Construct_UFunction_ACyberpunk2022Character_GetMesh1P, "GetMesh1P" }, // 644187130
		{ &Z_Construct_UFunction_ACyberpunk2022Character_GrabClip, "GrabClip" }, // 4104359669
		{ &Z_Construct_UFunction_ACyberpunk2022Character_ReleaseClip, "ReleaseClip" }, // 1050804086
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Cyberpunk2022Character.h" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Gun muzzle's offset from the characters location */" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** Projectile class to spawn */" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
		{ "ToolTip", "Projectile class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, ProjectileClass), Z_Construct_UClass_ACyberpunk2022Projectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** AnimMontage to play each time we fire */" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_ReloadAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** AnimMontage to play each time we fire */" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_ReloadAnimation = { "ReloadAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, ReloadAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_ReloadAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_ReloadAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_bUsingMotionControllers_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Whether to use motion controller location for aiming. */" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
		{ "ToolTip", "Whether to use motion controller location for aiming." },
	};
#endif
	void Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_bUsingMotionControllers_SetBit(void* Obj)
	{
		((ACyberpunk2022Character*)Obj)->bUsingMotionControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_bUsingMotionControllers = { "bUsingMotionControllers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ACyberpunk2022Character), &Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_bUsingMotionControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_bUsingMotionControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_bUsingMotionControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__moveSide_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__moveSide = { "_moveSide", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, _moveSide), METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__moveSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__moveSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__ikLeftHandSocket_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__ikLeftHandSocket = { "_ikLeftHandSocket", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, _ikLeftHandSocket), Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__ikLeftHandSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__ikLeftHandSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__equippedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__equippedWeapon = { "_equippedWeapon", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, _equippedWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__equippedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__equippedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_DefaultWeaponClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_DefaultWeaponClass = { "DefaultWeaponClass", nullptr, (EPropertyFlags)0x0044000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, DefaultWeaponClass), Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_DefaultWeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_DefaultWeaponClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__combatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__combatState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__combatState = { "_combatState", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, _combatState), Z_Construct_UEnum_Cyberpunk2022_ECombatState, METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__combatState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__combatState_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__ammoMap_ValueProp = { "_ammoMap", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__ammoMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__ammoMap_Key_KeyProp = { "_ammoMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Cyberpunk2022_EAmmoType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__ammoMap_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__ammoMap = { "_ammoMap", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, _ammoMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__ammoMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__ammoMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__crosshairSpreadMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__crosshairSpreadMultiplier = { "_crosshairSpreadMultiplier", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, _crosshairSpreadMultiplier), METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__crosshairSpreadMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__crosshairSpreadMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__crosshairVelocityFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__crosshairVelocityFactor = { "_crosshairVelocityFactor", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, _crosshairVelocityFactor), METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__crosshairVelocityFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__crosshairVelocityFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__crosshairInAirFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__crosshairInAirFactor = { "_crosshairInAirFactor", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, _crosshairInAirFactor), METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__crosshairInAirFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__crosshairInAirFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__crosshairInShootingFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__crosshairInShootingFactor = { "_crosshairInShootingFactor", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, _crosshairInShootingFactor), METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__crosshairInShootingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__crosshairInShootingFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__clipTransform_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__clipTransform = { "_clipTransform", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, _clipTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__clipTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__clipTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__handSceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cyberpunk2022Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__handSceneComponent = { "_handSceneComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunk2022Character, _handSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__handSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__handSceneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACyberpunk2022Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_Mesh1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_ReloadAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_bUsingMotionControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__moveSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__ikLeftHandSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__equippedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp_DefaultWeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__combatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__combatState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__ammoMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__ammoMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__ammoMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__ammoMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__crosshairSpreadMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__crosshairVelocityFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__crosshairInAirFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__crosshairInShootingFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__clipTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunk2022Character_Statics::NewProp__handSceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACyberpunk2022Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACyberpunk2022Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACyberpunk2022Character_Statics::ClassParams = {
		&ACyberpunk2022Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACyberpunk2022Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACyberpunk2022Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunk2022Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACyberpunk2022Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACyberpunk2022Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACyberpunk2022Character, 285528518);
	template<> CYBERPUNK2022_API UClass* StaticClass<ACyberpunk2022Character>()
	{
		return ACyberpunk2022Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACyberpunk2022Character(Z_Construct_UClass_ACyberpunk2022Character, &ACyberpunk2022Character::StaticClass, TEXT("/Script/Cyberpunk2022"), TEXT("ACyberpunk2022Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACyberpunk2022Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
