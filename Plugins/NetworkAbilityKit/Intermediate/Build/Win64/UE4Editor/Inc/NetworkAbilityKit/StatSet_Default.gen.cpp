// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/StatSet_Default.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatSet_Default() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AStatSet_Default_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AStatSet_Default();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AStatusSetBase();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
// End Cross Module References
	void AStatSet_Default::StaticRegisterNativesAStatSet_Default()
	{
	}
	UClass* Z_Construct_UClass_AStatSet_Default_NoRegister()
	{
		return AStatSet_Default::StaticClass();
	}
	struct Z_Construct_UClass_AStatSet_Default_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Silence_MetaData[];
#endif
		static void NewProp_Silence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Silence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stun_MetaData[];
#endif
		static void NewProp_Stun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Stun;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStatSet_Default_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStatusSetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatSet_Default_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StatSet_Default.h" },
		{ "ModuleRelativePath", "Public/StatSet_Default.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatSet_Default_Statics::NewProp_Silence_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Public/StatSet_Default.h" },
	};
#endif
	void Z_Construct_UClass_AStatSet_Default_Statics::NewProp_Silence_SetBit(void* Obj)
	{
		((AStatSet_Default*)Obj)->Silence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatSet_Default_Statics::NewProp_Silence = { "Silence", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStatSet_Default), &Z_Construct_UClass_AStatSet_Default_Statics::NewProp_Silence_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStatSet_Default_Statics::NewProp_Silence_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatSet_Default_Statics::NewProp_Silence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatSet_Default_Statics::NewProp_Stun_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Public/StatSet_Default.h" },
	};
#endif
	void Z_Construct_UClass_AStatSet_Default_Statics::NewProp_Stun_SetBit(void* Obj)
	{
		((AStatSet_Default*)Obj)->Stun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatSet_Default_Statics::NewProp_Stun = { "Stun", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStatSet_Default), &Z_Construct_UClass_AStatSet_Default_Statics::NewProp_Stun_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStatSet_Default_Statics::NewProp_Stun_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatSet_Default_Statics::NewProp_Stun_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStatSet_Default_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatSet_Default_Statics::NewProp_Silence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatSet_Default_Statics::NewProp_Stun,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStatSet_Default_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStatSet_Default>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStatSet_Default_Statics::ClassParams = {
		&AStatSet_Default::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStatSet_Default_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AStatSet_Default_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AStatSet_Default_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStatSet_Default_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStatSet_Default()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStatSet_Default_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStatSet_Default, 2790829057);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<AStatSet_Default>()
	{
		return AStatSet_Default::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStatSet_Default(Z_Construct_UClass_AStatSet_Default, &AStatSet_Default::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("AStatSet_Default"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStatSet_Default);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
