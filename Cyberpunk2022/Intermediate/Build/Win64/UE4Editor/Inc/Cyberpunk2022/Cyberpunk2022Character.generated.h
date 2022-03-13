// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef CYBERPUNK2022_Cyberpunk2022Character_generated_h
#error "Cyberpunk2022Character.generated.h already included, missing '#pragma once' in Cyberpunk2022Character.h"
#endif
#define CYBERPUNK2022_Cyberpunk2022Character_generated_h

#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_31_SPARSE_DATA
#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFireReset); \
	DECLARE_FUNCTION(execGetCrosshairSpreadMultiplier); \
	DECLARE_FUNCTION(execGetMesh1P); \
	DECLARE_FUNCTION(execFinishCrosshairBulletFire); \
	DECLARE_FUNCTION(execFinishReloading); \
	DECLARE_FUNCTION(execReleaseClip); \
	DECLARE_FUNCTION(execGrabClip);


#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFireReset); \
	DECLARE_FUNCTION(execGetCrosshairSpreadMultiplier); \
	DECLARE_FUNCTION(execGetMesh1P); \
	DECLARE_FUNCTION(execFinishCrosshairBulletFire); \
	DECLARE_FUNCTION(execFinishReloading); \
	DECLARE_FUNCTION(execReleaseClip); \
	DECLARE_FUNCTION(execGrabClip);


#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACyberpunk2022Character(); \
	friend struct Z_Construct_UClass_ACyberpunk2022Character_Statics; \
public: \
	DECLARE_CLASS(ACyberpunk2022Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cyberpunk2022"), NO_API) \
	DECLARE_SERIALIZER(ACyberpunk2022Character)


#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_31_INCLASS \
private: \
	static void StaticRegisterNativesACyberpunk2022Character(); \
	friend struct Z_Construct_UClass_ACyberpunk2022Character_Statics; \
public: \
	DECLARE_CLASS(ACyberpunk2022Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cyberpunk2022"), NO_API) \
	DECLARE_SERIALIZER(ACyberpunk2022Character)


#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACyberpunk2022Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACyberpunk2022Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACyberpunk2022Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACyberpunk2022Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACyberpunk2022Character(ACyberpunk2022Character&&); \
	NO_API ACyberpunk2022Character(const ACyberpunk2022Character&); \
public:


#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACyberpunk2022Character(ACyberpunk2022Character&&); \
	NO_API ACyberpunk2022Character(const ACyberpunk2022Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACyberpunk2022Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACyberpunk2022Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACyberpunk2022Character)


#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ACyberpunk2022Character, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ACyberpunk2022Character, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO___moveSide() { return STRUCT_OFFSET(ACyberpunk2022Character, _moveSide); } \
	FORCEINLINE static uint32 __PPO___ikLeftHandSocket() { return STRUCT_OFFSET(ACyberpunk2022Character, _ikLeftHandSocket); } \
	FORCEINLINE static uint32 __PPO___equippedWeapon() { return STRUCT_OFFSET(ACyberpunk2022Character, _equippedWeapon); } \
	FORCEINLINE static uint32 __PPO__DefaultWeaponClass() { return STRUCT_OFFSET(ACyberpunk2022Character, DefaultWeaponClass); } \
	FORCEINLINE static uint32 __PPO___combatState() { return STRUCT_OFFSET(ACyberpunk2022Character, _combatState); } \
	FORCEINLINE static uint32 __PPO___ammoMap() { return STRUCT_OFFSET(ACyberpunk2022Character, _ammoMap); } \
	FORCEINLINE static uint32 __PPO___crosshairSpreadMultiplier() { return STRUCT_OFFSET(ACyberpunk2022Character, _crosshairSpreadMultiplier); } \
	FORCEINLINE static uint32 __PPO___crosshairVelocityFactor() { return STRUCT_OFFSET(ACyberpunk2022Character, _crosshairVelocityFactor); } \
	FORCEINLINE static uint32 __PPO___crosshairInAirFactor() { return STRUCT_OFFSET(ACyberpunk2022Character, _crosshairInAirFactor); } \
	FORCEINLINE static uint32 __PPO___crosshairInShootingFactor() { return STRUCT_OFFSET(ACyberpunk2022Character, _crosshairInShootingFactor); } \
	FORCEINLINE static uint32 __PPO___clipTransform() { return STRUCT_OFFSET(ACyberpunk2022Character, _clipTransform); } \
	FORCEINLINE static uint32 __PPO___handSceneComponent() { return STRUCT_OFFSET(ACyberpunk2022Character, _handSceneComponent); }


#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_28_PROLOG
#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_31_PRIVATE_PROPERTY_OFFSET \
	Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_31_SPARSE_DATA \
	Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_31_RPC_WRAPPERS \
	Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_31_INCLASS \
	Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_31_PRIVATE_PROPERTY_OFFSET \
	Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_31_SPARSE_DATA \
	Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_31_INCLASS_NO_PURE_DECLS \
	Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CYBERPUNK2022_API UClass* StaticClass<class ACyberpunk2022Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cyberpunk2022_Source_Cyberpunk2022_Cyberpunk2022Character_h


#define FOREACH_ENUM_ECOMBATSTATE(op) \
	op(ECombatState::ECS_Unoccupied) \
	op(ECombatState::ECS_FireTimerInProgress) \
	op(ECombatState::ECS_Reloading) 

enum class ECombatState : uint8;
template<> CYBERPUNK2022_API UEnum* StaticEnum<ECombatState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
