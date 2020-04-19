// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/BPF_Modifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPF_Modifier() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UBPF_Modifier_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UBPF_Modifier();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AModifierBase_NoRegister();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget();
	NETWORKABILITYKIT_API UEnum* Z_Construct_UEnum_NetworkAbilityKit_EModifierType();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierFromTarget();
// End Cross Module References
	void UBPF_Modifier::StaticRegisterNativesUBPF_Modifier()
	{
		UClass* Class = UBPF_Modifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TryApplyModifierToTarget", &UBPF_Modifier::execTryApplyModifierToTarget },
			{ "TryRemoveModifierByTypeFromTarget", &UBPF_Modifier::execTryRemoveModifierByTypeFromTarget },
			{ "TryRemoveModifierFromTarget", &UBPF_Modifier::execTryRemoveModifierFromTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget_Statics
	{
		struct BPF_Modifier_eventTryApplyModifierToTarget_Parms
		{
			TSubclassOf<AModifierBase>  ModifierClass;
			AActor* Target;
			AActor* ModifierInstigator;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModifierInstigator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ModifierClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BPF_Modifier_eventTryApplyModifierToTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BPF_Modifier_eventTryApplyModifierToTarget_Parms), &Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget_Statics::NewProp_ModifierInstigator = { "ModifierInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPF_Modifier_eventTryApplyModifierToTarget_Parms, ModifierInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPF_Modifier_eventTryApplyModifierToTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget_Statics::NewProp_ModifierClass = { "ModifierClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPF_Modifier_eventTryApplyModifierToTarget_Parms, ModifierClass), Z_Construct_UClass_AModifierBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget_Statics::NewProp_ModifierInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget_Statics::NewProp_ModifierClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/BPF_Modifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPF_Modifier, nullptr, "TryApplyModifierToTarget", nullptr, nullptr, sizeof(BPF_Modifier_eventTryApplyModifierToTarget_Parms), Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget_Statics
	{
		struct BPF_Modifier_eventTryRemoveModifierByTypeFromTarget_Parms
		{
			EModifierType ModifierType;
			AActor* Target;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModifierType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModifierType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BPF_Modifier_eventTryRemoveModifierByTypeFromTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BPF_Modifier_eventTryRemoveModifierByTypeFromTarget_Parms), &Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPF_Modifier_eventTryRemoveModifierByTypeFromTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget_Statics::NewProp_ModifierType = { "ModifierType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPF_Modifier_eventTryRemoveModifierByTypeFromTarget_Parms, ModifierType), Z_Construct_UEnum_NetworkAbilityKit_EModifierType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget_Statics::NewProp_ModifierType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget_Statics::NewProp_ModifierType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget_Statics::NewProp_ModifierType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/BPF_Modifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPF_Modifier, nullptr, "TryRemoveModifierByTypeFromTarget", nullptr, nullptr, sizeof(BPF_Modifier_eventTryRemoveModifierByTypeFromTarget_Parms), Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierFromTarget_Statics
	{
		struct BPF_Modifier_eventTryRemoveModifierFromTarget_Parms
		{
			FName ModifierName;
			AActor* Target;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ModifierName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierFromTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BPF_Modifier_eventTryRemoveModifierFromTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierFromTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BPF_Modifier_eventTryRemoveModifierFromTarget_Parms), &Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierFromTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierFromTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPF_Modifier_eventTryRemoveModifierFromTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierFromTarget_Statics::NewProp_ModifierName = { "ModifierName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPF_Modifier_eventTryRemoveModifierFromTarget_Parms, ModifierName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierFromTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierFromTarget_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierFromTarget_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierFromTarget_Statics::NewProp_ModifierName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierFromTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/BPF_Modifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierFromTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPF_Modifier, nullptr, "TryRemoveModifierFromTarget", nullptr, nullptr, sizeof(BPF_Modifier_eventTryRemoveModifierFromTarget_Parms), Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierFromTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierFromTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierFromTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierFromTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierFromTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierFromTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPF_Modifier_NoRegister()
	{
		return UBPF_Modifier::StaticClass();
	}
	struct Z_Construct_UClass_UBPF_Modifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPF_Modifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPF_Modifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPF_Modifier_TryApplyModifierToTarget, "TryApplyModifierToTarget" }, // 1011489860
		{ &Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierByTypeFromTarget, "TryRemoveModifierByTypeFromTarget" }, // 2220500336
		{ &Z_Construct_UFunction_UBPF_Modifier_TryRemoveModifierFromTarget, "TryRemoveModifierFromTarget" }, // 911747307
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPF_Modifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BPF_Modifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BPF_Modifier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPF_Modifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPF_Modifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPF_Modifier_Statics::ClassParams = {
		&UBPF_Modifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBPF_Modifier_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBPF_Modifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPF_Modifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPF_Modifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBPF_Modifier, 1216357900);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<UBPF_Modifier>()
	{
		return UBPF_Modifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPF_Modifier(Z_Construct_UClass_UBPF_Modifier, &UBPF_Modifier::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("UBPF_Modifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPF_Modifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
