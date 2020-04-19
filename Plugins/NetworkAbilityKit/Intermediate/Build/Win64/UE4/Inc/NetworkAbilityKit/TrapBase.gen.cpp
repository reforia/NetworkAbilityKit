// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/TrapBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrapBase() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_ATrapBase_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_ATrapBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ATrapBase::StaticRegisterNativesATrapBase()
	{
	}
	UClass* Z_Construct_UClass_ATrapBase_NoRegister()
	{
		return ATrapBase::StaticClass();
	}
	struct Z_Construct_UClass_ATrapBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BelongingControllerActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BelongingControllerActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrapBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrapBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TrapBase.h" },
		{ "ModuleRelativePath", "Public/TrapBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrapBase_Statics::NewProp_BelongingControllerActor_MetaData[] = {
		{ "Category", "Parent" },
		{ "ModuleRelativePath", "Public/TrapBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrapBase_Statics::NewProp_BelongingControllerActor = { "BelongingControllerActor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrapBase, BelongingControllerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATrapBase_Statics::NewProp_BelongingControllerActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATrapBase_Statics::NewProp_BelongingControllerActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrapBase_Statics::NewProp_LifeSpan_MetaData[] = {
		{ "Category", "LifeCycle" },
		{ "ModuleRelativePath", "Public/TrapBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrapBase_Statics::NewProp_LifeSpan = { "LifeSpan", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrapBase, LifeSpan), METADATA_PARAMS(Z_Construct_UClass_ATrapBase_Statics::NewProp_LifeSpan_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATrapBase_Statics::NewProp_LifeSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrapBase_Statics::NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TrapBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrapBase_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrapBase, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATrapBase_Statics::NewProp_StaticMeshComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATrapBase_Statics::NewProp_StaticMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrapBase_Statics::NewProp_SphereCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TrapBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrapBase_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrapBase, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATrapBase_Statics::NewProp_SphereCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATrapBase_Statics::NewProp_SphereCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrapBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrapBase_Statics::NewProp_BelongingControllerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrapBase_Statics::NewProp_LifeSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrapBase_Statics::NewProp_StaticMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrapBase_Statics::NewProp_SphereCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrapBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrapBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATrapBase_Statics::ClassParams = {
		&ATrapBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATrapBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ATrapBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATrapBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATrapBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATrapBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATrapBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATrapBase, 971976519);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<ATrapBase>()
	{
		return ATrapBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATrapBase(Z_Construct_UClass_ATrapBase, &ATrapBase::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("ATrapBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrapBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
