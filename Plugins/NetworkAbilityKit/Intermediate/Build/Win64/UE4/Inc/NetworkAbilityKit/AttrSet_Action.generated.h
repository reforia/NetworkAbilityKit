// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKABILITYKIT_AttrSet_Action_generated_h
#error "AttrSet_Action.generated.h already included, missing '#pragma once' in AttrSet_Action.h"
#endif
#define NETWORKABILITYKIT_AttrSet_Action_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_12_DELEGATE \
static inline void FOnPlayerDeathDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerDeathDelegate) \
{ \
	OnPlayerDeathDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_MaxStaminaChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxStaminaChanged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_StaminaChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_StaminaChanged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxHealthChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxHealthChanged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_HealthChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HealthChanged(); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MaxStaminaChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxStaminaChanged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_StaminaChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_StaminaChanged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxHealthChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxHealthChanged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_HealthChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HealthChanged(); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAttrSet_Action(); \
	friend struct Z_Construct_UClass_AAttrSet_Action_Statics; \
public: \
	DECLARE_CLASS(AAttrSet_Action, AAttributeSetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AAttrSet_Action) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAAttrSet_Action(); \
	friend struct Z_Construct_UClass_AAttrSet_Action_Statics; \
public: \
	DECLARE_CLASS(AAttrSet_Action, AAttributeSetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AAttrSet_Action) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAttrSet_Action(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAttrSet_Action) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAttrSet_Action); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAttrSet_Action); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAttrSet_Action(AAttrSet_Action&&); \
	NO_API AAttrSet_Action(const AAttrSet_Action&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAttrSet_Action(AAttrSet_Action&&); \
	NO_API AAttrSet_Action(const AAttrSet_Action&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAttrSet_Action); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAttrSet_Action); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAttrSet_Action)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_PRIVATE_PROPERTY_OFFSET
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_14_PROLOG
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_INCLASS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_INCLASS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class AAttrSet_Action>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
