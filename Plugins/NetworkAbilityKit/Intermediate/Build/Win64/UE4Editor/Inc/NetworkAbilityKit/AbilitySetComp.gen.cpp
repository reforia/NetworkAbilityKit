// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/AbilitySetComp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitySetComp() {}
// Cross Module References
	NETWORKABILITYKIT_API UFunction* Z_Construct_UDelegateFunction_NetworkAbilityKit_FinishedInitializeAbilitySetDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UAbilitySetComp_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UAbilitySetComp();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AAbilitySetBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NetworkAbilityKit_FinishedInitializeAbilitySetDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NetworkAbilityKit_FinishedInitializeAbilitySetDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySetComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NetworkAbilityKit_FinishedInitializeAbilitySetDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NetworkAbilityKit, nullptr, "FinishedInitializeAbilitySetDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NetworkAbilityKit_FinishedInitializeAbilitySetDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NetworkAbilityKit_FinishedInitializeAbilitySetDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NetworkAbilityKit_FinishedInitializeAbilitySetDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_NetworkAbilityKit_FinishedInitializeAbilitySetDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAbilitySetComp::execCLIENT_BroadcastFinishedInitializationEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->CLIENT_BroadcastFinishedInitializationEvent_Validate())
		{
			RPC_ValidateFailed(TEXT("CLIENT_BroadcastFinishedInitializationEvent_Validate"));
			return;
		}
		P_THIS->CLIENT_BroadcastFinishedInitializationEvent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilitySetComp::execInitializeAbilitySet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->InitializeAbilitySet_Validate())
		{
			RPC_ValidateFailed(TEXT("InitializeAbilitySet_Validate"));
			return;
		}
		P_THIS->InitializeAbilitySet_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UAbilitySetComp_CLIENT_BroadcastFinishedInitializationEvent = FName(TEXT("CLIENT_BroadcastFinishedInitializationEvent"));
	void UAbilitySetComp::CLIENT_BroadcastFinishedInitializationEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAbilitySetComp_CLIENT_BroadcastFinishedInitializationEvent),NULL);
	}
	static FName NAME_UAbilitySetComp_InitializeAbilitySet = FName(TEXT("InitializeAbilitySet"));
	void UAbilitySetComp::InitializeAbilitySet()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAbilitySetComp_InitializeAbilitySet),NULL);
	}
	void UAbilitySetComp::StaticRegisterNativesUAbilitySetComp()
	{
		UClass* Class = UAbilitySetComp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CLIENT_BroadcastFinishedInitializationEvent", &UAbilitySetComp::execCLIENT_BroadcastFinishedInitializationEvent },
			{ "InitializeAbilitySet", &UAbilitySetComp::execInitializeAbilitySet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilitySetComp_CLIENT_BroadcastFinishedInitializationEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySetComp_CLIENT_BroadcastFinishedInitializationEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "Comment", "//UFUNCTION(Server, Reliable, WithValidation, Category = \"Initialization\")\n//void SERVER_BroadcastFinishedInitializationEvent();\n" },
		{ "ModuleRelativePath", "Public/AbilitySetComp.h" },
		{ "ToolTip", "UFUNCTION(Server, Reliable, WithValidation, Category = \"Initialization\")\nvoid SERVER_BroadcastFinishedInitializationEvent();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySetComp_CLIENT_BroadcastFinishedInitializationEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySetComp, nullptr, "CLIENT_BroadcastFinishedInitializationEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitySetComp_CLIENT_BroadcastFinishedInitializationEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySetComp_CLIENT_BroadcastFinishedInitializationEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitySetComp_CLIENT_BroadcastFinishedInitializationEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitySetComp_CLIENT_BroadcastFinishedInitializationEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitySetComp_InitializeAbilitySet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySetComp_InitializeAbilitySet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/AbilitySetComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySetComp_InitializeAbilitySet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySetComp, nullptr, "InitializeAbilitySet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitySetComp_InitializeAbilitySet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySetComp_InitializeAbilitySet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitySetComp_InitializeAbilitySet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitySetComp_InitializeAbilitySet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAbilitySetComp_NoRegister()
	{
		return UAbilitySetComp::StaticClass();
	}
	struct Z_Construct_UClass_UAbilitySetComp_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySet_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilitySet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInitializationFinishedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInitializationFinishedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySetObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySetObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilitySetComp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilitySetComp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilitySetComp_CLIENT_BroadcastFinishedInitializationEvent, "CLIENT_BroadcastFinishedInitializationEvent" }, // 1547397316
		{ &Z_Construct_UFunction_UAbilitySetComp_InitializeAbilitySet, "InitializeAbilitySet" }, // 3738260538
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySetComp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AbilitySetComp.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilitySetComp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySetComp_Statics::NewProp_BelongingActor_MetaData[] = {
		{ "Category", "Parent" },
		{ "ModuleRelativePath", "Public/AbilitySetComp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitySetComp_Statics::NewProp_BelongingActor = { "BelongingActor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySetComp, BelongingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilitySetComp_Statics::NewProp_BelongingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySetComp_Statics::NewProp_BelongingActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySetComp_Statics::NewProp_AbilitySet_MetaData[] = {
		{ "Category", "AbilitySet" },
		{ "ModuleRelativePath", "Public/AbilitySetComp.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilitySetComp_Statics::NewProp_AbilitySet = { "AbilitySet", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySetComp, AbilitySet), Z_Construct_UClass_AAbilitySetBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAbilitySetComp_Statics::NewProp_AbilitySet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySetComp_Statics::NewProp_AbilitySet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySetComp_Statics::NewProp_OnInitializationFinishedDelegate_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySetComp.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilitySetComp_Statics::NewProp_OnInitializationFinishedDelegate = { "OnInitializationFinishedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySetComp, OnInitializationFinishedDelegate), Z_Construct_UDelegateFunction_NetworkAbilityKit_FinishedInitializeAbilitySetDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilitySetComp_Statics::NewProp_OnInitializationFinishedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySetComp_Statics::NewProp_OnInitializationFinishedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySetComp_Statics::NewProp_AbilitySetObject_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySetComp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitySetComp_Statics::NewProp_AbilitySetObject = { "AbilitySetObject", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySetComp, AbilitySetObject), Z_Construct_UClass_AAbilitySetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilitySetComp_Statics::NewProp_AbilitySetObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySetComp_Statics::NewProp_AbilitySetObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilitySetComp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySetComp_Statics::NewProp_BelongingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySetComp_Statics::NewProp_AbilitySet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySetComp_Statics::NewProp_OnInitializationFinishedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySetComp_Statics::NewProp_AbilitySetObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilitySetComp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilitySetComp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbilitySetComp_Statics::ClassParams = {
		&UAbilitySetComp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilitySetComp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySetComp_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilitySetComp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySetComp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilitySetComp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbilitySetComp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbilitySetComp, 3692053959);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<UAbilitySetComp>()
	{
		return UAbilitySetComp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbilitySetComp(Z_Construct_UClass_UAbilitySetComp, &UAbilitySetComp::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("UAbilitySetComp"), false, nullptr, nullptr, nullptr);

	void UAbilitySetComp::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_AbilitySetObject(TEXT("AbilitySetObject"));

		const bool bIsValid = true
			&& Name_AbilitySetObject == ClassReps[(int32)ENetFields_Private::AbilitySetObject].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAbilitySetComp"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilitySetComp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
