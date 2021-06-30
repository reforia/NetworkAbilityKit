// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/StatSet_Action.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatSet_Action() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AStatSet_Action_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AStatSet_Action();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AStatusSetBase();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
// End Cross Module References
	void AStatSet_Action::StaticRegisterNativesAStatSet_Action()
	{
	}
	UClass* Z_Construct_UClass_AStatSet_Action_NoRegister()
	{
		return AStatSet_Action::StaticClass();
	}
	struct Z_Construct_UClass_AStatSet_Action_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stun_MetaData[];
#endif
		static void NewProp_Stun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Stun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Equipped_MetaData[];
#endif
		static void NewProp_Equipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Equipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEquipping_MetaData[];
#endif
		static void NewProp_InEquipping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InEquipping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLockMode_MetaData[];
#endif
		static void NewProp_InLockMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InLockMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSprint_MetaData[];
#endif
		static void NewProp_InSprint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InSprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStopping_MetaData[];
#endif
		static void NewProp_InStopping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InStopping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDodging_MetaData[];
#endif
		static void NewProp_InDodging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InDodging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAttacking_MetaData[];
#endif
		static void NewProp_InAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InAttacking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStatSet_Action_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStatusSetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatSet_Action_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StatSet_Action.h" },
		{ "ModuleRelativePath", "Public/StatSet_Action.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatSet_Action_Statics::NewProp_Stun_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Public/StatSet_Action.h" },
	};
#endif
	void Z_Construct_UClass_AStatSet_Action_Statics::NewProp_Stun_SetBit(void* Obj)
	{
		((AStatSet_Action*)Obj)->Stun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatSet_Action_Statics::NewProp_Stun = { "Stun", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStatSet_Action), &Z_Construct_UClass_AStatSet_Action_Statics::NewProp_Stun_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStatSet_Action_Statics::NewProp_Stun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStatSet_Action_Statics::NewProp_Stun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatSet_Action_Statics::NewProp_Equipped_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Public/StatSet_Action.h" },
	};
#endif
	void Z_Construct_UClass_AStatSet_Action_Statics::NewProp_Equipped_SetBit(void* Obj)
	{
		((AStatSet_Action*)Obj)->Equipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatSet_Action_Statics::NewProp_Equipped = { "Equipped", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStatSet_Action), &Z_Construct_UClass_AStatSet_Action_Statics::NewProp_Equipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStatSet_Action_Statics::NewProp_Equipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStatSet_Action_Statics::NewProp_Equipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InEquipping_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Public/StatSet_Action.h" },
	};
#endif
	void Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InEquipping_SetBit(void* Obj)
	{
		((AStatSet_Action*)Obj)->InEquipping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InEquipping = { "InEquipping", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStatSet_Action), &Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InEquipping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InEquipping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InEquipping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InLockMode_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Public/StatSet_Action.h" },
	};
#endif
	void Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InLockMode_SetBit(void* Obj)
	{
		((AStatSet_Action*)Obj)->InLockMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InLockMode = { "InLockMode", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStatSet_Action), &Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InLockMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InLockMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InLockMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InSprint_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Public/StatSet_Action.h" },
	};
#endif
	void Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InSprint_SetBit(void* Obj)
	{
		((AStatSet_Action*)Obj)->InSprint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InSprint = { "InSprint", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStatSet_Action), &Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InSprint_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InSprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InSprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InStopping_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Public/StatSet_Action.h" },
	};
#endif
	void Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InStopping_SetBit(void* Obj)
	{
		((AStatSet_Action*)Obj)->InStopping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InStopping = { "InStopping", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStatSet_Action), &Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InStopping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InStopping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InStopping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InDodging_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Public/StatSet_Action.h" },
	};
#endif
	void Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InDodging_SetBit(void* Obj)
	{
		((AStatSet_Action*)Obj)->InDodging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InDodging = { "InDodging", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStatSet_Action), &Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InDodging_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InDodging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InDodging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InAttacking_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Public/StatSet_Action.h" },
	};
#endif
	void Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InAttacking_SetBit(void* Obj)
	{
		((AStatSet_Action*)Obj)->InAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InAttacking = { "InAttacking", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStatSet_Action), &Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InAttacking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStatSet_Action_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatSet_Action_Statics::NewProp_Stun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatSet_Action_Statics::NewProp_Equipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InEquipping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InLockMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InSprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InStopping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InDodging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatSet_Action_Statics::NewProp_InAttacking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStatSet_Action_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStatSet_Action>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStatSet_Action_Statics::ClassParams = {
		&AStatSet_Action::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStatSet_Action_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStatSet_Action_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStatSet_Action_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStatSet_Action_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStatSet_Action()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStatSet_Action_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStatSet_Action, 3401108321);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<AStatSet_Action>()
	{
		return AStatSet_Action::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStatSet_Action(Z_Construct_UClass_AStatSet_Action, &AStatSet_Action::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("AStatSet_Action"), false, nullptr, nullptr, nullptr);

	void AStatSet_Action::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Stun(TEXT("Stun"));
		static const FName Name_Equipped(TEXT("Equipped"));
		static const FName Name_InEquipping(TEXT("InEquipping"));
		static const FName Name_InLockMode(TEXT("InLockMode"));
		static const FName Name_InSprint(TEXT("InSprint"));
		static const FName Name_InStopping(TEXT("InStopping"));
		static const FName Name_InDodging(TEXT("InDodging"));
		static const FName Name_InAttacking(TEXT("InAttacking"));

		const bool bIsValid = true
			&& Name_Stun == ClassReps[(int32)ENetFields_Private::Stun].Property->GetFName()
			&& Name_Equipped == ClassReps[(int32)ENetFields_Private::Equipped].Property->GetFName()
			&& Name_InEquipping == ClassReps[(int32)ENetFields_Private::InEquipping].Property->GetFName()
			&& Name_InLockMode == ClassReps[(int32)ENetFields_Private::InLockMode].Property->GetFName()
			&& Name_InSprint == ClassReps[(int32)ENetFields_Private::InSprint].Property->GetFName()
			&& Name_InStopping == ClassReps[(int32)ENetFields_Private::InStopping].Property->GetFName()
			&& Name_InDodging == ClassReps[(int32)ENetFields_Private::InDodging].Property->GetFName()
			&& Name_InAttacking == ClassReps[(int32)ENetFields_Private::InAttacking].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AStatSet_Action"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStatSet_Action);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
