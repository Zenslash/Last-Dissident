// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef CYBERPUNK2022_HealthPickup_generated_h
#error "HealthPickup.generated.h already included, missing '#pragma once' in HealthPickup.h"
#endif
#define CYBERPUNK2022_HealthPickup_generated_h

#define Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_15_SPARSE_DATA
#define Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPickupSphereOverlap);


#define Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPickupSphereOverlap);


#define Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHealthPickup(); \
	friend struct Z_Construct_UClass_AHealthPickup_Statics; \
public: \
	DECLARE_CLASS(AHealthPickup, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cyberpunk2022"), NO_API) \
	DECLARE_SERIALIZER(AHealthPickup)


#define Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAHealthPickup(); \
	friend struct Z_Construct_UClass_AHealthPickup_Statics; \
public: \
	DECLARE_CLASS(AHealthPickup, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cyberpunk2022"), NO_API) \
	DECLARE_SERIALIZER(AHealthPickup)


#define Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHealthPickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHealthPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthPickup(AHealthPickup&&); \
	NO_API AHealthPickup(const AHealthPickup&); \
public:


#define Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthPickup(AHealthPickup&&); \
	NO_API AHealthPickup(const AHealthPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHealthPickup)


#define Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___pickupMesh() { return STRUCT_OFFSET(AHealthPickup, _pickupMesh); } \
	FORCEINLINE static uint32 __PPO___collisionSphere() { return STRUCT_OFFSET(AHealthPickup, _collisionSphere); }


#define Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_12_PROLOG
#define Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_15_SPARSE_DATA \
	Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_15_RPC_WRAPPERS \
	Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_15_INCLASS \
	Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_15_SPARSE_DATA \
	Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_15_INCLASS_NO_PURE_DECLS \
	Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CYBERPUNK2022_API UClass* StaticClass<class AHealthPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cyberpunk2022_Source_Cyberpunk2022_HealthPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
