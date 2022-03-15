// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef CYBERPUNK2022_TakingDamageInterface_generated_h
#error "TakingDamageInterface.generated.h already included, missing '#pragma once' in TakingDamageInterface.h"
#endif
#define CYBERPUNK2022_TakingDamageInterface_generated_h

#define Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_SPARSE_DATA
#define Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_RPC_WRAPPERS
#define Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_EVENT_PARMS \
	struct TakingDamageInterface_eventTakingDamage_Parms \
	{ \
		FName bone; \
		int32 damage; \
		FVector impact_normal; \
	};


#define Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_CALLBACK_WRAPPERS
#define Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CYBERPUNK2022_API UTakingDamageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakingDamageInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CYBERPUNK2022_API, UTakingDamageInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakingDamageInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CYBERPUNK2022_API UTakingDamageInterface(UTakingDamageInterface&&); \
	CYBERPUNK2022_API UTakingDamageInterface(const UTakingDamageInterface&); \
public:


#define Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CYBERPUNK2022_API UTakingDamageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CYBERPUNK2022_API UTakingDamageInterface(UTakingDamageInterface&&); \
	CYBERPUNK2022_API UTakingDamageInterface(const UTakingDamageInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CYBERPUNK2022_API, UTakingDamageInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakingDamageInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakingDamageInterface)


#define Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTakingDamageInterface(); \
	friend struct Z_Construct_UClass_UTakingDamageInterface_Statics; \
public: \
	DECLARE_CLASS(UTakingDamageInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Cyberpunk2022"), CYBERPUNK2022_API) \
	DECLARE_SERIALIZER(UTakingDamageInterface)


#define Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITakingDamageInterface() {} \
public: \
	typedef UTakingDamageInterface UClassType; \
	typedef ITakingDamageInterface ThisClass; \
	static void Execute_TakingDamage(UObject* O, FName bone, int32 damage, FVector impact_normal); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ITakingDamageInterface() {} \
public: \
	typedef UTakingDamageInterface UClassType; \
	typedef ITakingDamageInterface ThisClass; \
	static void Execute_TakingDamage(UObject* O, FName bone, int32 damage, FVector impact_normal); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_10_PROLOG \
	Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_EVENT_PARMS


#define Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_SPARSE_DATA \
	Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_RPC_WRAPPERS \
	Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_CALLBACK_WRAPPERS \
	Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_SPARSE_DATA \
	Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_CALLBACK_WRAPPERS \
	Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CYBERPUNK2022_API UClass* StaticClass<class UTakingDamageInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cyberpunk2022_Source_Cyberpunk2022_TakingDamageInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
