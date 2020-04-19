// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKABILITYKIT_AttrSet_Default_generated_h
#error "AttrSet_Default.generated.h already included, missing '#pragma once' in AttrSet_Default.h"
#endif
#define NETWORKABILITYKIT_AttrSet_Default_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Default_h_9_DELEGATE \
static inline void FOnDeathDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDeathDelegate) \
{ \
	OnDeathDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Default_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_MaxManaChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxManaChanged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ManaChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ManaChanged(); \
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


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Default_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MaxManaChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxManaChanged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ManaChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ManaChanged(); \
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


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Default_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAttrSet_Default(); \
	friend struct Z_Construct_UClass_AAttrSet_Default_Statics; \
public: \
	DECLARE_CLASS(AAttrSet_Default, AAttributeSetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AAttrSet_Default) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Default_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAAttrSet_Default(); \
	friend struct Z_Construct_UClass_AAttrSet_Default_Statics; \
public: \
	DECLARE_CLASS(AAttrSet_Default, AAttributeSetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AAttrSet_Default) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Default_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAttrSet_Default(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAttrSet_Default) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAttrSet_Default); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAttrSet_Default); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAttrSet_Default(AAttrSet_Default&&); \
	NO_API AAttrSet_Default(const AAttrSet_Default&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Default_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAttrSet_Default(AAttrSet_Default&&); \
	NO_API AAttrSet_Default(const AAttrSet_Default&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAttrSet_Default); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAttrSet_Default); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAttrSet_Default)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Default_h_16_PRIVATE_PROPERTY_OFFSET
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Default_h_13_PROLOG
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Default_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Default_h_16_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Default_h_16_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Default_h_16_INCLASS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Default_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Default_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Default_h_16_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Default_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Default_h_16_INCLASS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Default_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class AAttrSet_Default>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttrSet_Default_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
