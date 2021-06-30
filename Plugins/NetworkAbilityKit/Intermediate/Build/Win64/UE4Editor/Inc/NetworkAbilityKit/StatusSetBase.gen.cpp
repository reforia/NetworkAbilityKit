// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/StatusSetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusSetBase() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AStatusSetBase_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AStatusSetBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	COREUOBJECT_API UClass* Z_Construct_UClass_UBoolProperty();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AStatusSetBase::execSetBoolAttributeByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PropName);
		P_GET_UBOOL(Z_Param_bNewBool);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SetBoolAttributeByName_Validate(Z_Param_PropName,Z_Param_bNewBool))
		{
			RPC_ValidateFailed(TEXT("SetBoolAttributeByName_Validate"));
			return;
		}
		P_THIS->SetBoolAttributeByName_Implementation(Z_Param_PropName,Z_Param_bNewBool);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStatusSetBase::execMulticast_SetBoolAttribute)
	{
		P_GET_OBJECT(UBoolProperty,Z_Param_BoolProp);
		P_GET_UBOOL(Z_Param_bNewBool);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_SetBoolAttribute_Validate(Z_Param_BoolProp,Z_Param_bNewBool))
		{
			RPC_ValidateFailed(TEXT("Multicast_SetBoolAttribute_Validate"));
			return;
		}
		P_THIS->Multicast_SetBoolAttribute_Implementation(Z_Param_BoolProp,Z_Param_bNewBool);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStatusSetBase::execSetBoolAttribute)
	{
		P_GET_OBJECT(UBoolProperty,Z_Param_BoolProp);
		P_GET_UBOOL(Z_Param_bNewBool);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SetBoolAttribute_Validate(Z_Param_BoolProp,Z_Param_bNewBool))
		{
			RPC_ValidateFailed(TEXT("SetBoolAttribute_Validate"));
			return;
		}
		P_THIS->SetBoolAttribute_Implementation(Z_Param_BoolProp,Z_Param_bNewBool);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStatusSetBase::execGetBoolAttributeValue)
	{
		P_GET_OBJECT(UBoolProperty,Z_Param_BoolProp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoolAttributeValue(Z_Param_BoolProp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStatusSetBase::execGetBoolAttribute)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_GET_OBJECT_REF(UBoolProperty,Z_Param_Out_BoolProp);
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBoolAttribute(Z_Param_PropertyName,Z_Param_Out_Success,Z_Param_Out_BoolProp,Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	static FName NAME_AStatusSetBase_BP_OnImmune = FName(TEXT("BP_OnImmune"));
	void AStatusSetBase::BP_OnImmune(UBoolProperty* ImmunedProperty)
	{
		StatusSetBase_eventBP_OnImmune_Parms Parms;
		Parms.ImmunedProperty=ImmunedProperty;
		ProcessEvent(FindFunctionChecked(NAME_AStatusSetBase_BP_OnImmune),&Parms);
	}
	static FName NAME_AStatusSetBase_Multicast_SetBoolAttribute = FName(TEXT("Multicast_SetBoolAttribute"));
	void AStatusSetBase::Multicast_SetBoolAttribute(UBoolProperty* BoolProp, bool bNewBool)
	{
		StatusSetBase_eventMulticast_SetBoolAttribute_Parms Parms;
		Parms.BoolProp=BoolProp;
		Parms.bNewBool=bNewBool ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AStatusSetBase_Multicast_SetBoolAttribute),&Parms);
	}
	static FName NAME_AStatusSetBase_SetBoolAttribute = FName(TEXT("SetBoolAttribute"));
	void AStatusSetBase::SetBoolAttribute(UBoolProperty* BoolProp, bool bNewBool)
	{
		StatusSetBase_eventSetBoolAttribute_Parms Parms;
		Parms.BoolProp=BoolProp;
		Parms.bNewBool=bNewBool ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AStatusSetBase_SetBoolAttribute),&Parms);
	}
	static FName NAME_AStatusSetBase_SetBoolAttributeByName = FName(TEXT("SetBoolAttributeByName"));
	void AStatusSetBase::SetBoolAttributeByName(FName PropName, bool bNewBool)
	{
		StatusSetBase_eventSetBoolAttributeByName_Parms Parms;
		Parms.PropName=PropName;
		Parms.bNewBool=bNewBool ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AStatusSetBase_SetBoolAttributeByName),&Parms);
	}
	void AStatusSetBase::StaticRegisterNativesAStatusSetBase()
	{
		UClass* Class = AStatusSetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoolAttribute", &AStatusSetBase::execGetBoolAttribute },
			{ "GetBoolAttributeValue", &AStatusSetBase::execGetBoolAttributeValue },
			{ "Multicast_SetBoolAttribute", &AStatusSetBase::execMulticast_SetBoolAttribute },
			{ "SetBoolAttribute", &AStatusSetBase::execSetBoolAttribute },
			{ "SetBoolAttributeByName", &AStatusSetBase::execSetBoolAttributeByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStatusSetBase_BP_OnImmune_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImmunedProperty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStatusSetBase_BP_OnImmune_Statics::NewProp_ImmunedProperty = { "ImmunedProperty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusSetBase_eventBP_OnImmune_Parms, ImmunedProperty), Z_Construct_UClass_UBoolProperty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatusSetBase_BP_OnImmune_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatusSetBase_BP_OnImmune_Statics::NewProp_ImmunedProperty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatusSetBase_BP_OnImmune_Statics::Function_MetaDataParams[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Public/StatusSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatusSetBase_BP_OnImmune_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatusSetBase, nullptr, "BP_OnImmune", nullptr, nullptr, sizeof(StatusSetBase_eventBP_OnImmune_Parms), Z_Construct_UFunction_AStatusSetBase_BP_OnImmune_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStatusSetBase_BP_OnImmune_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatusSetBase_BP_OnImmune_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStatusSetBase_BP_OnImmune_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatusSetBase_BP_OnImmune()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatusSetBase_BP_OnImmune_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics
	{
		struct StatusSetBase_eventGetBoolAttribute_Parms
		{
			FName PropertyName;
			bool Success;
			UBoolProperty* BoolProp;
			bool AttributeValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoolProp;
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusSetBase_eventGetBoolAttribute_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::NewProp_PropertyName_MetaData)) };
	void Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((StatusSetBase_eventGetBoolAttribute_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StatusSetBase_eventGetBoolAttribute_Parms), &Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::NewProp_BoolProp = { "BoolProp", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusSetBase_eventGetBoolAttribute_Parms, BoolProp), Z_Construct_UClass_UBoolProperty, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((StatusSetBase_eventGetBoolAttribute_Parms*)Obj)->AttributeValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StatusSetBase_eventGetBoolAttribute_Parms), &Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::NewProp_BoolProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::NewProp_AttributeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Public/StatusSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatusSetBase, nullptr, "GetBoolAttribute", nullptr, nullptr, sizeof(StatusSetBase_eventGetBoolAttribute_Parms), Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStatusSetBase_GetBoolAttributeValue_Statics
	{
		struct StatusSetBase_eventGetBoolAttributeValue_Parms
		{
			UBoolProperty* BoolProp;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoolProp;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStatusSetBase_GetBoolAttributeValue_Statics::NewProp_BoolProp = { "BoolProp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusSetBase_eventGetBoolAttributeValue_Parms, BoolProp), Z_Construct_UClass_UBoolProperty, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AStatusSetBase_GetBoolAttributeValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StatusSetBase_eventGetBoolAttributeValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStatusSetBase_GetBoolAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StatusSetBase_eventGetBoolAttributeValue_Parms), &Z_Construct_UFunction_AStatusSetBase_GetBoolAttributeValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatusSetBase_GetBoolAttributeValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatusSetBase_GetBoolAttributeValue_Statics::NewProp_BoolProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatusSetBase_GetBoolAttributeValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatusSetBase_GetBoolAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Public/StatusSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatusSetBase_GetBoolAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatusSetBase, nullptr, "GetBoolAttributeValue", nullptr, nullptr, sizeof(StatusSetBase_eventGetBoolAttributeValue_Parms), Z_Construct_UFunction_AStatusSetBase_GetBoolAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStatusSetBase_GetBoolAttributeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatusSetBase_GetBoolAttributeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStatusSetBase_GetBoolAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatusSetBase_GetBoolAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatusSetBase_GetBoolAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStatusSetBase_Multicast_SetBoolAttribute_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoolProp;
		static void NewProp_bNewBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewBool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStatusSetBase_Multicast_SetBoolAttribute_Statics::NewProp_BoolProp = { "BoolProp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusSetBase_eventMulticast_SetBoolAttribute_Parms, BoolProp), Z_Construct_UClass_UBoolProperty, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AStatusSetBase_Multicast_SetBoolAttribute_Statics::NewProp_bNewBool_SetBit(void* Obj)
	{
		((StatusSetBase_eventMulticast_SetBoolAttribute_Parms*)Obj)->bNewBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStatusSetBase_Multicast_SetBoolAttribute_Statics::NewProp_bNewBool = { "bNewBool", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StatusSetBase_eventMulticast_SetBoolAttribute_Parms), &Z_Construct_UFunction_AStatusSetBase_Multicast_SetBoolAttribute_Statics::NewProp_bNewBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatusSetBase_Multicast_SetBoolAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatusSetBase_Multicast_SetBoolAttribute_Statics::NewProp_BoolProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatusSetBase_Multicast_SetBoolAttribute_Statics::NewProp_bNewBool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatusSetBase_Multicast_SetBoolAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Public/StatusSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatusSetBase_Multicast_SetBoolAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatusSetBase, nullptr, "Multicast_SetBoolAttribute", nullptr, nullptr, sizeof(StatusSetBase_eventMulticast_SetBoolAttribute_Parms), Z_Construct_UFunction_AStatusSetBase_Multicast_SetBoolAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStatusSetBase_Multicast_SetBoolAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatusSetBase_Multicast_SetBoolAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStatusSetBase_Multicast_SetBoolAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatusSetBase_Multicast_SetBoolAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatusSetBase_Multicast_SetBoolAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStatusSetBase_SetBoolAttribute_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoolProp;
		static void NewProp_bNewBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewBool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStatusSetBase_SetBoolAttribute_Statics::NewProp_BoolProp = { "BoolProp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusSetBase_eventSetBoolAttribute_Parms, BoolProp), Z_Construct_UClass_UBoolProperty, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AStatusSetBase_SetBoolAttribute_Statics::NewProp_bNewBool_SetBit(void* Obj)
	{
		((StatusSetBase_eventSetBoolAttribute_Parms*)Obj)->bNewBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStatusSetBase_SetBoolAttribute_Statics::NewProp_bNewBool = { "bNewBool", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StatusSetBase_eventSetBoolAttribute_Parms), &Z_Construct_UFunction_AStatusSetBase_SetBoolAttribute_Statics::NewProp_bNewBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatusSetBase_SetBoolAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatusSetBase_SetBoolAttribute_Statics::NewProp_BoolProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatusSetBase_SetBoolAttribute_Statics::NewProp_bNewBool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatusSetBase_SetBoolAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Public/StatusSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatusSetBase_SetBoolAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatusSetBase, nullptr, "SetBoolAttribute", nullptr, nullptr, sizeof(StatusSetBase_eventSetBoolAttribute_Parms), Z_Construct_UFunction_AStatusSetBase_SetBoolAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStatusSetBase_SetBoolAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatusSetBase_SetBoolAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStatusSetBase_SetBoolAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatusSetBase_SetBoolAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatusSetBase_SetBoolAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStatusSetBase_SetBoolAttributeByName_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropName;
		static void NewProp_bNewBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewBool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AStatusSetBase_SetBoolAttributeByName_Statics::NewProp_PropName = { "PropName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusSetBase_eventSetBoolAttributeByName_Parms, PropName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AStatusSetBase_SetBoolAttributeByName_Statics::NewProp_bNewBool_SetBit(void* Obj)
	{
		((StatusSetBase_eventSetBoolAttributeByName_Parms*)Obj)->bNewBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStatusSetBase_SetBoolAttributeByName_Statics::NewProp_bNewBool = { "bNewBool", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StatusSetBase_eventSetBoolAttributeByName_Parms), &Z_Construct_UFunction_AStatusSetBase_SetBoolAttributeByName_Statics::NewProp_bNewBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatusSetBase_SetBoolAttributeByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatusSetBase_SetBoolAttributeByName_Statics::NewProp_PropName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatusSetBase_SetBoolAttributeByName_Statics::NewProp_bNewBool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatusSetBase_SetBoolAttributeByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Public/StatusSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatusSetBase_SetBoolAttributeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatusSetBase, nullptr, "SetBoolAttributeByName", nullptr, nullptr, sizeof(StatusSetBase_eventSetBoolAttributeByName_Parms), Z_Construct_UFunction_AStatusSetBase_SetBoolAttributeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStatusSetBase_SetBoolAttributeByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatusSetBase_SetBoolAttributeByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStatusSetBase_SetBoolAttributeByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatusSetBase_SetBoolAttributeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatusSetBase_SetBoolAttributeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStatusSetBase_NoRegister()
	{
		return AStatusSetBase::StaticClass();
	}
	struct Z_Construct_UClass_AStatusSetBase_Statics
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
	UObject* (*const Z_Construct_UClass_AStatusSetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStatusSetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStatusSetBase_BP_OnImmune, "BP_OnImmune" }, // 1194316539
		{ &Z_Construct_UFunction_AStatusSetBase_GetBoolAttribute, "GetBoolAttribute" }, // 3227877159
		{ &Z_Construct_UFunction_AStatusSetBase_GetBoolAttributeValue, "GetBoolAttributeValue" }, // 3623976743
		{ &Z_Construct_UFunction_AStatusSetBase_Multicast_SetBoolAttribute, "Multicast_SetBoolAttribute" }, // 479535194
		{ &Z_Construct_UFunction_AStatusSetBase_SetBoolAttribute, "SetBoolAttribute" }, // 499775609
		{ &Z_Construct_UFunction_AStatusSetBase_SetBoolAttributeByName, "SetBoolAttributeByName" }, // 1458799064
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatusSetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StatusSetBase.h" },
		{ "ModuleRelativePath", "Public/StatusSetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatusSetBase_Statics::NewProp_TmpRoot_MetaData[] = {
		{ "Category", "Parent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StatusSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStatusSetBase_Statics::NewProp_TmpRoot = { "TmpRoot", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatusSetBase, TmpRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStatusSetBase_Statics::NewProp_TmpRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStatusSetBase_Statics::NewProp_TmpRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatusSetBase_Statics::NewProp_BelongingActor_MetaData[] = {
		{ "Category", "Parent" },
		{ "ModuleRelativePath", "Public/StatusSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStatusSetBase_Statics::NewProp_BelongingActor = { "BelongingActor", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatusSetBase, BelongingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStatusSetBase_Statics::NewProp_BelongingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStatusSetBase_Statics::NewProp_BelongingActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStatusSetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatusSetBase_Statics::NewProp_TmpRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatusSetBase_Statics::NewProp_BelongingActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStatusSetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStatusSetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStatusSetBase_Statics::ClassParams = {
		&AStatusSetBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStatusSetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStatusSetBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStatusSetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStatusSetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStatusSetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStatusSetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStatusSetBase, 522708649);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<AStatusSetBase>()
	{
		return AStatusSetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStatusSetBase(Z_Construct_UClass_AStatusSetBase, &AStatusSetBase::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("AStatusSetBase"), false, nullptr, nullptr, nullptr);

	void AStatusSetBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_BelongingActor(TEXT("BelongingActor"));

		const bool bIsValid = true
			&& Name_BelongingActor == ClassReps[(int32)ENetFields_Private::BelongingActor].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AStatusSetBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStatusSetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
