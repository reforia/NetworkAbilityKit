// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/ModifierBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifierBase() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AModifierBase_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AModifierBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AModifierBase_AddStack();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AModifierBase_BP_OnApplied();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AModifierBase_BP_OnBlocked();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AModifierBase_BP_OnReapplied();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AModifierBase_LifeCycleHandler();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AModifierBase_ModifierDurationCycleTick();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AModifierBase_OnApplied();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AModifierBase_OnBlocked();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AModifierBase_OnIntervalThink();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AModifierBase_OnModifierPendingExpire();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AModifierBase_OnPreExpired();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AModifierBase_OnReadyToExpire();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AModifierBase_OnReapplied();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AModifierBase_OnRep_OnModifierActivateChanged();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AModifierBase_OnRep_OnStackChanged();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AModifierBase_SetModifierActivation();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AModifierBase_StartIntervalThink();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NETWORKABILITYKIT_API UEnum* Z_Construct_UEnum_NetworkAbilityKit_EModifierType();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UModifierComp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FName NAME_AModifierBase_AddStack = FName(TEXT("AddStack"));
	void AModifierBase::AddStack(int8 NewStack)
	{
		ModifierBase_eventAddStack_Parms Parms;
		Parms.NewStack=NewStack;
		ProcessEvent(FindFunctionChecked(NAME_AModifierBase_AddStack),&Parms);
	}
	static FName NAME_AModifierBase_BP_OnApplied = FName(TEXT("BP_OnApplied"));
	void AModifierBase::BP_OnApplied()
	{
		ProcessEvent(FindFunctionChecked(NAME_AModifierBase_BP_OnApplied),NULL);
	}
	static FName NAME_AModifierBase_BP_OnBlocked = FName(TEXT("BP_OnBlocked"));
	void AModifierBase::BP_OnBlocked()
	{
		ProcessEvent(FindFunctionChecked(NAME_AModifierBase_BP_OnBlocked),NULL);
	}
	static FName NAME_AModifierBase_BP_OnReapplied = FName(TEXT("BP_OnReapplied"));
	void AModifierBase::BP_OnReapplied()
	{
		ProcessEvent(FindFunctionChecked(NAME_AModifierBase_BP_OnReapplied),NULL);
	}
	static FName NAME_AModifierBase_OnIntervalThink = FName(TEXT("OnIntervalThink"));
	void AModifierBase::OnIntervalThink()
	{
		ProcessEvent(FindFunctionChecked(NAME_AModifierBase_OnIntervalThink),NULL);
	}
	static FName NAME_AModifierBase_OnPreExpired = FName(TEXT("OnPreExpired"));
	void AModifierBase::OnPreExpired()
	{
		ProcessEvent(FindFunctionChecked(NAME_AModifierBase_OnPreExpired),NULL);
	}
	static FName NAME_AModifierBase_SetModifierActivation = FName(TEXT("SetModifierActivation"));
	void AModifierBase::SetModifierActivation(bool NewActivate)
	{
		ModifierBase_eventSetModifierActivation_Parms Parms;
		Parms.NewActivate=NewActivate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AModifierBase_SetModifierActivation),&Parms);
	}
	static FName NAME_AModifierBase_StartIntervalThink = FName(TEXT("StartIntervalThink"));
	void AModifierBase::StartIntervalThink(float DeltaTick)
	{
		ModifierBase_eventStartIntervalThink_Parms Parms;
		Parms.DeltaTick=DeltaTick;
		ProcessEvent(FindFunctionChecked(NAME_AModifierBase_StartIntervalThink),&Parms);
	}
	void AModifierBase::StaticRegisterNativesAModifierBase()
	{
		UClass* Class = AModifierBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddStack", &AModifierBase::execAddStack },
			{ "LifeCycleHandler", &AModifierBase::execLifeCycleHandler },
			{ "ModifierDurationCycleTick", &AModifierBase::execModifierDurationCycleTick },
			{ "OnApplied", &AModifierBase::execOnApplied },
			{ "OnBlocked", &AModifierBase::execOnBlocked },
			{ "OnModifierPendingExpire", &AModifierBase::execOnModifierPendingExpire },
			{ "OnReadyToExpire", &AModifierBase::execOnReadyToExpire },
			{ "OnReapplied", &AModifierBase::execOnReapplied },
			{ "OnRep_OnModifierActivateChanged", &AModifierBase::execOnRep_OnModifierActivateChanged },
			{ "OnRep_OnStackChanged", &AModifierBase::execOnRep_OnStackChanged },
			{ "SetModifierActivation", &AModifierBase::execSetModifierActivation },
			{ "StartIntervalThink", &AModifierBase::execStartIntervalThink },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AModifierBase_AddStack_Statics
	{
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_NewStack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_AModifierBase_AddStack_Statics::NewProp_NewStack = { "NewStack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierBase_eventAddStack_Parms, NewStack), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModifierBase_AddStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModifierBase_AddStack_Statics::NewProp_NewStack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModifierBase_AddStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModifierBase_AddStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModifierBase, nullptr, "AddStack", nullptr, nullptr, sizeof(ModifierBase_eventAddStack_Parms), Z_Construct_UFunction_AModifierBase_AddStack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_AddStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModifierBase_AddStack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_AddStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModifierBase_AddStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModifierBase_AddStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModifierBase_BP_OnApplied_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModifierBase_BP_OnApplied_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModifierBase_BP_OnApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModifierBase, nullptr, "BP_OnApplied", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModifierBase_BP_OnApplied_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_BP_OnApplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModifierBase_BP_OnApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModifierBase_BP_OnApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModifierBase_BP_OnBlocked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModifierBase_BP_OnBlocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModifierBase_BP_OnBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModifierBase, nullptr, "BP_OnBlocked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModifierBase_BP_OnBlocked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_BP_OnBlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModifierBase_BP_OnBlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModifierBase_BP_OnBlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModifierBase_BP_OnReapplied_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModifierBase_BP_OnReapplied_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModifierBase_BP_OnReapplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModifierBase, nullptr, "BP_OnReapplied", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModifierBase_BP_OnReapplied_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_BP_OnReapplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModifierBase_BP_OnReapplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModifierBase_BP_OnReapplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModifierBase_LifeCycleHandler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModifierBase_LifeCycleHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModifierBase_LifeCycleHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModifierBase, nullptr, "LifeCycleHandler", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModifierBase_LifeCycleHandler_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_LifeCycleHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModifierBase_LifeCycleHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModifierBase_LifeCycleHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModifierBase_ModifierDurationCycleTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModifierBase_ModifierDurationCycleTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModifierBase_ModifierDurationCycleTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModifierBase, nullptr, "ModifierDurationCycleTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModifierBase_ModifierDurationCycleTick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_ModifierDurationCycleTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModifierBase_ModifierDurationCycleTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModifierBase_ModifierDurationCycleTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModifierBase_OnApplied_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModifierBase_OnApplied_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModifierBase_OnApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModifierBase, nullptr, "OnApplied", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModifierBase_OnApplied_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_OnApplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModifierBase_OnApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModifierBase_OnApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModifierBase_OnBlocked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModifierBase_OnBlocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModifierBase_OnBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModifierBase, nullptr, "OnBlocked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModifierBase_OnBlocked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_OnBlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModifierBase_OnBlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModifierBase_OnBlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModifierBase_OnIntervalThink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModifierBase_OnIntervalThink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModifierBase_OnIntervalThink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModifierBase, nullptr, "OnIntervalThink", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModifierBase_OnIntervalThink_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_OnIntervalThink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModifierBase_OnIntervalThink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModifierBase_OnIntervalThink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModifierBase_OnModifierPendingExpire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModifierBase_OnModifierPendingExpire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModifierBase_OnModifierPendingExpire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModifierBase, nullptr, "OnModifierPendingExpire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModifierBase_OnModifierPendingExpire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_OnModifierPendingExpire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModifierBase_OnModifierPendingExpire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModifierBase_OnModifierPendingExpire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModifierBase_OnPreExpired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModifierBase_OnPreExpired_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModifierBase_OnPreExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModifierBase, nullptr, "OnPreExpired", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModifierBase_OnPreExpired_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_OnPreExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModifierBase_OnPreExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModifierBase_OnPreExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModifierBase_OnReadyToExpire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModifierBase_OnReadyToExpire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModifierBase_OnReadyToExpire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModifierBase, nullptr, "OnReadyToExpire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModifierBase_OnReadyToExpire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_OnReadyToExpire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModifierBase_OnReadyToExpire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModifierBase_OnReadyToExpire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModifierBase_OnReapplied_Statics
	{
		struct ModifierBase_eventOnReapplied_Parms
		{
			uint8 NewStack;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewStack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AModifierBase_OnReapplied_Statics::NewProp_NewStack = { "NewStack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierBase_eventOnReapplied_Parms, NewStack), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModifierBase_OnReapplied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModifierBase_OnReapplied_Statics::NewProp_NewStack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModifierBase_OnReapplied_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModifierBase_OnReapplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModifierBase, nullptr, "OnReapplied", nullptr, nullptr, sizeof(ModifierBase_eventOnReapplied_Parms), Z_Construct_UFunction_AModifierBase_OnReapplied_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_OnReapplied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModifierBase_OnReapplied_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_OnReapplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModifierBase_OnReapplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModifierBase_OnReapplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModifierBase_OnRep_OnModifierActivateChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModifierBase_OnRep_OnModifierActivateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModifierBase_OnRep_OnModifierActivateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModifierBase, nullptr, "OnRep_OnModifierActivateChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModifierBase_OnRep_OnModifierActivateChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_OnRep_OnModifierActivateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModifierBase_OnRep_OnModifierActivateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModifierBase_OnRep_OnModifierActivateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModifierBase_OnRep_OnStackChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModifierBase_OnRep_OnStackChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModifierBase_OnRep_OnStackChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModifierBase, nullptr, "OnRep_OnStackChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModifierBase_OnRep_OnStackChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_OnRep_OnStackChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModifierBase_OnRep_OnStackChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModifierBase_OnRep_OnStackChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModifierBase_SetModifierActivation_Statics
	{
		static void NewProp_NewActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewActivate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AModifierBase_SetModifierActivation_Statics::NewProp_NewActivate_SetBit(void* Obj)
	{
		((ModifierBase_eventSetModifierActivation_Parms*)Obj)->NewActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AModifierBase_SetModifierActivation_Statics::NewProp_NewActivate = { "NewActivate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModifierBase_eventSetModifierActivation_Parms), &Z_Construct_UFunction_AModifierBase_SetModifierActivation_Statics::NewProp_NewActivate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModifierBase_SetModifierActivation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModifierBase_SetModifierActivation_Statics::NewProp_NewActivate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModifierBase_SetModifierActivation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModifierBase_SetModifierActivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModifierBase, nullptr, "SetModifierActivation", nullptr, nullptr, sizeof(ModifierBase_eventSetModifierActivation_Parms), Z_Construct_UFunction_AModifierBase_SetModifierActivation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_SetModifierActivation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModifierBase_SetModifierActivation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_SetModifierActivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModifierBase_SetModifierActivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModifierBase_SetModifierActivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModifierBase_StartIntervalThink_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AModifierBase_StartIntervalThink_Statics::NewProp_DeltaTick = { "DeltaTick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierBase_eventStartIntervalThink_Parms, DeltaTick), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModifierBase_StartIntervalThink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModifierBase_StartIntervalThink_Statics::NewProp_DeltaTick,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModifierBase_StartIntervalThink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModifierBase_StartIntervalThink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModifierBase, nullptr, "StartIntervalThink", nullptr, nullptr, sizeof(ModifierBase_eventStartIntervalThink_Parms), Z_Construct_UFunction_AModifierBase_StartIntervalThink_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_StartIntervalThink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x85080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModifierBase_StartIntervalThink_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModifierBase_StartIntervalThink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModifierBase_StartIntervalThink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModifierBase_StartIntervalThink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AModifierBase_NoRegister()
	{
		return AModifierBase::StaticClass();
	}
	struct Z_Construct_UClass_AModifierBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModifierInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceIgnoreMannualRemoval_MetaData[];
#endif
		static void NewProp_bForceIgnoreMannualRemoval_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceIgnoreMannualRemoval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceIgnoreBlockType_MetaData[];
#endif
		static void NewProp_bForceIgnoreBlockType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceIgnoreBlockType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceIgnoreBlockList_MetaData[];
#endif
		static void NewProp_bForceIgnoreBlockList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceIgnoreBlockList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierBlockTypeList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifierBlockTypeList;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModifierBlockTypeList_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModifierBlockTypeList_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierBlockList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifierBlockList;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ModifierBlockList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModifierType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModifierType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BelongingModComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BelongingModComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingTimeBeforeExpire_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemainingTimeBeforeExpire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierIsActive_MetaData[];
#endif
		static void NewProp_ModifierIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ModifierIsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxStack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModifierStack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModifierDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_UIDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UITexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UITexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_UIDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowUI_MetaData[];
#endif
		static void NewProp_bShowUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModifierBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AModifierBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AModifierBase_AddStack, "AddStack" }, // 1259308985
		{ &Z_Construct_UFunction_AModifierBase_BP_OnApplied, "BP_OnApplied" }, // 3544841456
		{ &Z_Construct_UFunction_AModifierBase_BP_OnBlocked, "BP_OnBlocked" }, // 3871449769
		{ &Z_Construct_UFunction_AModifierBase_BP_OnReapplied, "BP_OnReapplied" }, // 3068976366
		{ &Z_Construct_UFunction_AModifierBase_LifeCycleHandler, "LifeCycleHandler" }, // 2381374755
		{ &Z_Construct_UFunction_AModifierBase_ModifierDurationCycleTick, "ModifierDurationCycleTick" }, // 1675005545
		{ &Z_Construct_UFunction_AModifierBase_OnApplied, "OnApplied" }, // 2985569212
		{ &Z_Construct_UFunction_AModifierBase_OnBlocked, "OnBlocked" }, // 1647967335
		{ &Z_Construct_UFunction_AModifierBase_OnIntervalThink, "OnIntervalThink" }, // 109288772
		{ &Z_Construct_UFunction_AModifierBase_OnModifierPendingExpire, "OnModifierPendingExpire" }, // 3769300523
		{ &Z_Construct_UFunction_AModifierBase_OnPreExpired, "OnPreExpired" }, // 3977198658
		{ &Z_Construct_UFunction_AModifierBase_OnReadyToExpire, "OnReadyToExpire" }, // 1044731511
		{ &Z_Construct_UFunction_AModifierBase_OnReapplied, "OnReapplied" }, // 775344524
		{ &Z_Construct_UFunction_AModifierBase_OnRep_OnModifierActivateChanged, "OnRep_OnModifierActivateChanged" }, // 1781123303
		{ &Z_Construct_UFunction_AModifierBase_OnRep_OnStackChanged, "OnRep_OnStackChanged" }, // 3470614977
		{ &Z_Construct_UFunction_AModifierBase_SetModifierActivation, "SetModifierActivation" }, // 3794877857
		{ &Z_Construct_UFunction_AModifierBase_StartIntervalThink, "StartIntervalThink" }, // 233872951
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifierBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ModifierBase.h" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierInstigator_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierInstigator = { "ModifierInstigator", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModifierBase, ModifierInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierInstigator_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreMannualRemoval_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	void Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreMannualRemoval_SetBit(void* Obj)
	{
		((AModifierBase*)Obj)->bForceIgnoreMannualRemoval = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreMannualRemoval = { "bForceIgnoreMannualRemoval", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AModifierBase), &Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreMannualRemoval_SetBit, METADATA_PARAMS(Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreMannualRemoval_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreMannualRemoval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreBlockType_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	void Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreBlockType_SetBit(void* Obj)
	{
		((AModifierBase*)Obj)->bForceIgnoreBlockType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreBlockType = { "bForceIgnoreBlockType", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AModifierBase), &Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreBlockType_SetBit, METADATA_PARAMS(Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreBlockType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreBlockType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreBlockList_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	void Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreBlockList_SetBit(void* Obj)
	{
		((AModifierBase*)Obj)->bForceIgnoreBlockList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreBlockList = { "bForceIgnoreBlockList", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AModifierBase), &Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreBlockList_SetBit, METADATA_PARAMS(Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreBlockList_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreBlockList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierBlockTypeList_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierBlockTypeList = { "ModifierBlockTypeList", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModifierBase, ModifierBlockTypeList), METADATA_PARAMS(Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierBlockTypeList_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierBlockTypeList_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierBlockTypeList_Inner = { "ModifierBlockTypeList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_NetworkAbilityKit_EModifierType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierBlockTypeList_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierBlockList_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierBlockList = { "ModifierBlockList", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModifierBase, ModifierBlockList), METADATA_PARAMS(Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierBlockList_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierBlockList_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierBlockList_Inner = { "ModifierBlockList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierType_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierType = { "ModifierType", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModifierBase, ModifierType), Z_Construct_UEnum_NetworkAbilityKit_EModifierType, METADATA_PARAMS(Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifierBase_Statics::NewProp_BelongingModComp_MetaData[] = {
		{ "Category", "Modifier" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_BelongingModComp = { "BelongingModComp", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModifierBase, BelongingModComp), Z_Construct_UClass_UModifierComp_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModifierBase_Statics::NewProp_BelongingModComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModifierBase_Statics::NewProp_BelongingModComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifierBase_Statics::NewProp_RemainingTimeBeforeExpire_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_RemainingTimeBeforeExpire = { "RemainingTimeBeforeExpire", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModifierBase, RemainingTimeBeforeExpire), METADATA_PARAMS(Z_Construct_UClass_AModifierBase_Statics::NewProp_RemainingTimeBeforeExpire_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModifierBase_Statics::NewProp_RemainingTimeBeforeExpire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierIsActive_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	void Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierIsActive_SetBit(void* Obj)
	{
		((AModifierBase*)Obj)->ModifierIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierIsActive = { "ModifierIsActive", "OnRep_OnModifierActivateChanged", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AModifierBase), &Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierIsActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierIsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifierBase_Statics::NewProp_MaxStack_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_MaxStack = { "MaxStack", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModifierBase, MaxStack), nullptr, METADATA_PARAMS(Z_Construct_UClass_AModifierBase_Statics::NewProp_MaxStack_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModifierBase_Statics::NewProp_MaxStack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierStack_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierStack = { "ModifierStack", "OnRep_OnStackChanged", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModifierBase, ModifierStack), nullptr, METADATA_PARAMS(Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierStack_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierStack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierDuration_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierDuration = { "ModifierDuration", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModifierBase, ModifierDuration), METADATA_PARAMS(Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifierBase_Statics::NewProp_UIDescription_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_UIDescription = { "UIDescription", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModifierBase, UIDescription), METADATA_PARAMS(Z_Construct_UClass_AModifierBase_Statics::NewProp_UIDescription_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModifierBase_Statics::NewProp_UIDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifierBase_Statics::NewProp_UITexture_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_UITexture = { "UITexture", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModifierBase, UITexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModifierBase_Statics::NewProp_UITexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModifierBase_Statics::NewProp_UITexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifierBase_Statics::NewProp_UIDisplayName_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_UIDisplayName = { "UIDisplayName", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModifierBase, UIDisplayName), METADATA_PARAMS(Z_Construct_UClass_AModifierBase_Statics::NewProp_UIDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModifierBase_Statics::NewProp_UIDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifierBase_Statics::NewProp_bShowUI_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	void Z_Construct_UClass_AModifierBase_Statics::NewProp_bShowUI_SetBit(void* Obj)
	{
		((AModifierBase*)Obj)->bShowUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_bShowUI = { "bShowUI", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AModifierBase), &Z_Construct_UClass_AModifierBase_Statics::NewProp_bShowUI_SetBit, METADATA_PARAMS(Z_Construct_UClass_AModifierBase_Statics::NewProp_bShowUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModifierBase_Statics::NewProp_bShowUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifierBase_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AModifierBase_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModifierBase, Name), METADATA_PARAMS(Z_Construct_UClass_AModifierBase_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModifierBase_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModifierBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreMannualRemoval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreBlockType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_bForceIgnoreBlockList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierBlockTypeList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierBlockTypeList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierBlockTypeList_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierBlockList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierBlockList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_BelongingModComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_RemainingTimeBeforeExpire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierIsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_MaxStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_ModifierDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_UIDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_UITexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_UIDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_bShowUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifierBase_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModifierBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModifierBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModifierBase_Statics::ClassParams = {
		&AModifierBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AModifierBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AModifierBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AModifierBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AModifierBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModifierBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModifierBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModifierBase, 2892320121);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<AModifierBase>()
	{
		return AModifierBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModifierBase(Z_Construct_UClass_AModifierBase, &AModifierBase::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("AModifierBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModifierBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
