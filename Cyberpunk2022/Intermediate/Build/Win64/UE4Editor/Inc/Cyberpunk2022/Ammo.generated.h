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
#ifdef CYBERPUNK2022_Ammo_generated_h
#error "Ammo.generated.h already included, missing '#pragma once' in Ammo.h"
#endif
#define CYBERPUNK2022_Ammo_generated_h

#define Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_16_SPARSE_DATA
#define Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAmmoSphereOverlap);


#define Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAmmoSphereOverlap);


#define Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAmmo(); \
	friend struct Z_Construct_UClass_AAmmo_Statics; \
public: \
	DECLARE_CLASS(AAmmo, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cyberpunk2022"), NO_API) \
	DECLARE_SERIALIZER(AAmmo)


#define Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAAmmo(); \
	friend struct Z_Construct_UClass_AAmmo_Statics; \
public: \
	DECLARE_CLASS(AAmmo, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cyberpunk2022"), NO_API) \
	DECLARE_SERIALIZER(AAmmo)


#define Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAmmo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAmmo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmmo(AAmmo&&); \
	NO_API AAmmo(const AAmmo&); \
public:


#define Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmmo(AAmmo&&); \
	NO_API AAmmo(const AAmmo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAmmo)


#define Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___ammoMesh() { return STRUCT_OFFSET(AAmmo, _ammoMesh); } \
	FORCEINLINE static uint32 __PPO___ammoType() { return STRUCT_OFFSET(AAmmo, _ammoType); } \
	FORCEINLINE static uint32 __PPO___ammoCollisionSphere() { return STRUCT_OFFSET(AAmmo, _ammoCollisionSphere); }


#define Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_13_PROLOG
#define Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_16_PRIVATE_PROPERTY_OFFSET \
	Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_16_SPARSE_DATA \
	Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_16_RPC_WRAPPERS \
	Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_16_INCLASS \
	Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_16_PRIVATE_PROPERTY_OFFSET \
	Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_16_SPARSE_DATA \
	Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_16_INCLASS_NO_PURE_DECLS \
	Cyberpunk2022_Source_Cyberpunk2022_Ammo_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CYBERPUNK2022_API UClass* StaticClass<class AAmmo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cyberpunk2022_Source_Cyberpunk2022_Ammo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
