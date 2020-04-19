// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/I_Modifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeI_Modifier() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UI_Modifier_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UI_Modifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UI_Modifier_OnReceivedModifier();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AModifierBase_NoRegister();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifier();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifierByType();
	NETWORKABILITYKIT_API UEnum* Z_Construct_UEnum_NetworkAbilityKit_EModifierType();
// End Cross Module References
	void II_Modifier::OnReceivedModifier(AModifierBase* Modifier, AActor* ModifierInstigator)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnReceivedModifier instead.");
	}
	void II_Modifier::OnTryRemoveModifier(FName ModifierName)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnTryRemoveModifier instead.");
	}
	void II_Modifier::OnTryRemoveModifierByType(EModifierType ModifierType)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnTryRemoveModifierByType instead.");
	}
	void UI_Modifier::StaticRegisterNativesUI_Modifier()
	{
		UClass* Class = UI_Modifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnReceivedModifier", &II_Modifier::execOnReceivedModifier },
			{ "OnTryRemoveModifier", &II_Modifier::execOnTryRemoveModifier },
			{ "OnTryRemoveModifierByType", &II_Modifier::execOnTryRemoveModifierByType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UI_Modifier_OnReceivedModifier_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModifierInstigator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UI_Modifier_OnReceivedModifier_Statics::NewProp_ModifierInstigator = { "ModifierInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(I_Modifier_eventOnReceivedModifier_Parms, ModifierInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UI_Modifier_OnReceivedModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(I_Modifier_eventOnReceivedModifier_Parms, Modifier), Z_Construct_UClass_AModifierBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UI_Modifier_OnReceivedModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UI_Modifier_OnReceivedModifier_Statics::NewProp_ModifierInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UI_Modifier_OnReceivedModifier_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UI_Modifier_OnReceivedModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier Interface" },
		{ "ModuleRelativePath", "Public/I_Modifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UI_Modifier_OnReceivedModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UI_Modifier, nullptr, "OnReceivedModifier", nullptr, nullptr, sizeof(I_Modifier_eventOnReceivedModifier_Parms), Z_Construct_UFunction_UI_Modifier_OnReceivedModifier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UI_Modifier_OnReceivedModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UI_Modifier_OnReceivedModifier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UI_Modifier_OnReceivedModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UI_Modifier_OnReceivedModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UI_Modifier_OnReceivedModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifier_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ModifierName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifier_Statics::NewProp_ModifierName = { "ModifierName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(I_Modifier_eventOnTryRemoveModifier_Parms, ModifierName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifier_Statics::NewProp_ModifierName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier Interface" },
		{ "ModuleRelativePath", "Public/I_Modifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UI_Modifier, nullptr, "OnTryRemoveModifier", nullptr, nullptr, sizeof(I_Modifier_eventOnTryRemoveModifier_Parms), Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifierByType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModifierType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModifierType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifierByType_Statics::NewProp_ModifierType = { "ModifierType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(I_Modifier_eventOnTryRemoveModifierByType_Parms, ModifierType), Z_Construct_UEnum_NetworkAbilityKit_EModifierType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifierByType_Statics::NewProp_ModifierType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifierByType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifierByType_Statics::NewProp_ModifierType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifierByType_Statics::NewProp_ModifierType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifierByType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier Interface" },
		{ "ModuleRelativePath", "Public/I_Modifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifierByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UI_Modifier, nullptr, "OnTryRemoveModifierByType", nullptr, nullptr, sizeof(I_Modifier_eventOnTryRemoveModifierByType_Parms), Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifierByType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifierByType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifierByType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifierByType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifierByType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifierByType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UI_Modifier_NoRegister()
	{
		return UI_Modifier::StaticClass();
	}
	struct Z_Construct_UClass_UI_Modifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UI_Modifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UI_Modifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UI_Modifier_OnReceivedModifier, "OnReceivedModifier" }, // 4259679880
		{ &Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifier, "OnTryRemoveModifier" }, // 652454432
		{ &Z_Construct_UFunction_UI_Modifier_OnTryRemoveModifierByType, "OnTryRemoveModifierByType" }, // 878875735
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UI_Modifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/I_Modifier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UI_Modifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<II_Modifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UI_Modifier_Statics::ClassParams = {
		&UI_Modifier::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UI_Modifier_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UI_Modifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UI_Modifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UI_Modifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UI_Modifier, 1641811739);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<UI_Modifier>()
	{
		return UI_Modifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UI_Modifier(Z_Construct_UClass_UI_Modifier, &UI_Modifier::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("UI_Modifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UI_Modifier);
	static FName NAME_UI_Modifier_OnReceivedModifier = FName(TEXT("OnReceivedModifier"));
	void II_Modifier::Execute_OnReceivedModifier(UObject* O, AModifierBase* Modifier, AActor* ModifierInstigator)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UI_Modifier::StaticClass()));
		I_Modifier_eventOnReceivedModifier_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UI_Modifier_OnReceivedModifier);
		if (Func)
		{
			Parms.Modifier=Modifier;
			Parms.ModifierInstigator=ModifierInstigator;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (II_Modifier*)(O->GetNativeInterfaceAddress(UI_Modifier::StaticClass())))
		{
			I->OnReceivedModifier_Implementation(Modifier,ModifierInstigator);
		}
	}
	static FName NAME_UI_Modifier_OnTryRemoveModifier = FName(TEXT("OnTryRemoveModifier"));
	void II_Modifier::Execute_OnTryRemoveModifier(UObject* O, FName ModifierName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UI_Modifier::StaticClass()));
		I_Modifier_eventOnTryRemoveModifier_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UI_Modifier_OnTryRemoveModifier);
		if (Func)
		{
			Parms.ModifierName=ModifierName;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (II_Modifier*)(O->GetNativeInterfaceAddress(UI_Modifier::StaticClass())))
		{
			I->OnTryRemoveModifier_Implementation(ModifierName);
		}
	}
	static FName NAME_UI_Modifier_OnTryRemoveModifierByType = FName(TEXT("OnTryRemoveModifierByType"));
	void II_Modifier::Execute_OnTryRemoveModifierByType(UObject* O, EModifierType ModifierType)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UI_Modifier::StaticClass()));
		I_Modifier_eventOnTryRemoveModifierByType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UI_Modifier_OnTryRemoveModifierByType);
		if (Func)
		{
			Parms.ModifierType=ModifierType;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (II_Modifier*)(O->GetNativeInterfaceAddress(UI_Modifier::StaticClass())))
		{
			I->OnTryRemoveModifierByType_Implementation(ModifierType);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
