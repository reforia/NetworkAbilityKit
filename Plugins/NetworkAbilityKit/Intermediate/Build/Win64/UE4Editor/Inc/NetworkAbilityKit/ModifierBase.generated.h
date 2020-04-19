// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKABILITYKIT_ModifierBase_generated_h
#error "ModifierBase.generated.h already included, missing '#pragma once' in ModifierBase.h"
#endif
#define NETWORKABILITYKIT_ModifierBase_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_RPC_WRAPPERS \
	virtual bool AddStack_Validate(int8 ); \
	virtual void AddStack_Implementation(int8 NewStack); \
	virtual bool StartIntervalThink_Validate(float ); \
	virtual void StartIntervalThink_Implementation(float DeltaTick); \
	virtual bool SetModifierActivation_Validate(bool ); \
	virtual void SetModifierActivation_Implementation(bool NewActivate); \
 \
	DECLARE_FUNCTION(execAddStack) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_NewStack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->AddStack_Validate(Z_Param_NewStack)) \
		{ \
			RPC_ValidateFailed(TEXT("AddStack_Validate")); \
			return; \
		} \
		P_THIS->AddStack_Implementation(Z_Param_NewStack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnModifierPendingExpire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnModifierPendingExpire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBlocked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBlocked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReapplied) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewStack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReapplied(Z_Param_NewStack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnApplied) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnApplied(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execModifierDurationCycleTick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ModifierDurationCycleTick(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartIntervalThink) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTick); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->StartIntervalThink_Validate(Z_Param_DeltaTick)) \
		{ \
			RPC_ValidateFailed(TEXT("StartIntervalThink_Validate")); \
			return; \
		} \
		P_THIS->StartIntervalThink_Implementation(Z_Param_DeltaTick); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReadyToExpire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReadyToExpire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_OnModifierActivateChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_OnModifierActivateChanged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_OnStackChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_OnStackChanged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetModifierActivation) \
	{ \
		P_GET_UBOOL(Z_Param_NewActivate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SetModifierActivation_Validate(Z_Param_NewActivate)) \
		{ \
			RPC_ValidateFailed(TEXT("SetModifierActivation_Validate")); \
			return; \
		} \
		P_THIS->SetModifierActivation_Implementation(Z_Param_NewActivate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLifeCycleHandler) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LifeCycleHandler(); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool AddStack_Validate(int8 ); \
	virtual void AddStack_Implementation(int8 NewStack); \
	virtual bool StartIntervalThink_Validate(float ); \
	virtual void StartIntervalThink_Implementation(float DeltaTick); \
	virtual bool SetModifierActivation_Validate(bool ); \
	virtual void SetModifierActivation_Implementation(bool NewActivate); \
 \
	DECLARE_FUNCTION(execAddStack) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_NewStack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->AddStack_Validate(Z_Param_NewStack)) \
		{ \
			RPC_ValidateFailed(TEXT("AddStack_Validate")); \
			return; \
		} \
		P_THIS->AddStack_Implementation(Z_Param_NewStack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnModifierPendingExpire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnModifierPendingExpire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBlocked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBlocked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReapplied) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewStack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReapplied(Z_Param_NewStack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnApplied) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnApplied(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execModifierDurationCycleTick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ModifierDurationCycleTick(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartIntervalThink) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTick); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->StartIntervalThink_Validate(Z_Param_DeltaTick)) \
		{ \
			RPC_ValidateFailed(TEXT("StartIntervalThink_Validate")); \
			return; \
		} \
		P_THIS->StartIntervalThink_Implementation(Z_Param_DeltaTick); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReadyToExpire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReadyToExpire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_OnModifierActivateChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_OnModifierActivateChanged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_OnStackChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_OnStackChanged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetModifierActivation) \
	{ \
		P_GET_UBOOL(Z_Param_NewActivate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SetModifierActivation_Validate(Z_Param_NewActivate)) \
		{ \
			RPC_ValidateFailed(TEXT("SetModifierActivation_Validate")); \
			return; \
		} \
		P_THIS->SetModifierActivation_Implementation(Z_Param_NewActivate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLifeCycleHandler) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LifeCycleHandler(); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_EVENT_PARMS \
	struct ModifierBase_eventAddStack_Parms \
	{ \
		int8 NewStack; \
	}; \
	struct ModifierBase_eventSetModifierActivation_Parms \
	{ \
		bool NewActivate; \
	}; \
	struct ModifierBase_eventStartIntervalThink_Parms \
	{ \
		float DeltaTick; \
	};


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_CALLBACK_WRAPPERS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAModifierBase(); \
	friend struct Z_Construct_UClass_AModifierBase_Statics; \
public: \
	DECLARE_CLASS(AModifierBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AModifierBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAModifierBase(); \
	friend struct Z_Construct_UClass_AModifierBase_Statics; \
public: \
	DECLARE_CLASS(AModifierBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AModifierBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AModifierBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModifierBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModifierBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModifierBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AModifierBase(AModifierBase&&); \
	NO_API AModifierBase(const AModifierBase&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AModifierBase(AModifierBase&&); \
	NO_API AModifierBase(const AModifierBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModifierBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModifierBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AModifierBase)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_PRIVATE_PROPERTY_OFFSET
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_13_PROLOG \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_EVENT_PARMS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_INCLASS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_INCLASS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class AModifierBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
