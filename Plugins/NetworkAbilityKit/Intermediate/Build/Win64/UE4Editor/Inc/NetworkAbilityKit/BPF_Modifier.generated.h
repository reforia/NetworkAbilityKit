// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EModifierType : uint8;
class AActor;
class AModifierBase;
#ifdef NETWORKABILITYKIT_BPF_Modifier_generated_h
#error "BPF_Modifier.generated.h already included, missing '#pragma once' in BPF_Modifier.h"
#endif
#define NETWORKABILITYKIT_BPF_Modifier_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_BPF_Modifier_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTryRemoveModifierByTypeFromTarget) \
	{ \
		P_GET_ENUM(EModifierType,Z_Param_ModifierType); \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBPF_Modifier::TryRemoveModifierByTypeFromTarget(EModifierType(Z_Param_ModifierType),Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryRemoveModifierFromTarget) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ModifierName); \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBPF_Modifier::TryRemoveModifierFromTarget(Z_Param_ModifierName,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryApplyModifierToTarget) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ModifierClass); \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_OBJECT(AActor,Z_Param_ModifierInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBPF_Modifier::TryApplyModifierToTarget(Z_Param_ModifierClass,Z_Param_Target,Z_Param_ModifierInstigator); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_BPF_Modifier_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTryRemoveModifierByTypeFromTarget) \
	{ \
		P_GET_ENUM(EModifierType,Z_Param_ModifierType); \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBPF_Modifier::TryRemoveModifierByTypeFromTarget(EModifierType(Z_Param_ModifierType),Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryRemoveModifierFromTarget) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ModifierName); \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBPF_Modifier::TryRemoveModifierFromTarget(Z_Param_ModifierName,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryApplyModifierToTarget) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ModifierClass); \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_OBJECT(AActor,Z_Param_ModifierInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBPF_Modifier::TryApplyModifierToTarget(Z_Param_ModifierClass,Z_Param_Target,Z_Param_ModifierInstigator); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_BPF_Modifier_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBPF_Modifier(); \
	friend struct Z_Construct_UClass_UBPF_Modifier_Statics; \
public: \
	DECLARE_CLASS(UBPF_Modifier, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(UBPF_Modifier)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_BPF_Modifier_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBPF_Modifier(); \
	friend struct Z_Construct_UClass_UBPF_Modifier_Statics; \
public: \
	DECLARE_CLASS(UBPF_Modifier, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(UBPF_Modifier)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_BPF_Modifier_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPF_Modifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPF_Modifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPF_Modifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPF_Modifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPF_Modifier(UBPF_Modifier&&); \
	NO_API UBPF_Modifier(const UBPF_Modifier&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_BPF_Modifier_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPF_Modifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPF_Modifier(UBPF_Modifier&&); \
	NO_API UBPF_Modifier(const UBPF_Modifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPF_Modifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPF_Modifier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPF_Modifier)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_BPF_Modifier_h_17_PRIVATE_PROPERTY_OFFSET
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_BPF_Modifier_h_14_PROLOG
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_BPF_Modifier_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_BPF_Modifier_h_17_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_BPF_Modifier_h_17_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_BPF_Modifier_h_17_INCLASS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_BPF_Modifier_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_BPF_Modifier_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_BPF_Modifier_h_17_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_BPF_Modifier_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_BPF_Modifier_h_17_INCLASS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_BPF_Modifier_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class UBPF_Modifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_BPF_Modifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
