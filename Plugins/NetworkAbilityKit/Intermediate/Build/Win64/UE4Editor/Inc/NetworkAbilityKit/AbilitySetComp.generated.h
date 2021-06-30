// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKABILITYKIT_AbilitySetComp_generated_h
#error "AbilitySetComp.generated.h already included, missing '#pragma once' in AbilitySetComp.h"
#endif
#define NETWORKABILITYKIT_AbilitySetComp_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_11_DELEGATE \
static inline void FFinishedInitializeAbilitySetDelegate_DelegateWrapper(const FMulticastScriptDelegate& FinishedInitializeAbilitySetDelegate) \
{ \
	FinishedInitializeAbilitySetDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_SPARSE_DATA
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_RPC_WRAPPERS \
	virtual bool CLIENT_BroadcastFinishedInitializationEvent_Validate(); \
	virtual void CLIENT_BroadcastFinishedInitializationEvent_Implementation(); \
	virtual bool InitializeAbilitySet_Validate(); \
	virtual void InitializeAbilitySet_Implementation(); \
 \
	DECLARE_FUNCTION(execCLIENT_BroadcastFinishedInitializationEvent); \
	DECLARE_FUNCTION(execInitializeAbilitySet);


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CLIENT_BroadcastFinishedInitializationEvent_Validate(); \
	virtual void CLIENT_BroadcastFinishedInitializationEvent_Implementation(); \
	virtual bool InitializeAbilitySet_Validate(); \
	virtual void InitializeAbilitySet_Implementation(); \
 \
	DECLARE_FUNCTION(execCLIENT_BroadcastFinishedInitializationEvent); \
	DECLARE_FUNCTION(execInitializeAbilitySet);


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_EVENT_PARMS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_CALLBACK_WRAPPERS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilitySetComp(); \
	friend struct Z_Construct_UClass_UAbilitySetComp_Statics; \
public: \
	DECLARE_CLASS(UAbilitySetComp, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySetComp) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AbilitySetObject=NETFIELD_REP_START, \
		NETFIELD_REP_END=AbilitySetObject	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAbilitySetComp(); \
	friend struct Z_Construct_UClass_UAbilitySetComp_Statics; \
public: \
	DECLARE_CLASS(UAbilitySetComp, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySetComp) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AbilitySetObject=NETFIELD_REP_START, \
		NETFIELD_REP_END=AbilitySetObject	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySetComp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySetComp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySetComp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySetComp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitySetComp(UAbilitySetComp&&); \
	NO_API UAbilitySetComp(const UAbilitySetComp&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitySetComp(UAbilitySetComp&&); \
	NO_API UAbilitySetComp(const UAbilitySetComp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySetComp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySetComp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilitySetComp)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_PRIVATE_PROPERTY_OFFSET
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_13_PROLOG \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_EVENT_PARMS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_SPARSE_DATA \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_INCLASS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_SPARSE_DATA \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_INCLASS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class UAbilitySetComp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetComp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
