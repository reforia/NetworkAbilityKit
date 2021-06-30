// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef NETWORKABILITYKIT_ModifierComp_generated_h
#error "ModifierComp.generated.h already included, missing '#pragma once' in ModifierComp.h"
#endif
#define NETWORKABILITYKIT_ModifierComp_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_SPARSE_DATA
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_RPC_WRAPPERS \
	virtual void OnTryRemoveModifierByType_Implementation(EModifierType ModifierType); \
	virtual void OnTryRemoveModifier_Implementation(FName ModifierName); \
	virtual void OnReceivedModifier_Implementation(AModifierBase* Modifier, AActor* ModifierInstigator); \
	virtual bool AddToLocalModifierList_Validate(AModifierBase* ); \
	virtual void AddToLocalModifierList_Implementation(AModifierBase* Modifier); \
 \
	DECLARE_FUNCTION(execOnTryRemoveModifierByType); \
	DECLARE_FUNCTION(execOnTryRemoveModifier); \
	DECLARE_FUNCTION(execOnReceivedModifier); \
	DECLARE_FUNCTION(execRemoveFromLocalModifierBlockTypeList); \
	DECLARE_FUNCTION(execRemoveFromLocalModifierBlockList); \
	DECLARE_FUNCTION(execRemoveFromLocalModifierList); \
	DECLARE_FUNCTION(execOnModifierRemoved); \
	DECLARE_FUNCTION(execBlockTypeCheck); \
	DECLARE_FUNCTION(execBlockListCheck); \
	DECLARE_FUNCTION(execAddToLocalModifierList); \
	DECLARE_FUNCTION(execApplyModifierPrecheck);


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool AddToLocalModifierList_Validate(AModifierBase* ); \
	virtual void AddToLocalModifierList_Implementation(AModifierBase* Modifier); \
 \
	DECLARE_FUNCTION(execOnTryRemoveModifierByType); \
	DECLARE_FUNCTION(execOnTryRemoveModifier); \
	DECLARE_FUNCTION(execOnReceivedModifier); \
	DECLARE_FUNCTION(execRemoveFromLocalModifierBlockTypeList); \
	DECLARE_FUNCTION(execRemoveFromLocalModifierBlockList); \
	DECLARE_FUNCTION(execRemoveFromLocalModifierList); \
	DECLARE_FUNCTION(execOnModifierRemoved); \
	DECLARE_FUNCTION(execBlockTypeCheck); \
	DECLARE_FUNCTION(execBlockListCheck); \
	DECLARE_FUNCTION(execAddToLocalModifierList); \
	DECLARE_FUNCTION(execApplyModifierPrecheck);


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_EVENT_PARMS \
	struct ModifierComp_eventAddToLocalModifierList_Parms \
	{ \
		AModifierBase* Modifier; \
	}; \
	struct ModifierComp_eventOnModifierAdded_Parms \
	{ \
		AModifierBase* AddedModifier; \
	}; \
	struct ModifierComp_eventOnModifierBlocked_Parms \
	{ \
		AModifierBase* BlockedModifier; \
	}; \
	struct ModifierComp_eventOnModifierBlockListAdded_Parms \
	{ \
		TArray<FName> NewBlockModifierNameList; \
	}; \
	struct ModifierComp_eventOnModifierBlockListRemoved_Parms \
	{ \
		TArray<FName> NewBlockedModifierNameList; \
	}; \
	struct ModifierComp_eventOnModifierBlockTypeAdded_Parms \
	{ \
		TArray<EModifierType> NewBlockedModifierTypeList; \
	}; \
	struct ModifierComp_eventOnModifierBlockTypeRemoved_Parms \
	{ \
		TArray<EModifierType> NewBlockedModifierTypeList; \
	}; \
	struct ModifierComp_eventOnReceivedModifier_Parms \
	{ \
		AModifierBase* Modifier; \
		AActor* ModifierInstigator; \
	}; \
	struct ModifierComp_eventOnTryRemoveModifier_Parms \
	{ \
		FName ModifierName; \
	}; \
	struct ModifierComp_eventOnTryRemoveModifierByType_Parms \
	{ \
		EModifierType ModifierType; \
	};


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_CALLBACK_WRAPPERS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModifierComp(); \
	friend struct Z_Construct_UClass_UModifierComp_Statics; \
public: \
	DECLARE_CLASS(UModifierComp, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(UModifierComp) \
	virtual UObject* _getUObject() const override { return const_cast<UModifierComp*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ModifierList=NETFIELD_REP_START, \
		NETFIELD_REP_END=ModifierList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUModifierComp(); \
	friend struct Z_Construct_UClass_UModifierComp_Statics; \
public: \
	DECLARE_CLASS(UModifierComp, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(UModifierComp) \
	virtual UObject* _getUObject() const override { return const_cast<UModifierComp*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ModifierList=NETFIELD_REP_START, \
		NETFIELD_REP_END=ModifierList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModifierComp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModifierComp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModifierComp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModifierComp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModifierComp(UModifierComp&&); \
	NO_API UModifierComp(const UModifierComp&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModifierComp(UModifierComp&&); \
	NO_API UModifierComp(const UModifierComp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModifierComp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModifierComp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UModifierComp)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ModifierList() { return STRUCT_OFFSET(UModifierComp, ModifierList); } \
	FORCEINLINE static uint32 __PPO__ModifierBlockerTypeList() { return STRUCT_OFFSET(UModifierComp, ModifierBlockerTypeList); } \
	FORCEINLINE static uint32 __PPO__ModifierBlockList() { return STRUCT_OFFSET(UModifierComp, ModifierBlockList); }


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_13_PROLOG \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_EVENT_PARMS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_SPARSE_DATA \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_INCLASS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_SPARSE_DATA \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_INCLASS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class UModifierComp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierComp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
