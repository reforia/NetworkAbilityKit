// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/PS_Arena.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePS_Arena() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_APS_Arena_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_APS_Arena();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
// End Cross Module References
	void APS_Arena::StaticRegisterNativesAPS_Arena()
	{
	}
	UClass* Z_Construct_UClass_APS_Arena_NoRegister()
	{
		return APS_Arena::StaticClass();
	}
	struct Z_Construct_UClass_APS_Arena_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APS_Arena_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APS_Arena_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PS_Arena.h" },
		{ "ModuleRelativePath", "Public/PS_Arena.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APS_Arena_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APS_Arena>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APS_Arena_Statics::ClassParams = {
		&APS_Arena::StaticClass,
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
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_APS_Arena_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APS_Arena_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APS_Arena()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APS_Arena_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APS_Arena, 2893015382);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<APS_Arena>()
	{
		return APS_Arena::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APS_Arena(Z_Construct_UClass_APS_Arena, &APS_Arena::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("APS_Arena"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APS_Arena);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
