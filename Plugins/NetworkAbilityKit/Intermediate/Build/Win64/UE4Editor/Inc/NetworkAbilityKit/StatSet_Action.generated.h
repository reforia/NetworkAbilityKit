// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKABILITYKIT_StatSet_Action_generated_h
#error "StatSet_Action.generated.h already included, missing '#pragma once' in StatSet_Action.h"
#endif
#define NETWORKABILITYKIT_StatSet_Action_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_15_SPARSE_DATA
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_15_RPC_WRAPPERS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStatSet_Action(); \
	friend struct Z_Construct_UClass_AStatSet_Action_Statics; \
public: \
	DECLARE_CLASS(AStatSet_Action, AStatusSetBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AStatSet_Action) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Stun=NETFIELD_REP_START, \
		Equipped, \
		InEquipping, \
		InLockMode, \
		InSprint, \
		InStopping, \
		InDodging, \
		InAttacking, \
		NETFIELD_REP_END=InAttacking	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAStatSet_Action(); \
	friend struct Z_Construct_UClass_AStatSet_Action_Statics; \
public: \
	DECLARE_CLASS(AStatSet_Action, AStatusSetBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AStatSet_Action) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Stun=NETFIELD_REP_START, \
		Equipped, \
		InEquipping, \
		InLockMode, \
		InSprint, \
		InStopping, \
		InDodging, \
		InAttacking, \
		NETFIELD_REP_END=InAttacking	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStatSet_Action(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStatSet_Action) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStatSet_Action); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStatSet_Action); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStatSet_Action(AStatSet_Action&&); \
	NO_API AStatSet_Action(const AStatSet_Action&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStatSet_Action(AStatSet_Action&&); \
	NO_API AStatSet_Action(const AStatSet_Action&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStatSet_Action); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStatSet_Action); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStatSet_Action)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_15_PRIVATE_PROPERTY_OFFSET
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_12_PROLOG
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_15_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_15_SPARSE_DATA \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_15_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_15_INCLASS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_15_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_15_SPARSE_DATA \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_15_INCLASS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class AStatSet_Action>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatSet_Action_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
