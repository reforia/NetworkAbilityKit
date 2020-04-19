// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/AttributeComp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeComp() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UAttributeComp_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UAttributeComp();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UAttributeComp_InitializeAttributeComp();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UAttributeComp_InitializeAttributePreset();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UAttributeComp_InitializeStatusPreset();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AStatusSetBase_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AAttributeSetBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UAttributeComp::StaticRegisterNativesUAttributeComp()
	{
		UClass* Class = UAttributeComp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeAttributeComp", &UAttributeComp::execInitializeAttributeComp },
			{ "InitializeAttributePreset", &UAttributeComp::execInitializeAttributePreset },
			{ "InitializeStatusPreset", &UAttributeComp::execInitializeStatusPreset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeComp_InitializeAttributeComp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeComp_InitializeAttributeComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/AttributeComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComp_InitializeAttributeComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComp, nullptr, "InitializeAttributeComp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeComp_InitializeAttributeComp_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAttributeComp_InitializeAttributeComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeComp_InitializeAttributeComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttributeComp_InitializeAttributeComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeComp_InitializeAttributePreset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeComp_InitializeAttributePreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/AttributeComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComp_InitializeAttributePreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComp, nullptr, "InitializeAttributePreset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeComp_InitializeAttributePreset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAttributeComp_InitializeAttributePreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeComp_InitializeAttributePreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttributeComp_InitializeAttributePreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeComp_InitializeStatusPreset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeComp_InitializeStatusPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/AttributeComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComp_InitializeStatusPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComp, nullptr, "InitializeStatusPreset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeComp_InitializeStatusPreset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAttributeComp_InitializeStatusPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeComp_InitializeStatusPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttributeComp_InitializeStatusPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAttributeComp_NoRegister()
	{
		return UAttributeComp::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeComp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusPreset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatusPreset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributePreset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributePreset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusPresetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StatusPresetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributePresetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AttributePresetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeComp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributeComp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeComp_InitializeAttributeComp, "InitializeAttributeComp" }, // 2126247158
		{ &Z_Construct_UFunction_UAttributeComp_InitializeAttributePreset, "InitializeAttributePreset" }, // 1761084516
		{ &Z_Construct_UFunction_UAttributeComp_InitializeStatusPreset, "InitializeStatusPreset" }, // 53239789
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeComp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AttributeComp.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AttributeComp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeComp_Statics::NewProp_StatusPreset_MetaData[] = {
		{ "Category", "Preset" },
		{ "ModuleRelativePath", "Public/AttributeComp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttributeComp_Statics::NewProp_StatusPreset = { "StatusPreset", nullptr, (EPropertyFlags)0x0010000000020035, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeComp, StatusPreset), Z_Construct_UClass_AStatusSetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttributeComp_Statics::NewProp_StatusPreset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttributeComp_Statics::NewProp_StatusPreset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeComp_Statics::NewProp_AttributePreset_MetaData[] = {
		{ "Category", "Preset" },
		{ "ModuleRelativePath", "Public/AttributeComp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttributeComp_Statics::NewProp_AttributePreset = { "AttributePreset", nullptr, (EPropertyFlags)0x0010000000020035, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeComp, AttributePreset), Z_Construct_UClass_AAttributeSetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttributeComp_Statics::NewProp_AttributePreset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttributeComp_Statics::NewProp_AttributePreset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeComp_Statics::NewProp_StatusPresetClass_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/AttributeComp.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAttributeComp_Statics::NewProp_StatusPresetClass = { "StatusPresetClass", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeComp, StatusPresetClass), Z_Construct_UClass_AStatusSetBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAttributeComp_Statics::NewProp_StatusPresetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttributeComp_Statics::NewProp_StatusPresetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeComp_Statics::NewProp_AttributePresetClass_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/AttributeComp.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAttributeComp_Statics::NewProp_AttributePresetClass = { "AttributePresetClass", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeComp, AttributePresetClass), Z_Construct_UClass_AAttributeSetBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAttributeComp_Statics::NewProp_AttributePresetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttributeComp_Statics::NewProp_AttributePresetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeComp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComp_Statics::NewProp_StatusPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComp_Statics::NewProp_AttributePreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComp_Statics::NewProp_StatusPresetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComp_Statics::NewProp_AttributePresetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeComp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeComp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttributeComp_Statics::ClassParams = {
		&UAttributeComp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAttributeComp_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAttributeComp_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributeComp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAttributeComp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeComp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttributeComp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttributeComp, 3374211858);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<UAttributeComp>()
	{
		return UAttributeComp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttributeComp(Z_Construct_UClass_UAttributeComp, &UAttributeComp::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("UAttributeComp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeComp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
