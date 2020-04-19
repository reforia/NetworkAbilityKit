// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
enum class EAbilityNotValidType : uint8;
#ifdef NETWORKABILITYKIT_AbilityBase_generated_h
#error "AbilityBase.generated.h already included, missing '#pragma once' in AbilityBase.h"
#endif
#define NETWORKABILITYKIT_AbilityBase_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_16_DELEGATE \
static inline void FEndAbilityDelegate_DelegateWrapper(const FMulticastScriptDelegate& EndAbilityDelegate) \
{ \
	EndAbilityDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_RPC_WRAPPERS \
	virtual bool ApplyCost_Validate(); \
	virtual void ApplyCost_Implementation(); \
	virtual bool SERVER_AbilityPointCoreLogic_Validate(); \
	virtual void SERVER_AbilityPointCoreLogic_Implementation(); \
	virtual bool GetPointAbilityMousePositionInWorldAndTryCommit_Validate(); \
	virtual void GetPointAbilityMousePositionInWorldAndTryCommit_Implementation(); \
	virtual bool CommitAbility_Validate(); \
	virtual void CommitAbility_Implementation(); \
	virtual bool EndAbility_Validate(); \
	virtual void EndAbility_Implementation(); \
	virtual bool StartCoolDown_Validate(); \
	virtual void StartCoolDown_Implementation(); \
	virtual bool TryActivate_Validate(); \
	virtual void TryActivate_Implementation(); \
 \
	DECLARE_FUNCTION(execAbilityPassive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbilityPassive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbilityTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbilityTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbilityPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbilityPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbilityNoTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbilityNoTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAbilityReadyToEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAbilityReadyToEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyCost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ApplyCost_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ApplyCost_Validate")); \
			return; \
		} \
		P_THIS->ApplyCost_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCoolDownCycleTick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CoolDownCycleTick(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCostPrecheck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CostPrecheck(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivatePrecheck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ActivatePrecheck(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMouseLocationAvailabilityCheck) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_MouseLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->MouseLocationAvailabilityCheck(Z_Param_MouseLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSERVER_AbilityPointCoreLogic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SERVER_AbilityPointCoreLogic_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("SERVER_AbilityPointCoreLogic_Validate")); \
			return; \
		} \
		P_THIS->SERVER_AbilityPointCoreLogic_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointAbilityMousePositionInWorldAndTryCommit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->GetPointAbilityMousePositionInWorldAndTryCommit_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("GetPointAbilityMousePositionInWorldAndTryCommit_Validate")); \
			return; \
		} \
		P_THIS->GetPointAbilityMousePositionInWorldAndTryCommit_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCommitAbility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CommitAbility_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("CommitAbility_Validate")); \
			return; \
		} \
		P_THIS->CommitAbility_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndAbility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->EndAbility_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("EndAbility_Validate")); \
			return; \
		} \
		P_THIS->EndAbility_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCoolDown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->StartCoolDown_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("StartCoolDown_Validate")); \
			return; \
		} \
		P_THIS->StartCoolDown_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartIntervalThink) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartIntervalThink(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryActivate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->TryActivate_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("TryActivate_Validate")); \
			return; \
		} \
		P_THIS->TryActivate_Implementation(); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ApplyCost_Validate(); \
	virtual void ApplyCost_Implementation(); \
	virtual bool SERVER_AbilityPointCoreLogic_Validate(); \
	virtual void SERVER_AbilityPointCoreLogic_Implementation(); \
	virtual bool GetPointAbilityMousePositionInWorldAndTryCommit_Validate(); \
	virtual void GetPointAbilityMousePositionInWorldAndTryCommit_Implementation(); \
	virtual bool CommitAbility_Validate(); \
	virtual void CommitAbility_Implementation(); \
	virtual bool EndAbility_Validate(); \
	virtual void EndAbility_Implementation(); \
	virtual bool StartCoolDown_Validate(); \
	virtual void StartCoolDown_Implementation(); \
	virtual bool TryActivate_Validate(); \
	virtual void TryActivate_Implementation(); \
 \
	DECLARE_FUNCTION(execAbilityPassive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbilityPassive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbilityTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbilityTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbilityPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbilityPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbilityNoTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbilityNoTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAbilityReadyToEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAbilityReadyToEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyCost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ApplyCost_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ApplyCost_Validate")); \
			return; \
		} \
		P_THIS->ApplyCost_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCoolDownCycleTick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CoolDownCycleTick(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCostPrecheck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CostPrecheck(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivatePrecheck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ActivatePrecheck(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMouseLocationAvailabilityCheck) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_MouseLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->MouseLocationAvailabilityCheck(Z_Param_MouseLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSERVER_AbilityPointCoreLogic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SERVER_AbilityPointCoreLogic_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("SERVER_AbilityPointCoreLogic_Validate")); \
			return; \
		} \
		P_THIS->SERVER_AbilityPointCoreLogic_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointAbilityMousePositionInWorldAndTryCommit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->GetPointAbilityMousePositionInWorldAndTryCommit_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("GetPointAbilityMousePositionInWorldAndTryCommit_Validate")); \
			return; \
		} \
		P_THIS->GetPointAbilityMousePositionInWorldAndTryCommit_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCommitAbility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CommitAbility_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("CommitAbility_Validate")); \
			return; \
		} \
		P_THIS->CommitAbility_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndAbility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->EndAbility_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("EndAbility_Validate")); \
			return; \
		} \
		P_THIS->EndAbility_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCoolDown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->StartCoolDown_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("StartCoolDown_Validate")); \
			return; \
		} \
		P_THIS->StartCoolDown_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartIntervalThink) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartIntervalThink(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryActivate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->TryActivate_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("TryActivate_Validate")); \
			return; \
		} \
		P_THIS->TryActivate_Implementation(); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_EVENT_PARMS \
	struct AbilityBase_eventOnNotAvailableYet_Parms \
	{ \
		EAbilityNotValidType AbilityNotValidType; \
	};


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_CALLBACK_WRAPPERS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAbilityBase(); \
	friend struct Z_Construct_UClass_AAbilityBase_Statics; \
public: \
	DECLARE_CLASS(AAbilityBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AAbilityBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAAbilityBase(); \
	friend struct Z_Construct_UClass_AAbilityBase_Statics; \
public: \
	DECLARE_CLASS(AAbilityBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AAbilityBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAbilityBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAbilityBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAbilityBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAbilityBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAbilityBase(AAbilityBase&&); \
	NO_API AAbilityBase(const AAbilityBase&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAbilityBase(AAbilityBase&&); \
	NO_API AAbilityBase(const AAbilityBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAbilityBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAbilityBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAbilityBase)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_PRIVATE_PROPERTY_OFFSET
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_18_PROLOG \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_EVENT_PARMS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_INCLASS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_INCLASS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class AAbilityBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
