// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/AbilityFrameworkStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityFrameworkStruct() {}
// Cross Module References
	NETWORKABILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityListStruct();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AAbilityBase_NoRegister();
	NETWORKABILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FCostStruct();
	NETWORKABILITYKIT_API UEnum* Z_Construct_UEnum_NetworkAbilityKit_EAttrModifyMethod();
// End Cross Module References
class UScriptStruct* FAbilityListStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NETWORKABILITYKIT_API uint32 Get_Z_Construct_UScriptStruct_FAbilityListStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityListStruct, Z_Construct_UPackage__Script_NetworkAbilityKit(), TEXT("AbilityListStruct"), sizeof(FAbilityListStruct), Get_Z_Construct_UScriptStruct_FAbilityListStruct_Hash());
	}
	return Singleton;
}
template<> NETWORKABILITYKIT_API UScriptStruct* StaticStruct<FAbilityListStruct>()
{
	return FAbilityListStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAbilityListStruct(FAbilityListStruct::StaticStruct, TEXT("/Script/NetworkAbilityKit"), TEXT("AbilityListStruct"), false, nullptr, nullptr);
static struct FScriptStruct_NetworkAbilityKit_StaticRegisterNativesFAbilityListStruct
{
	FScriptStruct_NetworkAbilityKit_StaticRegisterNativesFAbilityListStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AbilityListStruct")),new UScriptStruct::TCppStructOps<FAbilityListStruct>);
	}
} ScriptStruct_NetworkAbilityKit_StaticRegisterNativesFAbilityListStruct;
	struct Z_Construct_UScriptStruct_FAbilityListStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dev_AbilityName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Dev_AbilityName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityListStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilityFrameworkStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbilityListStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityListStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityListStruct_Statics::NewProp_Ability_MetaData[] = {
		{ "Category", "AbilityListStruct" },
		{ "ModuleRelativePath", "Public/AbilityFrameworkStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAbilityListStruct_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityListStruct, Ability), Z_Construct_UClass_AAbilityBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityListStruct_Statics::NewProp_Ability_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityListStruct_Statics::NewProp_Ability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityListStruct_Statics::NewProp_Dev_AbilityName_MetaData[] = {
		{ "Category", "AbilityListStruct" },
		{ "ModuleRelativePath", "Public/AbilityFrameworkStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAbilityListStruct_Statics::NewProp_Dev_AbilityName = { "Dev_AbilityName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityListStruct, Dev_AbilityName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityListStruct_Statics::NewProp_Dev_AbilityName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityListStruct_Statics::NewProp_Dev_AbilityName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityListStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityListStruct_Statics::NewProp_Ability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityListStruct_Statics::NewProp_Dev_AbilityName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityListStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AbilityListStruct",
		sizeof(FAbilityListStruct),
		alignof(FAbilityListStruct),
		Z_Construct_UScriptStruct_FAbilityListStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityListStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityListStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityListStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbilityListStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAbilityListStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NetworkAbilityKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AbilityListStruct"), sizeof(FAbilityListStruct), Get_Z_Construct_UScriptStruct_FAbilityListStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAbilityListStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAbilityListStruct_Hash() { return 4153541662U; }
class UScriptStruct* FCostStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NETWORKABILITYKIT_API uint32 Get_Z_Construct_UScriptStruct_FCostStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCostStruct, Z_Construct_UPackage__Script_NetworkAbilityKit(), TEXT("CostStruct"), sizeof(FCostStruct), Get_Z_Construct_UScriptStruct_FCostStruct_Hash());
	}
	return Singleton;
}
template<> NETWORKABILITYKIT_API UScriptStruct* StaticStruct<FCostStruct>()
{
	return FCostStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCostStruct(FCostStruct::StaticStruct, TEXT("/Script/NetworkAbilityKit"), TEXT("CostStruct"), false, nullptr, nullptr);
static struct FScriptStruct_NetworkAbilityKit_StaticRegisterNativesFCostStruct
{
	FScriptStruct_NetworkAbilityKit_StaticRegisterNativesFCostStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CostStruct")),new UScriptStruct::TCppStructOps<FCostStruct>);
	}
} ScriptStruct_NetworkAbilityKit_StaticRegisterNativesFCostStruct;
	struct Z_Construct_UScriptStruct_FCostStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifyMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModifyMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModifyMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCostStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilityFrameworkStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCostStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCostStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCostStruct_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "CostStruct" },
		{ "ModuleRelativePath", "Public/AbilityFrameworkStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCostStruct_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCostStruct, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FCostStruct_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCostStruct_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCostStruct_Statics::NewProp_ModifyMethod_MetaData[] = {
		{ "Category", "CostStruct" },
		{ "ModuleRelativePath", "Public/AbilityFrameworkStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCostStruct_Statics::NewProp_ModifyMethod = { "ModifyMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCostStruct, ModifyMethod), Z_Construct_UEnum_NetworkAbilityKit_EAttrModifyMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FCostStruct_Statics::NewProp_ModifyMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCostStruct_Statics::NewProp_ModifyMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCostStruct_Statics::NewProp_ModifyMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCostStruct_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "CostStruct" },
		{ "ModuleRelativePath", "Public/AbilityFrameworkStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCostStruct_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCostStruct, AttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCostStruct_Statics::NewProp_AttributeName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCostStruct_Statics::NewProp_AttributeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCostStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCostStruct_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCostStruct_Statics::NewProp_ModifyMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCostStruct_Statics::NewProp_ModifyMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCostStruct_Statics::NewProp_AttributeName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCostStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
		nullptr,
		&NewStructOps,
		"CostStruct",
		sizeof(FCostStruct),
		alignof(FCostStruct),
		Z_Construct_UScriptStruct_FCostStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCostStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCostStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCostStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCostStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCostStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NetworkAbilityKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CostStruct"), sizeof(FCostStruct), Get_Z_Construct_UScriptStruct_FCostStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCostStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCostStruct_Hash() { return 1045434308U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
