// Copyright Epic Games, Inc. All Rights Reserved.
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


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_SPARSE_DATA
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_MaxStaminaChanged); \
	DECLARE_FUNCTION(execOnRep_StaminaChanged); \
	DECLARE_FUNCTION(execOnRep_MaxHealthChanged); \
	DECLARE_FUNCTION(execOnRep_HealthChanged);


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MaxStaminaChanged); \
	DECLARE_FUNCTION(execOnRep_StaminaChanged); \
	DECLARE_FUNCTION(execOnRep_MaxHealthChanged); \
	DECLARE_FUNCTION(execOnRep_HealthChanged);


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAttrSet_Action(); \
	friend struct Z_Construct_UClass_AAttrSet_Action_Statics; \
public: \
	DECLARE_CLASS(AAttrSet_Action, AAttributeSetBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AAttrSet_Action) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Stamina, \
		MaxStamina, \
		NETFIELD_REP_END=MaxStamina	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAAttrSet_Action(); \
	friend struct Z_Construct_UClass_AAttrSet_Action_Statics; \
public: \
	DECLARE_CLASS(AAttrSet_Action, AAttributeSetBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AAttrSet_Action) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Stamina, \
		MaxStamina, \
		NETFIELD_REP_END=MaxStamina	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


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
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_SPARSE_DATA \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_INCLASS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_SPARSE_DATA \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_INCLASS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class AAttrSet_Action>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Action_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
