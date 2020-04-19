// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/ModifierComp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifierComp() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UModifierComp_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UModifierComp();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UModifierComp_AddToLocalModifierList();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AModifierBase_NoRegister();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UModifierComp_ApplyModifierPrecheck();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UModifierComp_BlockListCheck();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UModifierComp_BlockTypeCheck();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UModifierComp_OnModifierAdded();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UModifierComp_OnModifierBlocked();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UModifierComp_OnModifierBlockListAdded();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UModifierComp_OnModifierBlockListRemoved();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded();
	NETWORKABILITYKIT_API UEnum* Z_Construct_UEnum_NetworkAbilityKit_EModifierType();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UModifierComp_OnModifierRemoved();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UModifierComp_OnReceivedModifier();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UModifierComp_OnTryRemoveModifier();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UModifierComp_OnTryRemoveModifierByType();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockList();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockTypeList();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierList();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UI_Modifier_NoRegister();
// End Cross Module References
	static FName NAME_UModifierComp_AddToLocalModifierList = FName(TEXT("AddToLocalModifierList"));
	void UModifierComp::AddToLocalModifierList(AModifierBase* Modifier)
	{
		ModifierComp_eventAddToLocalModifierList_Parms Parms;
		Parms.Modifier=Modifier;
		ProcessEvent(FindFunctionChecked(NAME_UModifierComp_AddToLocalModifierList),&Parms);
	}
	static FName NAME_UModifierComp_OnModifierAdded = FName(TEXT("OnModifierAdded"));
	void UModifierComp::OnModifierAdded(AModifierBase* AddedModifier)
	{
		ModifierComp_eventOnModifierAdded_Parms Parms;
		Parms.AddedModifier=AddedModifier;
		ProcessEvent(FindFunctionChecked(NAME_UModifierComp_OnModifierAdded),&Parms);
	}
	static FName NAME_UModifierComp_OnModifierBlocked = FName(TEXT("OnModifierBlocked"));
	void UModifierComp::OnModifierBlocked(AModifierBase* BlockedModifier)
	{
		ModifierComp_eventOnModifierBlocked_Parms Parms;
		Parms.BlockedModifier=BlockedModifier;
		ProcessEvent(FindFunctionChecked(NAME_UModifierComp_OnModifierBlocked),&Parms);
	}
	static FName NAME_UModifierComp_OnModifierBlockListAdded = FName(TEXT("OnModifierBlockListAdded"));
	void UModifierComp::OnModifierBlockListAdded(TArray<FName> const& NewBlockModifierNameList)
	{
		ModifierComp_eventOnModifierBlockListAdded_Parms Parms;
		Parms.NewBlockModifierNameList=NewBlockModifierNameList;
		ProcessEvent(FindFunctionChecked(NAME_UModifierComp_OnModifierBlockListAdded),&Parms);
	}
	static FName NAME_UModifierComp_OnModifierBlockListRemoved = FName(TEXT("OnModifierBlockListRemoved"));
	void UModifierComp::OnModifierBlockListRemoved(TArray<FName> const& NewBlockedModifierNameList)
	{
		ModifierComp_eventOnModifierBlockListRemoved_Parms Parms;
		Parms.NewBlockedModifierNameList=NewBlockedModifierNameList;
		ProcessEvent(FindFunctionChecked(NAME_UModifierComp_OnModifierBlockListRemoved),&Parms);
	}
	static FName NAME_UModifierComp_OnModifierBlockTypeAdded = FName(TEXT("OnModifierBlockTypeAdded"));
	void UModifierComp::OnModifierBlockTypeAdded(TArray<EModifierType> const& NewBlockedModifierTypeList)
	{
		ModifierComp_eventOnModifierBlockTypeAdded_Parms Parms;
		Parms.NewBlockedModifierTypeList=NewBlockedModifierTypeList;
		ProcessEvent(FindFunctionChecked(NAME_UModifierComp_OnModifierBlockTypeAdded),&Parms);
	}
	static FName NAME_UModifierComp_OnModifierBlockTypeRemoved = FName(TEXT("OnModifierBlockTypeRemoved"));
	void UModifierComp::OnModifierBlockTypeRemoved(TArray<EModifierType> const& NewBlockedModifierTypeList)
	{
		ModifierComp_eventOnModifierBlockTypeRemoved_Parms Parms;
		Parms.NewBlockedModifierTypeList=NewBlockedModifierTypeList;
		ProcessEvent(FindFunctionChecked(NAME_UModifierComp_OnModifierBlockTypeRemoved),&Parms);
	}
	static FName NAME_UModifierComp_OnReceivedModifier = FName(TEXT("OnReceivedModifier"));
	void UModifierComp::OnReceivedModifier(AModifierBase* Modifier, AActor* ModifierInstigator)
	{
		ModifierComp_eventOnReceivedModifier_Parms Parms;
		Parms.Modifier=Modifier;
		Parms.ModifierInstigator=ModifierInstigator;
		ProcessEvent(FindFunctionChecked(NAME_UModifierComp_OnReceivedModifier),&Parms);
	}
	static FName NAME_UModifierComp_OnTryRemoveModifier = FName(TEXT("OnTryRemoveModifier"));
	void UModifierComp::OnTryRemoveModifier(FName ModifierName)
	{
		ModifierComp_eventOnTryRemoveModifier_Parms Parms;
		Parms.ModifierName=ModifierName;
		ProcessEvent(FindFunctionChecked(NAME_UModifierComp_OnTryRemoveModifier),&Parms);
	}
	static FName NAME_UModifierComp_OnTryRemoveModifierByType = FName(TEXT("OnTryRemoveModifierByType"));
	void UModifierComp::OnTryRemoveModifierByType(EModifierType ModifierType)
	{
		ModifierComp_eventOnTryRemoveModifierByType_Parms Parms;
		Parms.ModifierType=ModifierType;
		ProcessEvent(FindFunctionChecked(NAME_UModifierComp_OnTryRemoveModifierByType),&Parms);
	}
	void UModifierComp::StaticRegisterNativesUModifierComp()
	{
		UClass* Class = UModifierComp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToLocalModifierList", &UModifierComp::execAddToLocalModifierList },
			{ "ApplyModifierPrecheck", &UModifierComp::execApplyModifierPrecheck },
			{ "BlockListCheck", &UModifierComp::execBlockListCheck },
			{ "BlockTypeCheck", &UModifierComp::execBlockTypeCheck },
			{ "OnModifierRemoved", &UModifierComp::execOnModifierRemoved },
			{ "OnReceivedModifier", &UModifierComp::execOnReceivedModifier },
			{ "OnTryRemoveModifier", &UModifierComp::execOnTryRemoveModifier },
			{ "OnTryRemoveModifierByType", &UModifierComp::execOnTryRemoveModifierByType },
			{ "RemoveFromLocalModifierBlockList", &UModifierComp::execRemoveFromLocalModifierBlockList },
			{ "RemoveFromLocalModifierBlockTypeList", &UModifierComp::execRemoveFromLocalModifierBlockTypeList },
			{ "RemoveFromLocalModifierList", &UModifierComp::execRemoveFromLocalModifierList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModifierComp_AddToLocalModifierList_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierComp_AddToLocalModifierList_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierComp_eventAddToLocalModifierList_Parms, Modifier), Z_Construct_UClass_AModifierBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierComp_AddToLocalModifierList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_AddToLocalModifierList_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_AddToLocalModifierList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierComp_AddToLocalModifierList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierComp, nullptr, "AddToLocalModifierList", nullptr, nullptr, sizeof(ModifierComp_eventAddToLocalModifierList_Parms), Z_Construct_UFunction_UModifierComp_AddToLocalModifierList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_AddToLocalModifierList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_AddToLocalModifierList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_AddToLocalModifierList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierComp_AddToLocalModifierList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierComp_AddToLocalModifierList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierComp_ApplyModifierPrecheck_Statics
	{
		struct ModifierComp_eventApplyModifierPrecheck_Parms
		{
			AModifierBase* InModifier;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UModifierComp_ApplyModifierPrecheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModifierComp_eventApplyModifierPrecheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModifierComp_ApplyModifierPrecheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModifierComp_eventApplyModifierPrecheck_Parms), &Z_Construct_UFunction_UModifierComp_ApplyModifierPrecheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierComp_ApplyModifierPrecheck_Statics::NewProp_InModifier = { "InModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierComp_eventApplyModifierPrecheck_Parms, InModifier), Z_Construct_UClass_AModifierBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierComp_ApplyModifierPrecheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_ApplyModifierPrecheck_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_ApplyModifierPrecheck_Statics::NewProp_InModifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_ApplyModifierPrecheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "Comment", "//UFUNCTION(Client, Reliable, WithValidation, Category = \"Modifier\")\n//void InitializeModifier();\n" },
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
		{ "ToolTip", "UFUNCTION(Client, Reliable, WithValidation, Category = \"Modifier\")\nvoid InitializeModifier();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierComp_ApplyModifierPrecheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierComp, nullptr, "ApplyModifierPrecheck", nullptr, nullptr, sizeof(ModifierComp_eventApplyModifierPrecheck_Parms), Z_Construct_UFunction_UModifierComp_ApplyModifierPrecheck_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_ApplyModifierPrecheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_ApplyModifierPrecheck_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_ApplyModifierPrecheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierComp_ApplyModifierPrecheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierComp_ApplyModifierPrecheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierComp_BlockListCheck_Statics
	{
		struct ModifierComp_eventBlockListCheck_Parms
		{
			AModifierBase* Modifier;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UModifierComp_BlockListCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModifierComp_eventBlockListCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModifierComp_BlockListCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModifierComp_eventBlockListCheck_Parms), &Z_Construct_UFunction_UModifierComp_BlockListCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierComp_BlockListCheck_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierComp_eventBlockListCheck_Parms, Modifier), Z_Construct_UClass_AModifierBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierComp_BlockListCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_BlockListCheck_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_BlockListCheck_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_BlockListCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierComp_BlockListCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierComp, nullptr, "BlockListCheck", nullptr, nullptr, sizeof(ModifierComp_eventBlockListCheck_Parms), Z_Construct_UFunction_UModifierComp_BlockListCheck_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_BlockListCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_BlockListCheck_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_BlockListCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierComp_BlockListCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierComp_BlockListCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierComp_BlockTypeCheck_Statics
	{
		struct ModifierComp_eventBlockTypeCheck_Parms
		{
			AModifierBase* Modifier;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UModifierComp_BlockTypeCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModifierComp_eventBlockTypeCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModifierComp_BlockTypeCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModifierComp_eventBlockTypeCheck_Parms), &Z_Construct_UFunction_UModifierComp_BlockTypeCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierComp_BlockTypeCheck_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierComp_eventBlockTypeCheck_Parms, Modifier), Z_Construct_UClass_AModifierBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierComp_BlockTypeCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_BlockTypeCheck_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_BlockTypeCheck_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_BlockTypeCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierComp_BlockTypeCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierComp, nullptr, "BlockTypeCheck", nullptr, nullptr, sizeof(ModifierComp_eventBlockTypeCheck_Parms), Z_Construct_UFunction_UModifierComp_BlockTypeCheck_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_BlockTypeCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_BlockTypeCheck_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_BlockTypeCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierComp_BlockTypeCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierComp_BlockTypeCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierComp_OnModifierAdded_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AddedModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierComp_OnModifierAdded_Statics::NewProp_AddedModifier = { "AddedModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierComp_eventOnModifierAdded_Parms, AddedModifier), Z_Construct_UClass_AModifierBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierComp_OnModifierAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_OnModifierAdded_Statics::NewProp_AddedModifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_OnModifierAdded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierComp_OnModifierAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierComp, nullptr, "OnModifierAdded", nullptr, nullptr, sizeof(ModifierComp_eventOnModifierAdded_Parms), Z_Construct_UFunction_UModifierComp_OnModifierAdded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnModifierAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_OnModifierAdded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnModifierAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierComp_OnModifierAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierComp_OnModifierAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierComp_OnModifierBlocked_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockedModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierComp_OnModifierBlocked_Statics::NewProp_BlockedModifier = { "BlockedModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierComp_eventOnModifierBlocked_Parms, BlockedModifier), Z_Construct_UClass_AModifierBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierComp_OnModifierBlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_OnModifierBlocked_Statics::NewProp_BlockedModifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_OnModifierBlocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierComp_OnModifierBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierComp, nullptr, "OnModifierBlocked", nullptr, nullptr, sizeof(ModifierComp_eventOnModifierBlocked_Parms), Z_Construct_UFunction_UModifierComp_OnModifierBlocked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnModifierBlocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_OnModifierBlocked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnModifierBlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierComp_OnModifierBlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierComp_OnModifierBlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierComp_OnModifierBlockListAdded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewBlockModifierNameList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewBlockModifierNameList;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewBlockModifierNameList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_OnModifierBlockListAdded_Statics::NewProp_NewBlockModifierNameList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModifierComp_OnModifierBlockListAdded_Statics::NewProp_NewBlockModifierNameList = { "NewBlockModifierNameList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierComp_eventOnModifierBlockListAdded_Parms, NewBlockModifierNameList), METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_OnModifierBlockListAdded_Statics::NewProp_NewBlockModifierNameList_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnModifierBlockListAdded_Statics::NewProp_NewBlockModifierNameList_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierComp_OnModifierBlockListAdded_Statics::NewProp_NewBlockModifierNameList_Inner = { "NewBlockModifierNameList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierComp_OnModifierBlockListAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_OnModifierBlockListAdded_Statics::NewProp_NewBlockModifierNameList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_OnModifierBlockListAdded_Statics::NewProp_NewBlockModifierNameList_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_OnModifierBlockListAdded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierComp_OnModifierBlockListAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierComp, nullptr, "OnModifierBlockListAdded", nullptr, nullptr, sizeof(ModifierComp_eventOnModifierBlockListAdded_Parms), Z_Construct_UFunction_UModifierComp_OnModifierBlockListAdded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnModifierBlockListAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_OnModifierBlockListAdded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnModifierBlockListAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierComp_OnModifierBlockListAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierComp_OnModifierBlockListAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierComp_OnModifierBlockListRemoved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewBlockedModifierNameList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewBlockedModifierNameList;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewBlockedModifierNameList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_OnModifierBlockListRemoved_Statics::NewProp_NewBlockedModifierNameList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModifierComp_OnModifierBlockListRemoved_Statics::NewProp_NewBlockedModifierNameList = { "NewBlockedModifierNameList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierComp_eventOnModifierBlockListRemoved_Parms, NewBlockedModifierNameList), METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_OnModifierBlockListRemoved_Statics::NewProp_NewBlockedModifierNameList_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnModifierBlockListRemoved_Statics::NewProp_NewBlockedModifierNameList_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierComp_OnModifierBlockListRemoved_Statics::NewProp_NewBlockedModifierNameList_Inner = { "NewBlockedModifierNameList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierComp_OnModifierBlockListRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_OnModifierBlockListRemoved_Statics::NewProp_NewBlockedModifierNameList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_OnModifierBlockListRemoved_Statics::NewProp_NewBlockedModifierNameList_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_OnModifierBlockListRemoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierComp_OnModifierBlockListRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierComp, nullptr, "OnModifierBlockListRemoved", nullptr, nullptr, sizeof(ModifierComp_eventOnModifierBlockListRemoved_Parms), Z_Construct_UFunction_UModifierComp_OnModifierBlockListRemoved_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnModifierBlockListRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_OnModifierBlockListRemoved_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnModifierBlockListRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierComp_OnModifierBlockListRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierComp_OnModifierBlockListRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewBlockedModifierTypeList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewBlockedModifierTypeList;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewBlockedModifierTypeList_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewBlockedModifierTypeList_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded_Statics::NewProp_NewBlockedModifierTypeList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded_Statics::NewProp_NewBlockedModifierTypeList = { "NewBlockedModifierTypeList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierComp_eventOnModifierBlockTypeAdded_Parms, NewBlockedModifierTypeList), METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded_Statics::NewProp_NewBlockedModifierTypeList_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded_Statics::NewProp_NewBlockedModifierTypeList_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded_Statics::NewProp_NewBlockedModifierTypeList_Inner = { "NewBlockedModifierTypeList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_NetworkAbilityKit_EModifierType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded_Statics::NewProp_NewBlockedModifierTypeList_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded_Statics::NewProp_NewBlockedModifierTypeList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded_Statics::NewProp_NewBlockedModifierTypeList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded_Statics::NewProp_NewBlockedModifierTypeList_Inner_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierComp, nullptr, "OnModifierBlockTypeAdded", nullptr, nullptr, sizeof(ModifierComp_eventOnModifierBlockTypeAdded_Parms), Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewBlockedModifierTypeList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewBlockedModifierTypeList;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewBlockedModifierTypeList_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewBlockedModifierTypeList_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved_Statics::NewProp_NewBlockedModifierTypeList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved_Statics::NewProp_NewBlockedModifierTypeList = { "NewBlockedModifierTypeList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierComp_eventOnModifierBlockTypeRemoved_Parms, NewBlockedModifierTypeList), METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved_Statics::NewProp_NewBlockedModifierTypeList_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved_Statics::NewProp_NewBlockedModifierTypeList_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved_Statics::NewProp_NewBlockedModifierTypeList_Inner = { "NewBlockedModifierTypeList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_NetworkAbilityKit_EModifierType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved_Statics::NewProp_NewBlockedModifierTypeList_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved_Statics::NewProp_NewBlockedModifierTypeList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved_Statics::NewProp_NewBlockedModifierTypeList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved_Statics::NewProp_NewBlockedModifierTypeList_Inner_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierComp, nullptr, "OnModifierBlockTypeRemoved", nullptr, nullptr, sizeof(ModifierComp_eventOnModifierBlockTypeRemoved_Parms), Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierComp_OnModifierRemoved_Statics
	{
		struct ModifierComp_eventOnModifierRemoved_Parms
		{
			AModifierBase* RemovedModifier;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemovedModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierComp_OnModifierRemoved_Statics::NewProp_RemovedModifier = { "RemovedModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierComp_eventOnModifierRemoved_Parms, RemovedModifier), Z_Construct_UClass_AModifierBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierComp_OnModifierRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_OnModifierRemoved_Statics::NewProp_RemovedModifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_OnModifierRemoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierComp_OnModifierRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierComp, nullptr, "OnModifierRemoved", nullptr, nullptr, sizeof(ModifierComp_eventOnModifierRemoved_Parms), Z_Construct_UFunction_UModifierComp_OnModifierRemoved_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnModifierRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_OnModifierRemoved_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnModifierRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierComp_OnModifierRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierComp_OnModifierRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierComp_OnReceivedModifier_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModifierInstigator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierComp_OnReceivedModifier_Statics::NewProp_ModifierInstigator = { "ModifierInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierComp_eventOnReceivedModifier_Parms, ModifierInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierComp_OnReceivedModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierComp_eventOnReceivedModifier_Parms, Modifier), Z_Construct_UClass_AModifierBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierComp_OnReceivedModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_OnReceivedModifier_Statics::NewProp_ModifierInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_OnReceivedModifier_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_OnReceivedModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier Interface" },
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierComp_OnReceivedModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierComp, nullptr, "OnReceivedModifier", nullptr, nullptr, sizeof(ModifierComp_eventOnReceivedModifier_Parms), Z_Construct_UFunction_UModifierComp_OnReceivedModifier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnReceivedModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_OnReceivedModifier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnReceivedModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierComp_OnReceivedModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierComp_OnReceivedModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierComp_OnTryRemoveModifier_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ModifierName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierComp_OnTryRemoveModifier_Statics::NewProp_ModifierName = { "ModifierName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierComp_eventOnTryRemoveModifier_Parms, ModifierName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierComp_OnTryRemoveModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_OnTryRemoveModifier_Statics::NewProp_ModifierName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_OnTryRemoveModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier Interface" },
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierComp_OnTryRemoveModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierComp, nullptr, "OnTryRemoveModifier", nullptr, nullptr, sizeof(ModifierComp_eventOnTryRemoveModifier_Parms), Z_Construct_UFunction_UModifierComp_OnTryRemoveModifier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnTryRemoveModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_OnTryRemoveModifier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnTryRemoveModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierComp_OnTryRemoveModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierComp_OnTryRemoveModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierComp_OnTryRemoveModifierByType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModifierType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModifierType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModifierComp_OnTryRemoveModifierByType_Statics::NewProp_ModifierType = { "ModifierType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierComp_eventOnTryRemoveModifierByType_Parms, ModifierType), Z_Construct_UEnum_NetworkAbilityKit_EModifierType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModifierComp_OnTryRemoveModifierByType_Statics::NewProp_ModifierType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierComp_OnTryRemoveModifierByType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_OnTryRemoveModifierByType_Statics::NewProp_ModifierType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_OnTryRemoveModifierByType_Statics::NewProp_ModifierType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_OnTryRemoveModifierByType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier Interface" },
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierComp_OnTryRemoveModifierByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierComp, nullptr, "OnTryRemoveModifierByType", nullptr, nullptr, sizeof(ModifierComp_eventOnTryRemoveModifierByType_Parms), Z_Construct_UFunction_UModifierComp_OnTryRemoveModifierByType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnTryRemoveModifierByType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_OnTryRemoveModifierByType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_OnTryRemoveModifierByType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierComp_OnTryRemoveModifierByType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierComp_OnTryRemoveModifierByType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockList_Statics
	{
		struct ModifierComp_eventRemoveFromLocalModifierBlockList_Parms
		{
			TArray<FName> ModifierBlockListToRemove;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifierBlockListToRemove;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ModifierBlockListToRemove_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockList_Statics::NewProp_ModifierBlockListToRemove = { "ModifierBlockListToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierComp_eventRemoveFromLocalModifierBlockList_Parms, ModifierBlockListToRemove), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockList_Statics::NewProp_ModifierBlockListToRemove_Inner = { "ModifierBlockListToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockList_Statics::NewProp_ModifierBlockListToRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockList_Statics::NewProp_ModifierBlockListToRemove_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierComp, nullptr, "RemoveFromLocalModifierBlockList", nullptr, nullptr, sizeof(ModifierComp_eventRemoveFromLocalModifierBlockList_Parms), Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockTypeList_Statics
	{
		struct ModifierComp_eventRemoveFromLocalModifierBlockTypeList_Parms
		{
			TArray<EModifierType> ModifierBlockTypeListToRemove;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifierBlockTypeListToRemove;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModifierBlockTypeListToRemove_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModifierBlockTypeListToRemove_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockTypeList_Statics::NewProp_ModifierBlockTypeListToRemove = { "ModifierBlockTypeListToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierComp_eventRemoveFromLocalModifierBlockTypeList_Parms, ModifierBlockTypeListToRemove), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockTypeList_Statics::NewProp_ModifierBlockTypeListToRemove_Inner = { "ModifierBlockTypeListToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_NetworkAbilityKit_EModifierType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockTypeList_Statics::NewProp_ModifierBlockTypeListToRemove_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockTypeList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockTypeList_Statics::NewProp_ModifierBlockTypeListToRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockTypeList_Statics::NewProp_ModifierBlockTypeListToRemove_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockTypeList_Statics::NewProp_ModifierBlockTypeListToRemove_Inner_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockTypeList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockTypeList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierComp, nullptr, "RemoveFromLocalModifierBlockTypeList", nullptr, nullptr, sizeof(ModifierComp_eventRemoveFromLocalModifierBlockTypeList_Parms), Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockTypeList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockTypeList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockTypeList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockTypeList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockTypeList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockTypeList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierList_Statics
	{
		struct ModifierComp_eventRemoveFromLocalModifierList_Parms
		{
			AModifierBase* Modifier;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierList_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierComp_eventRemoveFromLocalModifierList_Parms, Modifier), Z_Construct_UClass_AModifierBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierList_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierComp, nullptr, "RemoveFromLocalModifierList", nullptr, nullptr, sizeof(ModifierComp_eventRemoveFromLocalModifierList_Parms), Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModifierComp_NoRegister()
	{
		return UModifierComp::StaticClass();
	}
	struct Z_Construct_UClass_UModifierComp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierBlockList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifierBlockList;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ModifierBlockList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierBlockerTypeList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifierBlockerTypeList;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModifierBlockerTypeList_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModifierBlockerTypeList_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifierList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModifierList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModifierComp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModifierComp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModifierComp_AddToLocalModifierList, "AddToLocalModifierList" }, // 971814685
		{ &Z_Construct_UFunction_UModifierComp_ApplyModifierPrecheck, "ApplyModifierPrecheck" }, // 2012053831
		{ &Z_Construct_UFunction_UModifierComp_BlockListCheck, "BlockListCheck" }, // 2416958242
		{ &Z_Construct_UFunction_UModifierComp_BlockTypeCheck, "BlockTypeCheck" }, // 4078703101
		{ &Z_Construct_UFunction_UModifierComp_OnModifierAdded, "OnModifierAdded" }, // 1910123850
		{ &Z_Construct_UFunction_UModifierComp_OnModifierBlocked, "OnModifierBlocked" }, // 2782622908
		{ &Z_Construct_UFunction_UModifierComp_OnModifierBlockListAdded, "OnModifierBlockListAdded" }, // 543122996
		{ &Z_Construct_UFunction_UModifierComp_OnModifierBlockListRemoved, "OnModifierBlockListRemoved" }, // 4282344911
		{ &Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeAdded, "OnModifierBlockTypeAdded" }, // 51644865
		{ &Z_Construct_UFunction_UModifierComp_OnModifierBlockTypeRemoved, "OnModifierBlockTypeRemoved" }, // 334937355
		{ &Z_Construct_UFunction_UModifierComp_OnModifierRemoved, "OnModifierRemoved" }, // 2466798574
		{ &Z_Construct_UFunction_UModifierComp_OnReceivedModifier, "OnReceivedModifier" }, // 2167623957
		{ &Z_Construct_UFunction_UModifierComp_OnTryRemoveModifier, "OnTryRemoveModifier" }, // 3045310465
		{ &Z_Construct_UFunction_UModifierComp_OnTryRemoveModifierByType, "OnTryRemoveModifierByType" }, // 3787409418
		{ &Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockList, "RemoveFromLocalModifierBlockList" }, // 230808540
		{ &Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierBlockTypeList, "RemoveFromLocalModifierBlockTypeList" }, // 3295958786
		{ &Z_Construct_UFunction_UModifierComp_RemoveFromLocalModifierList, "RemoveFromLocalModifierList" }, // 272146741
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifierComp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ModifierComp.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierBlockList_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierBlockList = { "ModifierBlockList", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModifierComp, ModifierBlockList), METADATA_PARAMS(Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierBlockList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierBlockList_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierBlockList_Inner = { "ModifierBlockList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierBlockerTypeList_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierBlockerTypeList = { "ModifierBlockerTypeList", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModifierComp, ModifierBlockerTypeList), METADATA_PARAMS(Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierBlockerTypeList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierBlockerTypeList_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierBlockerTypeList_Inner = { "ModifierBlockerTypeList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_NetworkAbilityKit_EModifierType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierBlockerTypeList_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierList_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/ModifierComp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierList = { "ModifierList", nullptr, (EPropertyFlags)0x0020080000000034, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModifierComp, ModifierList), METADATA_PARAMS(Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierList_Inner = { "ModifierList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AModifierBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModifierComp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierBlockList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierBlockList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierBlockerTypeList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierBlockerTypeList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierBlockerTypeList_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModifierComp_Statics::NewProp_ModifierList_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UModifierComp_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UI_Modifier_NoRegister, (int32)VTABLE_OFFSET(UModifierComp, II_Modifier), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModifierComp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifierComp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModifierComp_Statics::ClassParams = {
		&UModifierComp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UModifierComp_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UModifierComp_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UModifierComp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UModifierComp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModifierComp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModifierComp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModifierComp, 2022320288);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<UModifierComp>()
	{
		return UModifierComp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModifierComp(Z_Construct_UClass_UModifierComp, &UModifierComp::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("UModifierComp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModifierComp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
