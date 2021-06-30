// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/AbilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityBase() {}
// Cross Module References
	NETWORKABILITYKIT_API UFunction* Z_Construct_UDelegateFunction_NetworkAbilityKit_EndAbilityDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AAbilityBase_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AAbilityBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NETWORKABILITYKIT_API UEnum* Z_Construct_UEnum_NetworkAbilityKit_EAbilityNotValidType();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AAbilitySetBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UAttributeComp_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AAttributeSetBase_NoRegister();
	NETWORKABILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FCostStruct();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	NETWORKABILITYKIT_API UEnum* Z_Construct_UEnum_NetworkAbilityKit_EAbilityType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NetworkAbilityKit_EndAbilityDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NetworkAbilityKit_EndAbilityDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NetworkAbilityKit_EndAbilityDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NetworkAbilityKit, nullptr, "EndAbilityDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NetworkAbilityKit_EndAbilityDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NetworkAbilityKit_EndAbilityDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NetworkAbilityKit_EndAbilityDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_NetworkAbilityKit_EndAbilityDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AAbilityBase::execAbilityPassive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AbilityPassive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAbilityBase::execAbilityTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AbilityTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAbilityBase::execAbilityPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AbilityPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAbilityBase::execAbilityNoTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AbilityNoTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAbilityBase::execOnAbilityReadyToEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAbilityReadyToEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAbilityBase::execApplyCost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ApplyCost_Validate())
		{
			RPC_ValidateFailed(TEXT("ApplyCost_Validate"));
			return;
		}
		P_THIS->ApplyCost_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAbilityBase::execCoolDownCycleTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CoolDownCycleTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAbilityBase::execCostPrecheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CostPrecheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAbilityBase::execActivatePrecheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivatePrecheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAbilityBase::execMouseLocationAvailabilityCheck)
	{
		P_GET_STRUCT(FVector,Z_Param_MouseLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MouseLocationAvailabilityCheck(Z_Param_MouseLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAbilityBase::execSERVER_AbilityPointCoreLogic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SERVER_AbilityPointCoreLogic_Validate())
		{
			RPC_ValidateFailed(TEXT("SERVER_AbilityPointCoreLogic_Validate"));
			return;
		}
		P_THIS->SERVER_AbilityPointCoreLogic_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAbilityBase::execGetPointAbilityMousePositionInWorldAndTryCommit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->GetPointAbilityMousePositionInWorldAndTryCommit_Validate())
		{
			RPC_ValidateFailed(TEXT("GetPointAbilityMousePositionInWorldAndTryCommit_Validate"));
			return;
		}
		P_THIS->GetPointAbilityMousePositionInWorldAndTryCommit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAbilityBase::execCommitAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->CommitAbility_Validate())
		{
			RPC_ValidateFailed(TEXT("CommitAbility_Validate"));
			return;
		}
		P_THIS->CommitAbility_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAbilityBase::execEndAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->EndAbility_Validate())
		{
			RPC_ValidateFailed(TEXT("EndAbility_Validate"));
			return;
		}
		P_THIS->EndAbility_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAbilityBase::execStartCoolDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->StartCoolDown_Validate())
		{
			RPC_ValidateFailed(TEXT("StartCoolDown_Validate"));
			return;
		}
		P_THIS->StartCoolDown_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAbilityBase::execStartIntervalThink)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartIntervalThink(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAbilityBase::execTryActivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->TryActivate_Validate())
		{
			RPC_ValidateFailed(TEXT("TryActivate_Validate"));
			return;
		}
		P_THIS->TryActivate_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AAbilityBase_ApplyCost = FName(TEXT("ApplyCost"));
	void AAbilityBase::ApplyCost()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAbilityBase_ApplyCost),NULL);
	}
	static FName NAME_AAbilityBase_CommitAbility = FName(TEXT("CommitAbility"));
	void AAbilityBase::CommitAbility()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAbilityBase_CommitAbility),NULL);
	}
	static FName NAME_AAbilityBase_EndAbility = FName(TEXT("EndAbility"));
	void AAbilityBase::EndAbility()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAbilityBase_EndAbility),NULL);
	}
	static FName NAME_AAbilityBase_GetPointAbilityMousePositionInWorldAndTryCommit = FName(TEXT("GetPointAbilityMousePositionInWorldAndTryCommit"));
	void AAbilityBase::GetPointAbilityMousePositionInWorldAndTryCommit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAbilityBase_GetPointAbilityMousePositionInWorldAndTryCommit),NULL);
	}
	static FName NAME_AAbilityBase_OnAbilityPreEnd = FName(TEXT("OnAbilityPreEnd"));
	void AAbilityBase::OnAbilityPreEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAbilityBase_OnAbilityPreEnd),NULL);
	}
	static FName NAME_AAbilityBase_OnActivated = FName(TEXT("OnActivated"));
	void AAbilityBase::OnActivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAbilityBase_OnActivated),NULL);
	}
	static FName NAME_AAbilityBase_OnCoolDownFinished = FName(TEXT("OnCoolDownFinished"));
	void AAbilityBase::OnCoolDownFinished()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAbilityBase_OnCoolDownFinished),NULL);
	}
	static FName NAME_AAbilityBase_OnIntervalThink = FName(TEXT("OnIntervalThink"));
	void AAbilityBase::OnIntervalThink()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAbilityBase_OnIntervalThink),NULL);
	}
	static FName NAME_AAbilityBase_OnNotAvailableYet = FName(TEXT("OnNotAvailableYet"));
	void AAbilityBase::OnNotAvailableYet(EAbilityNotValidType AbilityNotValidType)
	{
		AbilityBase_eventOnNotAvailableYet_Parms Parms;
		Parms.AbilityNotValidType=AbilityNotValidType;
		ProcessEvent(FindFunctionChecked(NAME_AAbilityBase_OnNotAvailableYet),&Parms);
	}
	static FName NAME_AAbilityBase_OnTakeEffectNotifyActivated = FName(TEXT("OnTakeEffectNotifyActivated"));
	void AAbilityBase::OnTakeEffectNotifyActivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAbilityBase_OnTakeEffectNotifyActivated),NULL);
	}
	static FName NAME_AAbilityBase_SERVER_AbilityPointCoreLogic = FName(TEXT("SERVER_AbilityPointCoreLogic"));
	void AAbilityBase::SERVER_AbilityPointCoreLogic()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAbilityBase_SERVER_AbilityPointCoreLogic),NULL);
	}
	static FName NAME_AAbilityBase_StartCoolDown = FName(TEXT("StartCoolDown"));
	void AAbilityBase::StartCoolDown()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAbilityBase_StartCoolDown),NULL);
	}
	static FName NAME_AAbilityBase_TryActivate = FName(TEXT("TryActivate"));
	void AAbilityBase::TryActivate()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAbilityBase_TryActivate),NULL);
	}
	void AAbilityBase::StaticRegisterNativesAAbilityBase()
	{
		UClass* Class = AAbilityBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbilityNoTarget", &AAbilityBase::execAbilityNoTarget },
			{ "AbilityPassive", &AAbilityBase::execAbilityPassive },
			{ "AbilityPoint", &AAbilityBase::execAbilityPoint },
			{ "AbilityTarget", &AAbilityBase::execAbilityTarget },
			{ "ActivatePrecheck", &AAbilityBase::execActivatePrecheck },
			{ "ApplyCost", &AAbilityBase::execApplyCost },
			{ "CommitAbility", &AAbilityBase::execCommitAbility },
			{ "CoolDownCycleTick", &AAbilityBase::execCoolDownCycleTick },
			{ "CostPrecheck", &AAbilityBase::execCostPrecheck },
			{ "EndAbility", &AAbilityBase::execEndAbility },
			{ "GetPointAbilityMousePositionInWorldAndTryCommit", &AAbilityBase::execGetPointAbilityMousePositionInWorldAndTryCommit },
			{ "MouseLocationAvailabilityCheck", &AAbilityBase::execMouseLocationAvailabilityCheck },
			{ "OnAbilityReadyToEnd", &AAbilityBase::execOnAbilityReadyToEnd },
			{ "SERVER_AbilityPointCoreLogic", &AAbilityBase::execSERVER_AbilityPointCoreLogic },
			{ "StartCoolDown", &AAbilityBase::execStartCoolDown },
			{ "StartIntervalThink", &AAbilityBase::execStartIntervalThink },
			{ "TryActivate", &AAbilityBase::execTryActivate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAbilityBase_AbilityNoTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_AbilityNoTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_AbilityNoTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "AbilityNoTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_AbilityNoTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_AbilityNoTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_AbilityNoTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_AbilityNoTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_AbilityPassive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_AbilityPassive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_AbilityPassive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "AbilityPassive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_AbilityPassive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_AbilityPassive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_AbilityPassive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_AbilityPassive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_AbilityPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_AbilityPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_AbilityPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "AbilityPoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_AbilityPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_AbilityPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_AbilityPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_AbilityPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_AbilityTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_AbilityTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_AbilityTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "AbilityTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_AbilityTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_AbilityTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_AbilityTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_AbilityTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_ActivatePrecheck_Statics
	{
		struct AbilityBase_eventActivatePrecheck_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAbilityBase_ActivatePrecheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AbilityBase_eventActivatePrecheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAbilityBase_ActivatePrecheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbilityBase_eventActivatePrecheck_Parms), &Z_Construct_UFunction_AAbilityBase_ActivatePrecheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAbilityBase_ActivatePrecheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAbilityBase_ActivatePrecheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_ActivatePrecheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_ActivatePrecheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "ActivatePrecheck", nullptr, nullptr, sizeof(AbilityBase_eventActivatePrecheck_Parms), Z_Construct_UFunction_AAbilityBase_ActivatePrecheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_ActivatePrecheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_ActivatePrecheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_ActivatePrecheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_ActivatePrecheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_ActivatePrecheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_ApplyCost_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_ApplyCost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_ApplyCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "ApplyCost", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_ApplyCost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_ApplyCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_ApplyCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_ApplyCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_CommitAbility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_CommitAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_CommitAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "CommitAbility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_CommitAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_CommitAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_CommitAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_CommitAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_CoolDownCycleTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_CoolDownCycleTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_CoolDownCycleTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "CoolDownCycleTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_CoolDownCycleTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_CoolDownCycleTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_CoolDownCycleTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_CoolDownCycleTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_CostPrecheck_Statics
	{
		struct AbilityBase_eventCostPrecheck_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAbilityBase_CostPrecheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AbilityBase_eventCostPrecheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAbilityBase_CostPrecheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbilityBase_eventCostPrecheck_Parms), &Z_Construct_UFunction_AAbilityBase_CostPrecheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAbilityBase_CostPrecheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAbilityBase_CostPrecheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_CostPrecheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_CostPrecheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "CostPrecheck", nullptr, nullptr, sizeof(AbilityBase_eventCostPrecheck_Parms), Z_Construct_UFunction_AAbilityBase_CostPrecheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_CostPrecheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_CostPrecheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_CostPrecheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_CostPrecheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_CostPrecheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_EndAbility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_EndAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_EndAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "EndAbility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_EndAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_EndAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_EndAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_EndAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_GetPointAbilityMousePositionInWorldAndTryCommit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_GetPointAbilityMousePositionInWorldAndTryCommit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_GetPointAbilityMousePositionInWorldAndTryCommit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "GetPointAbilityMousePositionInWorldAndTryCommit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_GetPointAbilityMousePositionInWorldAndTryCommit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_GetPointAbilityMousePositionInWorldAndTryCommit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_GetPointAbilityMousePositionInWorldAndTryCommit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_GetPointAbilityMousePositionInWorldAndTryCommit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_MouseLocationAvailabilityCheck_Statics
	{
		struct AbilityBase_eventMouseLocationAvailabilityCheck_Parms
		{
			FVector MouseLocation;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MouseLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAbilityBase_MouseLocationAvailabilityCheck_Statics::NewProp_MouseLocation = { "MouseLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBase_eventMouseLocationAvailabilityCheck_Parms, MouseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAbilityBase_MouseLocationAvailabilityCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AbilityBase_eventMouseLocationAvailabilityCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAbilityBase_MouseLocationAvailabilityCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbilityBase_eventMouseLocationAvailabilityCheck_Parms), &Z_Construct_UFunction_AAbilityBase_MouseLocationAvailabilityCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAbilityBase_MouseLocationAvailabilityCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAbilityBase_MouseLocationAvailabilityCheck_Statics::NewProp_MouseLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAbilityBase_MouseLocationAvailabilityCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_MouseLocationAvailabilityCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "//UFUNCTION(BlueprintPure, Category = \"Ability\")\n//FVector GetPointAbilityMousePositionInWorld();\n" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
		{ "ToolTip", "UFUNCTION(BlueprintPure, Category = \"Ability\")\nFVector GetPointAbilityMousePositionInWorld();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_MouseLocationAvailabilityCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "MouseLocationAvailabilityCheck", nullptr, nullptr, sizeof(AbilityBase_eventMouseLocationAvailabilityCheck_Parms), Z_Construct_UFunction_AAbilityBase_MouseLocationAvailabilityCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_MouseLocationAvailabilityCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_MouseLocationAvailabilityCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_MouseLocationAvailabilityCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_MouseLocationAvailabilityCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_MouseLocationAvailabilityCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_OnAbilityPreEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_OnAbilityPreEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_OnAbilityPreEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "OnAbilityPreEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_OnAbilityPreEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_OnAbilityPreEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_OnAbilityPreEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_OnAbilityPreEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_OnAbilityReadyToEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_OnAbilityReadyToEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_OnAbilityReadyToEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "OnAbilityReadyToEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_OnAbilityReadyToEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_OnAbilityReadyToEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_OnAbilityReadyToEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_OnAbilityReadyToEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_OnActivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_OnActivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_OnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "OnActivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_OnActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_OnActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_OnActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_OnActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_OnCoolDownFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_OnCoolDownFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_OnCoolDownFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "OnCoolDownFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_OnCoolDownFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_OnCoolDownFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_OnCoolDownFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_OnCoolDownFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_OnIntervalThink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_OnIntervalThink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_OnIntervalThink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "OnIntervalThink", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_OnIntervalThink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_OnIntervalThink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_OnIntervalThink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_OnIntervalThink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_OnNotAvailableYet_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AbilityNotValidType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AbilityNotValidType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAbilityBase_OnNotAvailableYet_Statics::NewProp_AbilityNotValidType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAbilityBase_OnNotAvailableYet_Statics::NewProp_AbilityNotValidType = { "AbilityNotValidType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBase_eventOnNotAvailableYet_Parms, AbilityNotValidType), Z_Construct_UEnum_NetworkAbilityKit_EAbilityNotValidType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAbilityBase_OnNotAvailableYet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAbilityBase_OnNotAvailableYet_Statics::NewProp_AbilityNotValidType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAbilityBase_OnNotAvailableYet_Statics::NewProp_AbilityNotValidType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_OnNotAvailableYet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_OnNotAvailableYet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "OnNotAvailableYet", nullptr, nullptr, sizeof(AbilityBase_eventOnNotAvailableYet_Parms), Z_Construct_UFunction_AAbilityBase_OnNotAvailableYet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_OnNotAvailableYet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_OnNotAvailableYet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_OnNotAvailableYet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_OnNotAvailableYet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_OnNotAvailableYet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_OnTakeEffectNotifyActivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_OnTakeEffectNotifyActivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_OnTakeEffectNotifyActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "OnTakeEffectNotifyActivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_OnTakeEffectNotifyActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_OnTakeEffectNotifyActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_OnTakeEffectNotifyActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_OnTakeEffectNotifyActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_SERVER_AbilityPointCoreLogic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_SERVER_AbilityPointCoreLogic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_SERVER_AbilityPointCoreLogic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "SERVER_AbilityPointCoreLogic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_SERVER_AbilityPointCoreLogic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_SERVER_AbilityPointCoreLogic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_SERVER_AbilityPointCoreLogic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_SERVER_AbilityPointCoreLogic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_StartCoolDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_StartCoolDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_StartCoolDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "StartCoolDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_StartCoolDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_StartCoolDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_StartCoolDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_StartCoolDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_StartIntervalThink_Statics
	{
		struct AbilityBase_eventStartIntervalThink_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAbilityBase_StartIntervalThink_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBase_eventStartIntervalThink_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAbilityBase_StartIntervalThink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAbilityBase_StartIntervalThink_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_StartIntervalThink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "CPP_Default_DeltaTime", "0.100000" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_StartIntervalThink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "StartIntervalThink", nullptr, nullptr, sizeof(AbilityBase_eventStartIntervalThink_Parms), Z_Construct_UFunction_AAbilityBase_StartIntervalThink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_StartIntervalThink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_StartIntervalThink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_StartIntervalThink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_StartIntervalThink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_StartIntervalThink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbilityBase_TryActivate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilityBase_TryActivate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilityBase_TryActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilityBase, nullptr, "TryActivate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilityBase_TryActivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAbilityBase_TryActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilityBase_TryActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilityBase_TryActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAbilityBase_NoRegister()
	{
		return AAbilityBase::StaticClass();
	}
	struct Z_Construct_UClass_AAbilityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BelongingActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BelongingActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BelongingAbilitySet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BelongingAbilitySet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BelongingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BelongingController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PairAttrComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PairAttrComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PairAttrSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PairAttrSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabledByModifier_MetaData[];
#endif
		static void NewProp_bDisabledByModifier_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabledByModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanActivate_MetaData[];
#endif
		static void NewProp_bCanActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanActivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInCoolDown_MetaData[];
#endif
		static void NewProp_bInCoolDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInCoolDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityCost_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityMontage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AbilityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AbilityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHiddenInUI_MetaData[];
#endif
		static void NewProp_bIsHiddenInUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHiddenInUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoolDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingCoolDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemainingCoolDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAbilityEndDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityEndDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointAbility_MousePositionInWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointAbility_MousePositionInWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointAbility_MouseVectorInWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointAbility_MouseVectorInWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAbilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAbilityBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAbilityBase_AbilityNoTarget, "AbilityNoTarget" }, // 4024209391
		{ &Z_Construct_UFunction_AAbilityBase_AbilityPassive, "AbilityPassive" }, // 3755697824
		{ &Z_Construct_UFunction_AAbilityBase_AbilityPoint, "AbilityPoint" }, // 4200606720
		{ &Z_Construct_UFunction_AAbilityBase_AbilityTarget, "AbilityTarget" }, // 593271198
		{ &Z_Construct_UFunction_AAbilityBase_ActivatePrecheck, "ActivatePrecheck" }, // 1921290615
		{ &Z_Construct_UFunction_AAbilityBase_ApplyCost, "ApplyCost" }, // 697393073
		{ &Z_Construct_UFunction_AAbilityBase_CommitAbility, "CommitAbility" }, // 4031368531
		{ &Z_Construct_UFunction_AAbilityBase_CoolDownCycleTick, "CoolDownCycleTick" }, // 2098907192
		{ &Z_Construct_UFunction_AAbilityBase_CostPrecheck, "CostPrecheck" }, // 2990681761
		{ &Z_Construct_UFunction_AAbilityBase_EndAbility, "EndAbility" }, // 2710900141
		{ &Z_Construct_UFunction_AAbilityBase_GetPointAbilityMousePositionInWorldAndTryCommit, "GetPointAbilityMousePositionInWorldAndTryCommit" }, // 2233192772
		{ &Z_Construct_UFunction_AAbilityBase_MouseLocationAvailabilityCheck, "MouseLocationAvailabilityCheck" }, // 1142543995
		{ &Z_Construct_UFunction_AAbilityBase_OnAbilityPreEnd, "OnAbilityPreEnd" }, // 1460898373
		{ &Z_Construct_UFunction_AAbilityBase_OnAbilityReadyToEnd, "OnAbilityReadyToEnd" }, // 2647774819
		{ &Z_Construct_UFunction_AAbilityBase_OnActivated, "OnActivated" }, // 3365539701
		{ &Z_Construct_UFunction_AAbilityBase_OnCoolDownFinished, "OnCoolDownFinished" }, // 1196792005
		{ &Z_Construct_UFunction_AAbilityBase_OnIntervalThink, "OnIntervalThink" }, // 301316726
		{ &Z_Construct_UFunction_AAbilityBase_OnNotAvailableYet, "OnNotAvailableYet" }, // 3127099205
		{ &Z_Construct_UFunction_AAbilityBase_OnTakeEffectNotifyActivated, "OnTakeEffectNotifyActivated" }, // 2664583761
		{ &Z_Construct_UFunction_AAbilityBase_SERVER_AbilityPointCoreLogic, "SERVER_AbilityPointCoreLogic" }, // 3292460220
		{ &Z_Construct_UFunction_AAbilityBase_StartCoolDown, "StartCoolDown" }, // 2260036025
		{ &Z_Construct_UFunction_AAbilityBase_StartIntervalThink, "StartIntervalThink" }, // 1401933442
		{ &Z_Construct_UFunction_AAbilityBase_TryActivate, "TryActivate" }, // 3806838645
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilityBase.h" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::NewProp_BelongingActor_MetaData[] = {
		{ "Category", "Parent" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_BelongingActor = { "BelongingActor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilityBase, BelongingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::NewProp_BelongingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::NewProp_BelongingActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::NewProp_BelongingAbilitySet_MetaData[] = {
		{ "Category", "Parent" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_BelongingAbilitySet = { "BelongingAbilitySet", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilityBase, BelongingAbilitySet), Z_Construct_UClass_AAbilitySetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::NewProp_BelongingAbilitySet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::NewProp_BelongingAbilitySet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::NewProp_BelongingController_MetaData[] = {
		{ "Category", "Parent" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_BelongingController = { "BelongingController", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilityBase, BelongingController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::NewProp_BelongingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::NewProp_BelongingController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::NewProp_PairAttrComp_MetaData[] = {
		{ "Category", "Parent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_PairAttrComp = { "PairAttrComp", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilityBase, PairAttrComp), Z_Construct_UClass_UAttributeComp_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::NewProp_PairAttrComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::NewProp_PairAttrComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::NewProp_PairAttrSet_MetaData[] = {
		{ "Category", "Parent" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_PairAttrSet = { "PairAttrSet", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilityBase, PairAttrSet), Z_Construct_UClass_AAttributeSetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::NewProp_PairAttrSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::NewProp_PairAttrSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::NewProp_bDisabledByModifier_MetaData[] = {
		{ "Category", "Availability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	void Z_Construct_UClass_AAbilityBase_Statics::NewProp_bDisabledByModifier_SetBit(void* Obj)
	{
		((AAbilityBase*)Obj)->bDisabledByModifier = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_bDisabledByModifier = { "bDisabledByModifier", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAbilityBase), &Z_Construct_UClass_AAbilityBase_Statics::NewProp_bDisabledByModifier_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::NewProp_bDisabledByModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::NewProp_bDisabledByModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::NewProp_bCanActivate_MetaData[] = {
		{ "Category", "Availability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	void Z_Construct_UClass_AAbilityBase_Statics::NewProp_bCanActivate_SetBit(void* Obj)
	{
		((AAbilityBase*)Obj)->bCanActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_bCanActivate = { "bCanActivate", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAbilityBase), &Z_Construct_UClass_AAbilityBase_Statics::NewProp_bCanActivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::NewProp_bCanActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::NewProp_bCanActivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::NewProp_bInCoolDown_MetaData[] = {
		{ "Category", "Availability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	void Z_Construct_UClass_AAbilityBase_Statics::NewProp_bInCoolDown_SetBit(void* Obj)
	{
		((AAbilityBase*)Obj)->bInCoolDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_bInCoolDown = { "bInCoolDown", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAbilityBase), &Z_Construct_UClass_AAbilityBase_Statics::NewProp_bInCoolDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::NewProp_bInCoolDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::NewProp_bInCoolDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Ability Property" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilityBase, Name), METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Ability Property" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilityBase, DisplayName), METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityCost_Inner = { "AbilityCost", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCostStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityCost_MetaData[] = {
		{ "Category", "Ability Property" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityCost = { "AbilityCost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilityBase, AbilityCost), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityMontage_MetaData[] = {
		{ "Category", "Ability Property" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityMontage = { "AbilityMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilityBase, AbilityMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityMontage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityType_MetaData[] = {
		{ "Category", "Ability Property" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityType = { "AbilityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilityBase, AbilityType), Z_Construct_UEnum_NetworkAbilityKit_EAbilityType, METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::NewProp_bIsHiddenInUI_MetaData[] = {
		{ "Category", "Ability Property" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	void Z_Construct_UClass_AAbilityBase_Statics::NewProp_bIsHiddenInUI_SetBit(void* Obj)
	{
		((AAbilityBase*)Obj)->bIsHiddenInUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_bIsHiddenInUI = { "bIsHiddenInUI", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAbilityBase), &Z_Construct_UClass_AAbilityBase_Statics::NewProp_bIsHiddenInUI_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::NewProp_bIsHiddenInUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::NewProp_bIsHiddenInUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityUI_MetaData[] = {
		{ "Category", "Ability Property" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityUI = { "AbilityUI", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilityBase, AbilityUI), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::NewProp_CoolDown_MetaData[] = {
		{ "Category", "Ability Property" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_CoolDown = { "CoolDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilityBase, CoolDown), METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::NewProp_CoolDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::NewProp_CoolDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::NewProp_RemainingCoolDown_MetaData[] = {
		{ "Category", "Ability Property" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_RemainingCoolDown = { "RemainingCoolDown", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilityBase, RemainingCoolDown), METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::NewProp_RemainingCoolDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::NewProp_RemainingCoolDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::NewProp_OnAbilityEndDelegate_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_OnAbilityEndDelegate = { "OnAbilityEndDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilityBase, OnAbilityEndDelegate), Z_Construct_UDelegateFunction_NetworkAbilityKit_EndAbilityDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::NewProp_OnAbilityEndDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::NewProp_OnAbilityEndDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::NewProp_PointAbility_MousePositionInWorld_MetaData[] = {
		{ "Category", "Point Ability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_PointAbility_MousePositionInWorld = { "PointAbility_MousePositionInWorld", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilityBase, PointAbility_MousePositionInWorld), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::NewProp_PointAbility_MousePositionInWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::NewProp_PointAbility_MousePositionInWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityBase_Statics::NewProp_PointAbility_MouseVectorInWorld_MetaData[] = {
		{ "Category", "Point Ability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAbilityBase_Statics::NewProp_PointAbility_MouseVectorInWorld = { "PointAbility_MouseVectorInWorld", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilityBase, PointAbility_MouseVectorInWorld), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::NewProp_PointAbility_MouseVectorInWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::NewProp_PointAbility_MouseVectorInWorld_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAbilityBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_BelongingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_BelongingAbilitySet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_BelongingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_PairAttrComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_PairAttrSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_bDisabledByModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_bCanActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_bInCoolDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityCost_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_bIsHiddenInUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_AbilityUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_CoolDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_RemainingCoolDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_OnAbilityEndDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_PointAbility_MousePositionInWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityBase_Statics::NewProp_PointAbility_MouseVectorInWorld,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAbilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAbilityBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAbilityBase_Statics::ClassParams = {
		&AAbilityBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAbilityBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAbilityBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAbilityBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAbilityBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAbilityBase, 413370996);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<AAbilityBase>()
	{
		return AAbilityBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAbilityBase(Z_Construct_UClass_AAbilityBase, &AAbilityBase::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("AAbilityBase"), false, nullptr, nullptr, nullptr);

	void AAbilityBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bDisabledByModifier(TEXT("bDisabledByModifier"));
		static const FName Name_bCanActivate(TEXT("bCanActivate"));
		static const FName Name_bInCoolDown(TEXT("bInCoolDown"));
		static const FName Name_RemainingCoolDown(TEXT("RemainingCoolDown"));

		const bool bIsValid = true
			&& Name_bDisabledByModifier == ClassReps[(int32)ENetFields_Private::bDisabledByModifier].Property->GetFName()
			&& Name_bCanActivate == ClassReps[(int32)ENetFields_Private::bCanActivate].Property->GetFName()
			&& Name_bInCoolDown == ClassReps[(int32)ENetFields_Private::bInCoolDown].Property->GetFName()
			&& Name_RemainingCoolDown == ClassReps[(int32)ENetFields_Private::RemainingCoolDown].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAbilityBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAbilityBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
