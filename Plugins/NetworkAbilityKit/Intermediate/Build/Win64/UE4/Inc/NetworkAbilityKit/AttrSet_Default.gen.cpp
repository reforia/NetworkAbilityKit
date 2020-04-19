// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/AttrSet_Default.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttrSet_Default() {}
// Cross Module References
	NETWORKABILITYKIT_API UFunction* Z_Construct_UDelegateFunction_NetworkAbilityKit_OnDeathDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AAttrSet_Default_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AAttrSet_Default();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AAttributeSetBase();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AAttrSet_Default_OnRep_HealthChanged();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AAttrSet_Default_OnRep_ManaChanged();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AAttrSet_Default_OnRep_MaxHealthChanged();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AAttrSet_Default_OnRep_MaxManaChanged();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NetworkAbilityKit_OnDeathDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NetworkAbilityKit_OnDeathDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttrSet_Default.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NetworkAbilityKit_OnDeathDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NetworkAbilityKit, nullptr, "OnDeathDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NetworkAbilityKit_OnDeathDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_NetworkAbilityKit_OnDeathDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NetworkAbilityKit_OnDeathDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_NetworkAbilityKit_OnDeathDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AAttrSet_Default::StaticRegisterNativesAAttrSet_Default()
	{
		UClass* Class = AAttrSet_Default::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_HealthChanged", &AAttrSet_Default::execOnRep_HealthChanged },
			{ "OnRep_ManaChanged", &AAttrSet_Default::execOnRep_ManaChanged },
			{ "OnRep_MaxHealthChanged", &AAttrSet_Default::execOnRep_MaxHealthChanged },
			{ "OnRep_MaxManaChanged", &AAttrSet_Default::execOnRep_MaxManaChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAttrSet_Default_OnRep_HealthChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttrSet_Default_OnRep_HealthChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AttrSet_Default.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttrSet_Default_OnRep_HealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttrSet_Default, nullptr, "OnRep_HealthChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAttrSet_Default_OnRep_HealthChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAttrSet_Default_OnRep_HealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAttrSet_Default_OnRep_HealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAttrSet_Default_OnRep_HealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAttrSet_Default_OnRep_ManaChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttrSet_Default_OnRep_ManaChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AttrSet_Default.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttrSet_Default_OnRep_ManaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttrSet_Default, nullptr, "OnRep_ManaChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAttrSet_Default_OnRep_ManaChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAttrSet_Default_OnRep_ManaChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAttrSet_Default_OnRep_ManaChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAttrSet_Default_OnRep_ManaChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAttrSet_Default_OnRep_MaxHealthChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttrSet_Default_OnRep_MaxHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AttrSet_Default.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttrSet_Default_OnRep_MaxHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttrSet_Default, nullptr, "OnRep_MaxHealthChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAttrSet_Default_OnRep_MaxHealthChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAttrSet_Default_OnRep_MaxHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAttrSet_Default_OnRep_MaxHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAttrSet_Default_OnRep_MaxHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAttrSet_Default_OnRep_MaxManaChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttrSet_Default_OnRep_MaxManaChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AttrSet_Default.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttrSet_Default_OnRep_MaxManaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttrSet_Default, nullptr, "OnRep_MaxManaChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAttrSet_Default_OnRep_MaxManaChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAttrSet_Default_OnRep_MaxManaChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAttrSet_Default_OnRep_MaxManaChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAttrSet_Default_OnRep_MaxManaChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAttrSet_Default_NoRegister()
	{
		return AAttrSet_Default::StaticClass();
	}
	struct Z_Construct_UClass_AAttrSet_Default_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDeathDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeathDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAttrSet_Default_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAttributeSetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAttrSet_Default_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAttrSet_Default_OnRep_HealthChanged, "OnRep_HealthChanged" }, // 1142620336
		{ &Z_Construct_UFunction_AAttrSet_Default_OnRep_ManaChanged, "OnRep_ManaChanged" }, // 652528150
		{ &Z_Construct_UFunction_AAttrSet_Default_OnRep_MaxHealthChanged, "OnRep_MaxHealthChanged" }, // 2277545807
		{ &Z_Construct_UFunction_AAttrSet_Default_OnRep_MaxManaChanged, "OnRep_MaxManaChanged" }, // 624070377
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttrSet_Default_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AttrSet_Default.h" },
		{ "ModuleRelativePath", "Public/AttrSet_Default.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_OnDeathDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttrSet_Default.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_OnDeathDelegate = { "OnDeathDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAttrSet_Default, OnDeathDelegate), Z_Construct_UDelegateFunction_NetworkAbilityKit_OnDeathDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_OnDeathDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_OnDeathDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AttrSet_Default.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxManaChanged", (EPropertyFlags)0x0010000100010035, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAttrSet_Default, MaxMana), METADATA_PARAMS(Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_MaxMana_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_MaxMana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AttrSet_Default.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_Mana = { "Mana", "OnRep_ManaChanged", (EPropertyFlags)0x0010000100020035, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAttrSet_Default, Mana), METADATA_PARAMS(Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_Mana_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_Mana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AttrSet_Default.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealthChanged", (EPropertyFlags)0x0010000100010035, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAttrSet_Default, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_MaxHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AttrSet_Default.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_Health = { "Health", "OnRep_HealthChanged", (EPropertyFlags)0x0010000100020035, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAttrSet_Default, Health), METADATA_PARAMS(Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAttrSet_Default_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_OnDeathDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_MaxMana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_Mana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttrSet_Default_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAttrSet_Default_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAttrSet_Default>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAttrSet_Default_Statics::ClassParams = {
		&AAttrSet_Default::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAttrSet_Default_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAttrSet_Default_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAttrSet_Default_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAttrSet_Default_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAttrSet_Default()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAttrSet_Default_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAttrSet_Default, 665501953);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<AAttrSet_Default>()
	{
		return AAttrSet_Default::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAttrSet_Default(Z_Construct_UClass_AAttrSet_Default, &AAttrSet_Default::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("AAttrSet_Default"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAttrSet_Default);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
