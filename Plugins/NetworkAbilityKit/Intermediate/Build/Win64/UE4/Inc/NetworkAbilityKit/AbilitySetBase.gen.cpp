// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/AbilitySetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitySetBase() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AAbilitySetBase_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AAbilitySetBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AAbilitySetBase_InitializeAbilities();
	NETWORKABILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityListStruct();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AAbilityBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static FName NAME_AAbilitySetBase_InitializeAbilities = FName(TEXT("InitializeAbilities"));
	void AAbilitySetBase::InitializeAbilities()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAbilitySetBase_InitializeAbilities),NULL);
	}
	void AAbilitySetBase::StaticRegisterNativesAAbilitySetBase()
	{
		UClass* Class = AAbilitySetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeAbilities", &AAbilitySetBase::execInitializeAbilities },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAbilitySetBase_InitializeAbilities_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbilitySetBase_InitializeAbilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/AbilitySetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbilitySetBase_InitializeAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbilitySetBase, nullptr, "InitializeAbilities", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbilitySetBase_InitializeAbilities_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAbilitySetBase_InitializeAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbilitySetBase_InitializeAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbilitySetBase_InitializeAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAbilitySetBase_NoRegister()
	{
		return AAbilitySetBase::StaticClass();
	}
	struct Z_Construct_UClass_AAbilitySetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityObjectsDict_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityObjectsDict;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityObjectsDict_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityList_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AbilityList;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AbilityList_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityList_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BelongingActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BelongingActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AbilityClasses;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AbilityClasses_Key_KeyProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilityClasses_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAbilitySetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAbilitySetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAbilitySetBase_InitializeAbilities, "InitializeAbilities" }, // 4026550783
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilitySetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySetBase.h" },
		{ "ModuleRelativePath", "Public/AbilitySetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityObjectsDict_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityObjectsDict = { "AbilityObjectsDict", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilitySetBase, AbilityObjectsDict), METADATA_PARAMS(Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityObjectsDict_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityObjectsDict_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityObjectsDict_Inner = { "AbilityObjectsDict", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAbilityListStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityArray_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityArray = { "AbilityArray", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilitySetBase, AbilityArray), METADATA_PARAMS(Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityArray_Inner = { "AbilityArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AAbilityBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityList_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityList = { "AbilityList", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilitySetBase, AbilityList), METADATA_PARAMS(Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityList_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityList_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityList_Key_KeyProp = { "AbilityList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityList_ValueProp = { "AbilityList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AAbilityBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_BelongingActor_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_BelongingActor = { "BelongingActor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilitySetBase, BelongingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_BelongingActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_BelongingActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityClasses_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityClasses = { "AbilityClasses", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilitySetBase, AbilityClasses), METADATA_PARAMS(Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityClasses_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityClasses_Key_KeyProp = { "AbilityClasses_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityClasses_ValueProp = { "AbilityClasses", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AAbilityBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAbilitySetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityObjectsDict,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityObjectsDict_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityList_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityList_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_BelongingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityClasses_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilitySetBase_Statics::NewProp_AbilityClasses_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAbilitySetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAbilitySetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAbilitySetBase_Statics::ClassParams = {
		&AAbilitySetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAbilitySetBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAbilitySetBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAbilitySetBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAbilitySetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAbilitySetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAbilitySetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAbilitySetBase, 3835243544);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<AAbilitySetBase>()
	{
		return AAbilitySetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAbilitySetBase(Z_Construct_UClass_AAbilitySetBase, &AAbilitySetBase::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("AAbilitySetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAbilitySetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
