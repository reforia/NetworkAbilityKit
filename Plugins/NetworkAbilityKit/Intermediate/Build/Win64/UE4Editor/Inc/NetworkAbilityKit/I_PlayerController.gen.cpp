// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/I_PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeI_PlayerController() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UI_PlayerController_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UI_PlayerController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
// End Cross Module References
	void UI_PlayerController::StaticRegisterNativesUI_PlayerController()
	{
	}
	UClass* Z_Construct_UClass_UI_PlayerController_NoRegister()
	{
		return UI_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_UI_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UI_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UI_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/I_PlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UI_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<II_PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UI_PlayerController_Statics::ClassParams = {
		&UI_PlayerController::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UI_PlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UI_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UI_PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UI_PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UI_PlayerController, 2646741554);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<UI_PlayerController>()
	{
		return UI_PlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UI_PlayerController(Z_Construct_UClass_UI_PlayerController, &UI_PlayerController::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("UI_PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UI_PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
