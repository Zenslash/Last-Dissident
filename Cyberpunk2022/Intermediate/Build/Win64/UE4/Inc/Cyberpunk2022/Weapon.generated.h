// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CYBERPUNK2022_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define CYBERPUNK2022_Weapon_generated_h

#define Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_25_SPARSE_DATA
#define Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_25_RPC_WRAPPERS
#define Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cyberpunk2022"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cyberpunk2022"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___fireSound() { return STRUCT_OFFSET(AWeapon, _fireSound); } \
	FORCEINLINE static uint32 __PPO___muzzleFlash() { return STRUCT_OFFSET(AWeapon, _muzzleFlash); } \
	FORCEINLINE static uint32 __PPO___impactParticles() { return STRUCT_OFFSET(AWeapon, _impactParticles); } \
	FORCEINLINE static uint32 __PPO___beamParticles() { return STRUCT_OFFSET(AWeapon, _beamParticles); } \
	FORCEINLINE static uint32 __PPO___fireRate() { return STRUCT_OFFSET(AWeapon, _fireRate); } \
	FORCEINLINE static uint32 __PPO___ammo() { return STRUCT_OFFSET(AWeapon, _ammo); } \
	FORCEINLINE static uint32 __PPO___magazineCapacity() { return STRUCT_OFFSET(AWeapon, _magazineCapacity); } \
	FORCEINLINE static uint32 __PPO___weaponType() { return STRUCT_OFFSET(AWeapon, _weaponType); } \
	FORCEINLINE static uint32 __PPO___ammoType() { return STRUCT_OFFSET(AWeapon, _ammoType); } \
	FORCEINLINE static uint32 __PPO___reloadMontageSection() { return STRUCT_OFFSET(AWeapon, _reloadMontageSection); } \
	FORCEINLINE static uint32 __PPO___damagePerBullet() { return STRUCT_OFFSET(AWeapon, _damagePerBullet); } \
	FORCEINLINE static uint32 __PPO___recoilX() { return STRUCT_OFFSET(AWeapon, _recoilX); } \
	FORCEINLINE static uint32 __PPO___recoilY() { return STRUCT_OFFSET(AWeapon, _recoilY); }


#define Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_22_PROLOG
#define Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_25_PRIVATE_PROPERTY_OFFSET \
	Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_25_SPARSE_DATA \
	Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_25_RPC_WRAPPERS \
	Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_25_INCLASS \
	Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_25_PRIVATE_PROPERTY_OFFSET \
	Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_25_SPARSE_DATA \
	Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_25_INCLASS_NO_PURE_DECLS \
	Cyberpunk2022_Source_Cyberpunk2022_Weapon_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CYBERPUNK2022_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cyberpunk2022_Source_Cyberpunk2022_Weapon_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::EWT_SMG) 

enum class EWeaponType : uint8;
template<> CYBERPUNK2022_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
