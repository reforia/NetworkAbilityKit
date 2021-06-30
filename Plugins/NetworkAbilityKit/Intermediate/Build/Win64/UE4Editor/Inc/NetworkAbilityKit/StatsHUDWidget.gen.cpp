// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/StatsHUDWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsHUDWidget() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UStatsHUDWidget_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UStatsHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UAttributeComp_NoRegister();
// End Cross Module References
	void UStatsHUDWidget::StaticRegisterNativesUStatsHUDWidget()
	{
	}
	UClass* Z_Construct_UClass_UStatsHUDWidget_NoRegister()
	{
		return UStatsHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UStatsHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttriComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttriComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatsHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StatsHUDWidget.h" },
		{ "ModuleRelativePath", "Public/StatsHUDWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsHUDWidget_Statics::NewProp_PlayerRef_MetaData[] = {
		{ "Category", "OwningPlayer" },
		{ "ModuleRelativePath", "Public/StatsHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsHUDWidget_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatsHUDWidget, PlayerRef), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatsHUDWidget_Statics::NewProp_PlayerRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsHUDWidget_Statics::NewProp_PlayerRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsHUDWidget_Statics::NewProp_AttriComp_MetaData[] = {
		{ "Category", "OwningPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StatsHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsHUDWidget_Statics::NewProp_AttriComp = { "AttriComp", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatsHUDWidget, AttriComp), Z_Construct_UClass_UAttributeComp_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatsHUDWidget_Statics::NewProp_AttriComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsHUDWidget_Statics::NewProp_AttriComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatsHUDWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsHUDWidget_Statics::NewProp_PlayerRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsHUDWidget_Statics::NewProp_AttriComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatsHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsHUDWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStatsHUDWidget_Statics::ClassParams = {
		&UStatsHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStatsHUDWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStatsHUDWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStatsHUDWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsHUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatsHUDWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStatsHUDWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStatsHUDWidget, 237551768);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<UStatsHUDWidget>()
	{
		return UStatsHUDWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStatsHUDWidget(Z_Construct_UClass_UStatsHUDWidget, &UStatsHUDWidget::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("UStatsHUDWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsHUDWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
