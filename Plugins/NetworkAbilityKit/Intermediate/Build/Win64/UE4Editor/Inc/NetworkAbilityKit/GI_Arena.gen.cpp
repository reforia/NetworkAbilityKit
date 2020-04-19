// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/GI_Arena.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGI_Arena() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UGI_Arena_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UGI_Arena();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
// End Cross Module References
	void UGI_Arena::StaticRegisterNativesUGI_Arena()
	{
	}
	UClass* Z_Construct_UClass_UGI_Arena_NoRegister()
	{
		return UGI_Arena::StaticClass();
	}
	struct Z_Construct_UClass_UGI_Arena_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGI_Arena_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGI_Arena_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GI_Arena.h" },
		{ "ModuleRelativePath", "Public/GI_Arena.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGI_Arena_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGI_Arena>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGI_Arena_Statics::ClassParams = {
		&UGI_Arena::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGI_Arena_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGI_Arena_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGI_Arena()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGI_Arena_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGI_Arena, 1589593671);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<UGI_Arena>()
	{
		return UGI_Arena::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGI_Arena(Z_Construct_UClass_UGI_Arena, &UGI_Arena::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("UGI_Arena"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGI_Arena);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
