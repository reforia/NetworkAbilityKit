// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/PlayerHeroBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHeroBase() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_APlayerHeroBase_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_APlayerHeroBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_APlayerHeroBase_InitializePlayer();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_APlayerHeroBase_UpdateCameraOffset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UAttributeComp_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UAbilitySetComp_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	void APlayerHeroBase::StaticRegisterNativesAPlayerHeroBase()
	{
		UClass* Class = APlayerHeroBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializePlayer", &APlayerHeroBase::execInitializePlayer },
			{ "UpdateCameraOffset", &APlayerHeroBase::execUpdateCameraOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerHeroBase_InitializePlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerHeroBase_InitializePlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/PlayerHeroBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerHeroBase_InitializePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerHeroBase, nullptr, "InitializePlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerHeroBase_InitializePlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerHeroBase_InitializePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerHeroBase_InitializePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerHeroBase_InitializePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerHeroBase_UpdateCameraOffset_Statics
	{
		struct PlayerHeroBase_eventUpdateCameraOffset_Parms
		{
			FVector CursorDirectionNormalized;
			float DistanceProportion;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceProportion;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CursorDirectionNormalized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerHeroBase_UpdateCameraOffset_Statics::NewProp_DistanceProportion = { "DistanceProportion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHeroBase_eventUpdateCameraOffset_Parms, DistanceProportion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerHeroBase_UpdateCameraOffset_Statics::NewProp_CursorDirectionNormalized = { "CursorDirectionNormalized", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHeroBase_eventUpdateCameraOffset_Parms, CursorDirectionNormalized), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerHeroBase_UpdateCameraOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerHeroBase_UpdateCameraOffset_Statics::NewProp_DistanceProportion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerHeroBase_UpdateCameraOffset_Statics::NewProp_CursorDirectionNormalized,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerHeroBase_UpdateCameraOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/PlayerHeroBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerHeroBase_UpdateCameraOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerHeroBase, nullptr, "UpdateCameraOffset", nullptr, nullptr, sizeof(PlayerHeroBase_eventUpdateCameraOffset_Parms), Z_Construct_UFunction_APlayerHeroBase_UpdateCameraOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerHeroBase_UpdateCameraOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerHeroBase_UpdateCameraOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerHeroBase_UpdateCameraOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerHeroBase_UpdateCameraOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerHeroBase_UpdateCameraOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerHeroBase_NoRegister()
	{
		return APlayerHeroBase::StaticClass();
	}
	struct Z_Construct_UClass_APlayerHeroBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeroName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatsHUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StatsHUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCameraOffsetRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCameraOffsetRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatsHUD_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatsHUD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CamComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BelongingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BelongingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerHeroBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerHeroBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerHeroBase_InitializePlayer, "InitializePlayer" }, // 3062689159
		{ &Z_Construct_UFunction_APlayerHeroBase_UpdateCameraOffset, "UpdateCameraOffset" }, // 2258075217
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHeroBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerHeroBase.h" },
		{ "ModuleRelativePath", "Public/PlayerHeroBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_AttributeComp_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerHeroBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_AttributeComp = { "AttributeComp", nullptr, (EPropertyFlags)0x001000000008003c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHeroBase, AttributeComp), Z_Construct_UClass_UAttributeComp_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_AttributeComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_AttributeComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_AbilityComp_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerHeroBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_AbilityComp = { "AbilityComp", nullptr, (EPropertyFlags)0x001000000008003c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHeroBase, AbilityComp), Z_Construct_UClass_UAbilitySetComp_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_AbilityComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_AbilityComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_HeroName_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/PlayerHeroBase.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_HeroName = { "HeroName", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHeroBase, HeroName), METADATA_PARAMS(Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_HeroName_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_HeroName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_StatsHUDWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/PlayerHeroBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_StatsHUDWidget = { "StatsHUDWidget", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHeroBase, StatsHUDWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_StatsHUDWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_StatsHUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_MaxCameraOffsetRange_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/PlayerHeroBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_MaxCameraOffsetRange = { "MaxCameraOffsetRange", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHeroBase, MaxCameraOffsetRange), METADATA_PARAMS(Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_MaxCameraOffsetRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_MaxCameraOffsetRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_StatsHUD_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerHeroBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_StatsHUD = { "StatsHUD", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHeroBase, StatsHUD), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_StatsHUD_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_StatsHUD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_CamComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerHeroBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_CamComp = { "CamComp", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHeroBase, CamComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_CamComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_CamComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerHeroBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHeroBase, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_SpringArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_BelongingController_MetaData[] = {
		{ "Category", "Parent" },
		{ "ModuleRelativePath", "Public/PlayerHeroBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_BelongingController = { "BelongingController", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHeroBase, BelongingController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_BelongingController_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_BelongingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerHeroBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_AttributeComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_AbilityComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_HeroName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_StatsHUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_MaxCameraOffsetRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_StatsHUD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_CamComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHeroBase_Statics::NewProp_BelongingController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerHeroBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerHeroBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerHeroBase_Statics::ClassParams = {
		&APlayerHeroBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerHeroBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APlayerHeroBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerHeroBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerHeroBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerHeroBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerHeroBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerHeroBase, 4137182254);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<APlayerHeroBase>()
	{
		return APlayerHeroBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerHeroBase(Z_Construct_UClass_APlayerHeroBase, &APlayerHeroBase::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("APlayerHeroBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerHeroBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
