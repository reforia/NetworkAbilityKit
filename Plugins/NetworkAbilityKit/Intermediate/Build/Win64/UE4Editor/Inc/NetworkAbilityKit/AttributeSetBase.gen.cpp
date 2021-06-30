// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/AttributeSetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeSetBase() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AAttributeSetBase_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AAttributeSetBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFloatProperty();
	NETWORKABILITYKIT_API UEnum* Z_Construct_UEnum_NetworkAbilityKit_EAttrModifyMethod();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAttributeSetBase::execSetFloatAttributeValueByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PropName);
		P_GET_ENUM(EAttrModifyMethod,Z_Param_ModifyMethod);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ModifyValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SetFloatAttributeValueByName_Validate(Z_Param_PropName,EAttrModifyMethod(Z_Param_ModifyMethod),Z_Param_ModifyValue))
		{
			RPC_ValidateFailed(TEXT("SetFloatAttributeValueByName_Validate"));
			return;
		}
		P_THIS->SetFloatAttributeValueByName_Implementation(Z_Param_PropName,EAttrModifyMethod(Z_Param_ModifyMethod),Z_Param_ModifyValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAttributeSetBase::execSetFloatAttributeValue)
	{
		P_GET_OBJECT(UFloatProperty,Z_Param_FloatProp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SetFloatAttributeValue_Validate(Z_Param_FloatProp,Z_Param_NewValue))
		{
			RPC_ValidateFailed(TEXT("SetFloatAttributeValue_Validate"));
			return;
		}
		P_THIS->SetFloatAttributeValue_Implementation(Z_Param_FloatProp,Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAttributeSetBase::execGetTmpValueAfterModifiedFloatAttribute)
	{
		P_GET_OBJECT(UFloatProperty,Z_Param_FloatProp);
		P_GET_ENUM(EAttrModifyMethod,Z_Param_ModifyMethod);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ModifyValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTmpValueAfterModifiedFloatAttribute(Z_Param_FloatProp,EAttrModifyMethod(Z_Param_ModifyMethod),Z_Param_ModifyValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAttributeSetBase::execGetFloatAttribute)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFloatProperty**)Z_Param__Result=P_THIS->GetFloatAttribute(Z_Param_PropertyName);
		P_NATIVE_END;
	}
	static FName NAME_AAttributeSetBase_SetFloatAttributeValue = FName(TEXT("SetFloatAttributeValue"));
	void AAttributeSetBase::SetFloatAttributeValue(UFloatProperty* FloatProp, float NewValue)
	{
		AttributeSetBase_eventSetFloatAttributeValue_Parms Parms;
		Parms.FloatProp=FloatProp;
		Parms.NewValue=NewValue;
		ProcessEvent(FindFunctionChecked(NAME_AAttributeSetBase_SetFloatAttributeValue),&Parms);
	}
	static FName NAME_AAttributeSetBase_SetFloatAttributeValueByName = FName(TEXT("SetFloatAttributeValueByName"));
	void AAttributeSetBase::SetFloatAttributeValueByName(FName PropName, EAttrModifyMethod ModifyMethod, float ModifyValue)
	{
		AttributeSetBase_eventSetFloatAttributeValueByName_Parms Parms;
		Parms.PropName=PropName;
		Parms.ModifyMethod=ModifyMethod;
		Parms.ModifyValue=ModifyValue;
		ProcessEvent(FindFunctionChecked(NAME_AAttributeSetBase_SetFloatAttributeValueByName),&Parms);
	}
	void AAttributeSetBase::StaticRegisterNativesAAttributeSetBase()
	{
		UClass* Class = AAttributeSetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFloatAttribute", &AAttributeSetBase::execGetFloatAttribute },
			{ "GetTmpValueAfterModifiedFloatAttribute", &AAttributeSetBase::execGetTmpValueAfterModifiedFloatAttribute },
			{ "SetFloatAttributeValue", &AAttributeSetBase::execSetFloatAttributeValue },
			{ "SetFloatAttributeValueByName", &AAttributeSetBase::execSetFloatAttributeValueByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAttributeSetBase_GetFloatAttribute_Statics
	{
		struct AttributeSetBase_eventGetFloatAttribute_Parms
		{
			FName PropertyName;
			UFloatProperty* ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAttributeSetBase_GetFloatAttribute_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeSetBase_eventGetFloatAttribute_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAttributeSetBase_GetFloatAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeSetBase_eventGetFloatAttribute_Parms, ReturnValue), Z_Construct_UClass_UFloatProperty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAttributeSetBase_GetFloatAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttributeSetBase_GetFloatAttribute_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttributeSetBase_GetFloatAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttributeSetBase_GetFloatAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/AttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttributeSetBase_GetFloatAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttributeSetBase, nullptr, "GetFloatAttribute", nullptr, nullptr, sizeof(AttributeSetBase_eventGetFloatAttribute_Parms), Z_Construct_UFunction_AAttributeSetBase_GetFloatAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAttributeSetBase_GetFloatAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAttributeSetBase_GetFloatAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAttributeSetBase_GetFloatAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAttributeSetBase_GetFloatAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAttributeSetBase_GetFloatAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute_Statics
	{
		struct AttributeSetBase_eventGetTmpValueAfterModifiedFloatAttribute_Parms
		{
			UFloatProperty* FloatProp;
			EAttrModifyMethod ModifyMethod;
			float ModifyValue;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModifyMethod_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModifyMethod;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModifyValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute_Statics::NewProp_FloatProp = { "FloatProp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeSetBase_eventGetTmpValueAfterModifiedFloatAttribute_Parms, FloatProp), Z_Construct_UClass_UFloatProperty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute_Statics::NewProp_ModifyMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute_Statics::NewProp_ModifyMethod = { "ModifyMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeSetBase_eventGetTmpValueAfterModifiedFloatAttribute_Parms, ModifyMethod), Z_Construct_UEnum_NetworkAbilityKit_EAttrModifyMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute_Statics::NewProp_ModifyValue = { "ModifyValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeSetBase_eventGetTmpValueAfterModifiedFloatAttribute_Parms, ModifyValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeSetBase_eventGetTmpValueAfterModifiedFloatAttribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute_Statics::NewProp_FloatProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute_Statics::NewProp_ModifyMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute_Statics::NewProp_ModifyMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute_Statics::NewProp_ModifyValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/AttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttributeSetBase, nullptr, "GetTmpValueAfterModifiedFloatAttribute", nullptr, nullptr, sizeof(AttributeSetBase_eventGetTmpValueAfterModifiedFloatAttribute_Parms), Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValue_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValue_Statics::NewProp_FloatProp = { "FloatProp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeSetBase_eventSetFloatAttributeValue_Parms, FloatProp), Z_Construct_UClass_UFloatProperty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeSetBase_eventSetFloatAttributeValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValue_Statics::NewProp_FloatProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/AttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttributeSetBase, nullptr, "SetFloatAttributeValue", nullptr, nullptr, sizeof(AttributeSetBase_eventSetFloatAttributeValue_Parms), Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValueByName_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModifyMethod_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModifyMethod;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModifyValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValueByName_Statics::NewProp_PropName = { "PropName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeSetBase_eventSetFloatAttributeValueByName_Parms, PropName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValueByName_Statics::NewProp_ModifyMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValueByName_Statics::NewProp_ModifyMethod = { "ModifyMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeSetBase_eventSetFloatAttributeValueByName_Parms, ModifyMethod), Z_Construct_UEnum_NetworkAbilityKit_EAttrModifyMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValueByName_Statics::NewProp_ModifyValue = { "ModifyValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeSetBase_eventSetFloatAttributeValueByName_Parms, ModifyValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValueByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValueByName_Statics::NewProp_PropName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValueByName_Statics::NewProp_ModifyMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValueByName_Statics::NewProp_ModifyMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValueByName_Statics::NewProp_ModifyValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValueByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/AttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValueByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttributeSetBase, nullptr, "SetFloatAttributeValueByName", nullptr, nullptr, sizeof(AttributeSetBase_eventSetFloatAttributeValueByName_Parms), Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValueByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValueByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValueByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValueByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValueByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValueByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAttributeSetBase_NoRegister()
	{
		return AAttributeSetBase::StaticClass();
	}
	struct Z_Construct_UClass_AAttributeSetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TmpRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TmpRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BelongingActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BelongingActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAttributeSetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAttributeSetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAttributeSetBase_GetFloatAttribute, "GetFloatAttribute" }, // 671718620
		{ &Z_Construct_UFunction_AAttributeSetBase_GetTmpValueAfterModifiedFloatAttribute, "GetTmpValueAfterModifiedFloatAttribute" }, // 3677610355
		{ &Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValue, "SetFloatAttributeValue" }, // 1406883547
		{ &Z_Construct_UFunction_AAttributeSetBase_SetFloatAttributeValueByName, "SetFloatAttributeValueByName" }, // 2703710491
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttributeSetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AttributeSetBase.h" },
		{ "ModuleRelativePath", "Public/AttributeSetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttributeSetBase_Statics::NewProp_TmpRoot_MetaData[] = {
		{ "Category", "Parent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAttributeSetBase_Statics::NewProp_TmpRoot = { "TmpRoot", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAttributeSetBase, TmpRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAttributeSetBase_Statics::NewProp_TmpRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAttributeSetBase_Statics::NewProp_TmpRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttributeSetBase_Statics::NewProp_BelongingActor_MetaData[] = {
		{ "Category", "Parent" },
		{ "ModuleRelativePath", "Public/AttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAttributeSetBase_Statics::NewProp_BelongingActor = { "BelongingActor", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAttributeSetBase, BelongingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAttributeSetBase_Statics::NewProp_BelongingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAttributeSetBase_Statics::NewProp_BelongingActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAttributeSetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttributeSetBase_Statics::NewProp_TmpRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttributeSetBase_Statics::NewProp_BelongingActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAttributeSetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAttributeSetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAttributeSetBase_Statics::ClassParams = {
		&AAttributeSetBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAttributeSetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAttributeSetBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAttributeSetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAttributeSetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAttributeSetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAttributeSetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAttributeSetBase, 3211500908);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<AAttributeSetBase>()
	{
		return AAttributeSetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAttributeSetBase(Z_Construct_UClass_AAttributeSetBase, &AAttributeSetBase::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("AAttributeSetBase"), false, nullptr, nullptr, nullptr);

	void AAttributeSetBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_BelongingActor(TEXT("BelongingActor"));

		const bool bIsValid = true
			&& Name_BelongingActor == ClassReps[(int32)ENetFields_Private::BelongingActor].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAttributeSetBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAttributeSetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
