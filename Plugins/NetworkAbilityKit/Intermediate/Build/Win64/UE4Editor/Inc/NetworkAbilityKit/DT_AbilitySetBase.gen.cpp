// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/DT_AbilitySetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDT_AbilitySetBase() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UDT_AbilitySetBase_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UDT_AbilitySetBase();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	NETWORKABILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityListStruct();
// End Cross Module References
	void UDT_AbilitySetBase::StaticRegisterNativesUDT_AbilitySetBase()
	{
	}
	UClass* Z_Construct_UClass_UDT_AbilitySetBase_NoRegister()
	{
		return UDT_AbilitySetBase::StaticClass();
	}
	struct Z_Construct_UClass_UDT_AbilitySetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityListDataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityListDataStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDT_AbilitySetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataTable,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDT_AbilitySetBase_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DataTable,ImportOptions" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DT_AbilitySetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DT_AbilitySetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDT_AbilitySetBase_Statics::NewProp_AbilityListDataStruct_MetaData[] = {
		{ "ModuleRelativePath", "Public/DT_AbilitySetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDT_AbilitySetBase_Statics::NewProp_AbilityListDataStruct = { "AbilityListDataStruct", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDT_AbilitySetBase, AbilityListDataStruct), Z_Construct_UScriptStruct_FAbilityListStruct, METADATA_PARAMS(Z_Construct_UClass_UDT_AbilitySetBase_Statics::NewProp_AbilityListDataStruct_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDT_AbilitySetBase_Statics::NewProp_AbilityListDataStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDT_AbilitySetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDT_AbilitySetBase_Statics::NewProp_AbilityListDataStruct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDT_AbilitySetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDT_AbilitySetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDT_AbilitySetBase_Statics::ClassParams = {
		&UDT_AbilitySetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDT_AbilitySetBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDT_AbilitySetBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDT_AbilitySetBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDT_AbilitySetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDT_AbilitySetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDT_AbilitySetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDT_AbilitySetBase, 1122348770);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<UDT_AbilitySetBase>()
	{
		return UDT_AbilitySetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDT_AbilitySetBase(Z_Construct_UClass_UDT_AbilitySetBase, &UDT_AbilitySetBase::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("UDT_AbilitySetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDT_AbilitySetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
