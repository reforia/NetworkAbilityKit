// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKABILITYKIT_I_GameRules_generated_h
#error "I_GameRules.generated.h already included, missing '#pragma once' in I_GameRules.h"
#endif
#define NETWORKABILITYKIT_I_GameRules_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h_13_RPC_WRAPPERS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NETWORKABILITYKIT_API UI_GameRules(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UI_GameRules) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NETWORKABILITYKIT_API, UI_GameRules); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UI_GameRules); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NETWORKABILITYKIT_API UI_GameRules(UI_GameRules&&); \
	NETWORKABILITYKIT_API UI_GameRules(const UI_GameRules&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NETWORKABILITYKIT_API UI_GameRules(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NETWORKABILITYKIT_API UI_GameRules(UI_GameRules&&); \
	NETWORKABILITYKIT_API UI_GameRules(const UI_GameRules&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NETWORKABILITYKIT_API, UI_GameRules); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UI_GameRules); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UI_GameRules)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUI_GameRules(); \
	friend struct Z_Construct_UClass_UI_GameRules_Statics; \
public: \
	DECLARE_CLASS(UI_GameRules, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NETWORKABILITYKIT_API) \
	DECLARE_SERIALIZER(UI_GameRules)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h_13_GENERATED_UINTERFACE_BODY() \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h_13_GENERATED_UINTERFACE_BODY() \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~II_GameRules() {} \
public: \
	typedef UI_GameRules UClassType; \
	typedef II_GameRules ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~II_GameRules() {} \
public: \
	typedef UI_GameRules UClassType; \
	typedef II_GameRules ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h_10_PROLOG
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h_13_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class UI_GameRules>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_GameRules_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
