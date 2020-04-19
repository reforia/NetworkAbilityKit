// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EModifierType : uint8;
class AModifierBase;
class AActor;
#ifdef NETWORKABILITYKIT_I_Modifier_generated_h
#error "I_Modifier.generated.h already included, missing '#pragma once' in I_Modifier.h"
#endif
#define NETWORKABILITYKIT_I_Modifier_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_RPC_WRAPPERS \
	virtual void OnTryRemoveModifierByType_Implementation(EModifierType ModifierType) {}; \
	virtual void OnTryRemoveModifier_Implementation(FName ModifierName) {}; \
	virtual void OnReceivedModifier_Implementation(AModifierBase* Modifier, AActor* ModifierInstigator) {}; \
 \
	DECLARE_FUNCTION(execOnTryRemoveModifierByType) \
	{ \
		P_GET_ENUM(EModifierType,Z_Param_ModifierType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTryRemoveModifierByType_Implementation(EModifierType(Z_Param_ModifierType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTryRemoveModifier) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ModifierName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTryRemoveModifier_Implementation(Z_Param_ModifierName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReceivedModifier) \
	{ \
		P_GET_OBJECT(AModifierBase,Z_Param_Modifier); \
		P_GET_OBJECT(AActor,Z_Param_ModifierInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReceivedModifier_Implementation(Z_Param_Modifier,Z_Param_ModifierInstigator); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnTryRemoveModifierByType_Implementation(EModifierType ModifierType) {}; \
	virtual void OnTryRemoveModifier_Implementation(FName ModifierName) {}; \
	virtual void OnReceivedModifier_Implementation(AModifierBase* Modifier, AActor* ModifierInstigator) {}; \
 \
	DECLARE_FUNCTION(execOnTryRemoveModifierByType) \
	{ \
		P_GET_ENUM(EModifierType,Z_Param_ModifierType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTryRemoveModifierByType_Implementation(EModifierType(Z_Param_ModifierType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTryRemoveModifier) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ModifierName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTryRemoveModifier_Implementation(Z_Param_ModifierName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReceivedModifier) \
	{ \
		P_GET_OBJECT(AModifierBase,Z_Param_Modifier); \
		P_GET_OBJECT(AActor,Z_Param_ModifierInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReceivedModifier_Implementation(Z_Param_Modifier,Z_Param_ModifierInstigator); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_EVENT_PARMS \
	struct I_Modifier_eventOnReceivedModifier_Parms \
	{ \
		AModifierBase* Modifier; \
		AActor* ModifierInstigator; \
	}; \
	struct I_Modifier_eventOnTryRemoveModifier_Parms \
	{ \
		FName ModifierName; \
	}; \
	struct I_Modifier_eventOnTryRemoveModifierByType_Parms \
	{ \
		EModifierType ModifierType; \
	};


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_CALLBACK_WRAPPERS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NETWORKABILITYKIT_API UI_Modifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UI_Modifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NETWORKABILITYKIT_API, UI_Modifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UI_Modifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NETWORKABILITYKIT_API UI_Modifier(UI_Modifier&&); \
	NETWORKABILITYKIT_API UI_Modifier(const UI_Modifier&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NETWORKABILITYKIT_API UI_Modifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NETWORKABILITYKIT_API UI_Modifier(UI_Modifier&&); \
	NETWORKABILITYKIT_API UI_Modifier(const UI_Modifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NETWORKABILITYKIT_API, UI_Modifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UI_Modifier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UI_Modifier)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUI_Modifier(); \
	friend struct Z_Construct_UClass_UI_Modifier_Statics; \
public: \
	DECLARE_CLASS(UI_Modifier, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NETWORKABILITYKIT_API) \
	DECLARE_SERIALIZER(UI_Modifier)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_GENERATED_UINTERFACE_BODY() \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_GENERATED_UINTERFACE_BODY() \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~II_Modifier() {} \
public: \
	typedef UI_Modifier UClassType; \
	typedef II_Modifier ThisClass; \
	static void Execute_OnReceivedModifier(UObject* O, AModifierBase* Modifier, AActor* ModifierInstigator); \
	static void Execute_OnTryRemoveModifier(UObject* O, FName ModifierName); \
	static void Execute_OnTryRemoveModifierByType(UObject* O, EModifierType ModifierType); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~II_Modifier() {} \
public: \
	typedef UI_Modifier UClassType; \
	typedef II_Modifier ThisClass; \
	static void Execute_OnReceivedModifier(UObject* O, AModifierBase* Modifier, AActor* ModifierInstigator); \
	static void Execute_OnTryRemoveModifier(UObject* O, FName ModifierName); \
	static void Execute_OnTryRemoveModifierByType(UObject* O, EModifierType ModifierType); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_13_PROLOG \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_EVENT_PARMS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class UI_Modifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_I_Modifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
