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
struct FVector;
struct FHitResult;
#ifdef CYBERPUNK2022_Cyberpunk2022Projectile_generated_h
#error "Cyberpunk2022Projectile.generated.h already included, missing '#pragma once' in Cyberpunk2022Projectile.h"
#endif
#define CYBERPUNK2022_Cyberpunk2022Projectile_generated_h

#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_15_SPARSE_DATA
#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACyberpunk2022Projectile(); \
	friend struct Z_Construct_UClass_ACyberpunk2022Projectile_Statics; \
public: \
	DECLARE_CLASS(ACyberpunk2022Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cyberpunk2022"), NO_API) \
	DECLARE_SERIALIZER(ACyberpunk2022Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACyberpunk2022Projectile(); \
	friend struct Z_Construct_UClass_ACyberpunk2022Projectile_Statics; \
public: \
	DECLARE_CLASS(ACyberpunk2022Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cyberpunk2022"), NO_API) \
	DECLARE_SERIALIZER(ACyberpunk2022Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACyberpunk2022Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACyberpunk2022Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACyberpunk2022Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACyberpunk2022Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACyberpunk2022Projectile(ACyberpunk2022Projectile&&); \
	NO_API ACyberpunk2022Projectile(const ACyberpunk2022Projectile&); \
public:


#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACyberpunk2022Projectile(ACyberpunk2022Projectile&&); \
	NO_API ACyberpunk2022Projectile(const ACyberpunk2022Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACyberpunk2022Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACyberpunk2022Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACyberpunk2022Projectile)


#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ACyberpunk2022Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ACyberpunk2022Projectile, ProjectileMovement); }


#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_12_PROLOG
#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_15_SPARSE_DATA \
	Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_15_RPC_WRAPPERS \
	Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_15_INCLASS \
	Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_15_SPARSE_DATA \
	Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_15_INCLASS_NO_PURE_DECLS \
	Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CYBERPUNK2022_API UClass* StaticClass<class ACyberpunk2022Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
