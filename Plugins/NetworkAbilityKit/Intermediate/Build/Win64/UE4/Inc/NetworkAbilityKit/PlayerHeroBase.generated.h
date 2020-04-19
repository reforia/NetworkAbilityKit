// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef NETWORKABILITYKIT_PlayerHeroBase_generated_h
#error "PlayerHeroBase.generated.h already included, missing '#pragma once' in PlayerHeroBase.h"
#endif
#define NETWORKABILITYKIT_PlayerHeroBase_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroBase_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateCameraOffset) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_CursorDirectionNormalized); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DistanceProportion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCameraOffset(Z_Param_CursorDirectionNormalized,Z_Param_DistanceProportion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializePlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializePlayer(); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateCameraOffset) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_CursorDirectionNormalized); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DistanceProportion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCameraOffset(Z_Param_CursorDirectionNormalized,Z_Param_DistanceProportion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializePlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializePlayer(); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerHeroBase(); \
	friend struct Z_Construct_UClass_APlayerHeroBase_Statics; \
public: \
	DECLARE_CLASS(APlayerHeroBase, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(APlayerHeroBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroBase_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerHeroBase(); \
	friend struct Z_Construct_UClass_APlayerHeroBase_Statics; \
public: \
	DECLARE_CLASS(APlayerHeroBase, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(APlayerHeroBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroBase_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerHeroBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerHeroBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerHeroBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerHeroBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerHeroBase(APlayerHeroBase&&); \
	NO_API APlayerHeroBase(const APlayerHeroBase&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerHeroBase(APlayerHeroBase&&); \
	NO_API APlayerHeroBase(const APlayerHeroBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerHeroBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerHeroBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerHeroBase)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroBase_h_20_PRIVATE_PROPERTY_OFFSET
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroBase_h_17_PROLOG
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroBase_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroBase_h_20_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroBase_h_20_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroBase_h_20_INCLASS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroBase_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroBase_h_20_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroBase_h_20_INCLASS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class APlayerHeroBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
