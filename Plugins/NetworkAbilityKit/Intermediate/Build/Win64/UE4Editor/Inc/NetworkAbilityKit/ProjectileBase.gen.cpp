// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/ProjectileBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileBase() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AProjectileBase_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AProjectileBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	void AProjectileBase::StaticRegisterNativesAProjectileBase()
	{
	}
	UClass* Z_Construct_UClass_AProjectileBase_NoRegister()
	{
		return AProjectileBase::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileBase_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnReachMaxRange_MetaData[];
#endif
		static void NewProp_bDestroyOnReachMaxRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnReachMaxRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectileBase.h" },
		{ "ModuleRelativePath", "Public/ProjectileBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileBase_Statics::NewProp_BelongingControllerActor_MetaData[] = {
		{ "Category", "Parent" },
		{ "ModuleRelativePath", "Public/ProjectileBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileBase_Statics::NewProp_BelongingControllerActor = { "BelongingControllerActor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileBase, BelongingControllerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectileBase_Statics::NewProp_BelongingControllerActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectileBase_Statics::NewProp_BelongingControllerActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileBase_Statics::NewProp_bDestroyOnReachMaxRange_MetaData[] = {
		{ "Category", "Range" },
		{ "ModuleRelativePath", "Public/ProjectileBase.h" },
	};
#endif
	void Z_Construct_UClass_AProjectileBase_Statics::NewProp_bDestroyOnReachMaxRange_SetBit(void* Obj)
	{
		((AProjectileBase*)Obj)->bDestroyOnReachMaxRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectileBase_Statics::NewProp_bDestroyOnReachMaxRange = { "bDestroyOnReachMaxRange", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProjectileBase), &Z_Construct_UClass_AProjectileBase_Statics::NewProp_bDestroyOnReachMaxRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectileBase_Statics::NewProp_bDestroyOnReachMaxRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectileBase_Statics::NewProp_bDestroyOnReachMaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileBase_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "Range" },
		{ "ModuleRelativePath", "Public/ProjectileBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileBase_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileBase, MaxRange), METADATA_PARAMS(Z_Construct_UClass_AProjectileBase_Statics::NewProp_MaxRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectileBase_Statics::NewProp_MaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileBase_Statics::NewProp_LifeSpan_MetaData[] = {
		{ "Category", "LifeCycle" },
		{ "ModuleRelativePath", "Public/ProjectileBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileBase_Statics::NewProp_LifeSpan = { "LifeSpan", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileBase, LifeSpan), METADATA_PARAMS(Z_Construct_UClass_AProjectileBase_Statics::NewProp_LifeSpan_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectileBase_Statics::NewProp_LifeSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileBase_Statics::NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectileBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileBase_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileBase, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectileBase_Statics::NewProp_StaticMeshComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectileBase_Statics::NewProp_StaticMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileBase_Statics::NewProp_SphereCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectileBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileBase_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileBase, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectileBase_Statics::NewProp_SphereCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectileBase_Statics::NewProp_SphereCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileBase_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectileBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileBase_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileBase, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectileBase_Statics::NewProp_ProjectileMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectileBase_Statics::NewProp_ProjectileMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileBase_Statics::NewProp_BelongingControllerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileBase_Statics::NewProp_bDestroyOnReachMaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileBase_Statics::NewProp_MaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileBase_Statics::NewProp_LifeSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileBase_Statics::NewProp_StaticMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileBase_Statics::NewProp_SphereCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileBase_Statics::NewProp_ProjectileMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectileBase_Statics::ClassParams = {
		&AProjectileBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProjectileBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AProjectileBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectileBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProjectileBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectileBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectileBase, 3568017202);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<AProjectileBase>()
	{
		return AProjectileBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectileBase(Z_Construct_UClass_AProjectileBase, &AProjectileBase::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("AProjectileBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
