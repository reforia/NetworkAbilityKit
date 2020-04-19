// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKABILITYKIT_AttributeComp_generated_h
#error "AttributeComp.generated.h already included, missing '#pragma once' in AttributeComp.h"
#endif
#define NETWORKABILITYKIT_AttributeComp_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeComp_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitializeStatusPreset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeStatusPreset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeAttributePreset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeAttributePreset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeAttributeComp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeAttributeComp(); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeComp_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializeStatusPreset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeStatusPreset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeAttributePreset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeAttributePreset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeAttributeComp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeAttributeComp(); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeComp_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributeComp(); \
	friend struct Z_Construct_UClass_UAttributeComp_Statics; \
public: \
	DECLARE_CLASS(UAttributeComp, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(UAttributeComp) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeComp_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAttributeComp(); \
	friend struct Z_Construct_UClass_UAttributeComp_Statics; \
public: \
	DECLARE_CLASS(UAttributeComp, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(UAttributeComp) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeComp_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributeComp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributeComp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeComp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeComp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeComp(UAttributeComp&&); \
	NO_API UAttributeComp(const UAttributeComp&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeComp_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeComp(UAttributeComp&&); \
	NO_API UAttributeComp(const UAttributeComp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeComp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeComp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttributeComp)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeComp_h_13_PRIVATE_PROPERTY_OFFSET
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeComp_h_10_PROLOG
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeComp_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeComp_h_13_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeComp_h_13_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeComp_h_13_INCLASS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeComp_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeComp_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeComp_h_13_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeComp_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeComp_h_13_INCLASS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeComp_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class UAttributeComp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeComp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
