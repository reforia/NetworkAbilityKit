// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKABILITYKIT_I_PlayerController_generated_h
#error "I_PlayerController.generated.h already included, missing '#pragma once' in I_PlayerController.h"
#endif
#define NETWORKABILITYKIT_I_PlayerController_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_15_SPARSE_DATA
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_15_RPC_WRAPPERS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NETWORKABILITYKIT_API UI_PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UI_PlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NETWORKABILITYKIT_API, UI_PlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UI_PlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NETWORKABILITYKIT_API UI_PlayerController(UI_PlayerController&&); \
	NETWORKABILITYKIT_API UI_PlayerController(const UI_PlayerController&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NETWORKABILITYKIT_API UI_PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NETWORKABILITYKIT_API UI_PlayerController(UI_PlayerController&&); \
	NETWORKABILITYKIT_API UI_PlayerController(const UI_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NETWORKABILITYKIT_API, UI_PlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UI_PlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UI_PlayerController)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUI_PlayerController(); \
	friend struct Z_Construct_UClass_UI_PlayerController_Statics; \
public: \
	DECLARE_CLASS(UI_PlayerController, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NETWORKABILITYKIT_API) \
	DECLARE_SERIALIZER(UI_PlayerController)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_15_GENERATED_UINTERFACE_BODY() \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_15_GENERATED_UINTERFACE_BODY() \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~II_PlayerController() {} \
public: \
	typedef UI_PlayerController UClassType; \
	typedef II_PlayerController ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~II_PlayerController() {} \
public: \
	typedef UI_PlayerController UClassType; \
	typedef II_PlayerController ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_12_PROLOG
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_15_SPARSE_DATA \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_15_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_15_SPARSE_DATA \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class UI_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
