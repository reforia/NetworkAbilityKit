// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/HUD_MainInGameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUD_MainInGameHUD() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AHUD_MainInGameHUD_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AHUD_MainInGameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
// End Cross Module References
	void AHUD_MainInGameHUD::StaticRegisterNativesAHUD_MainInGameHUD()
	{
	}
	UClass* Z_Construct_UClass_AHUD_MainInGameHUD_NoRegister()
	{
		return AHUD_MainInGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_AHUD_MainInGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHUD_MainInGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_MainInGameHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD_MainInGameHUD.h" },
		{ "ModuleRelativePath", "Public/HUD_MainInGameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHUD_MainInGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHUD_MainInGameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHUD_MainInGameHUD_Statics::ClassParams = {
		&AHUD_MainInGameHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHUD_MainInGameHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHUD_MainInGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHUD_MainInGameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHUD_MainInGameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHUD_MainInGameHUD, 792728494);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<AHUD_MainInGameHUD>()
	{
		return AHUD_MainInGameHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHUD_MainInGameHUD(Z_Construct_UClass_AHUD_MainInGameHUD, &AHUD_MainInGameHUD::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("AHUD_MainInGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHUD_MainInGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
