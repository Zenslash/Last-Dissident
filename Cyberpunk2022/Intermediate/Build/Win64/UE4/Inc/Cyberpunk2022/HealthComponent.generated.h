// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CYBERPUNK2022_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define CYBERPUNK2022_HealthComponent_generated_h

#define Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_10_DELEGATE \
static inline void FOutOfHealth_DelegateWrapper(const FMulticastScriptDelegate& OutOfHealth) \
{ \
	OutOfHealth.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_15_SPARSE_DATA
#define Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_15_RPC_WRAPPERS
#define Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cyberpunk2022"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cyberpunk2022"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent)


#define Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___maxHealth() { return STRUCT_OFFSET(UHealthComponent, _maxHealth); } \
	FORCEINLINE static uint32 __PPO___currentHealth() { return STRUCT_OFFSET(UHealthComponent, _currentHealth); } \
	FORCEINLINE static uint32 __PPO___outOfHealthEvent() { return STRUCT_OFFSET(UHealthComponent, _outOfHealthEvent); }


#define Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_12_PROLOG
#define Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_15_SPARSE_DATA \
	Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_15_RPC_WRAPPERS \
	Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_15_INCLASS \
	Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_15_SPARSE_DATA \
	Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_15_INCLASS_NO_PURE_DECLS \
	Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CYBERPUNK2022_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cyberpunk2022_Source_Cyberpunk2022_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
