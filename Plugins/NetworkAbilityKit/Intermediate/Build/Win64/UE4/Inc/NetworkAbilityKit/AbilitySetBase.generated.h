// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKABILITYKIT_AbilitySetBase_generated_h
#error "AbilitySetBase.generated.h already included, missing '#pragma once' in AbilitySetBase.h"
#endif
#define NETWORKABILITYKIT_AbilitySetBase_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_RPC_WRAPPERS \
	virtual bool InitializeAbilities_Validate(); \
	virtual void InitializeAbilities_Implementation(); \
 \
	DECLARE_FUNCTION(execInitializeAbilities) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->InitializeAbilities_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("InitializeAbilities_Validate")); \
			return; \
		} \
		P_THIS->InitializeAbilities_Implementation(); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool InitializeAbilities_Validate(); \
	virtual void InitializeAbilities_Implementation(); \
 \
	DECLARE_FUNCTION(execInitializeAbilities) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->InitializeAbilities_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("InitializeAbilities_Validate")); \
			return; \
		} \
		P_THIS->InitializeAbilities_Implementation(); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_EVENT_PARMS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_CALLBACK_WRAPPERS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAbilitySetBase(); \
	friend struct Z_Construct_UClass_AAbilitySetBase_Statics; \
public: \
	DECLARE_CLASS(AAbilitySetBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AAbilitySetBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAAbilitySetBase(); \
	friend struct Z_Construct_UClass_AAbilitySetBase_Statics; \
public: \
	DECLARE_CLASS(AAbilitySetBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AAbilitySetBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAbilitySetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAbilitySetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAbilitySetBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAbilitySetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAbilitySetBase(AAbilitySetBase&&); \
	NO_API AAbilitySetBase(const AAbilitySetBase&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAbilitySetBase(AAbilitySetBase&&); \
	NO_API AAbilitySetBase(const AAbilitySetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAbilitySetBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAbilitySetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAbilitySetBase)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_PRIVATE_PROPERTY_OFFSET
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_13_PROLOG \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_EVENT_PARMS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_INCLASS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_INCLASS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class AAbilitySetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilitySetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
