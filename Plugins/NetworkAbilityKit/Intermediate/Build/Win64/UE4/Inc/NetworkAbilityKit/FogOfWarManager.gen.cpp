// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/FogOfWarManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFogOfWarManager() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AFogOfWarManager_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AFogOfWarManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AFogOfWarManager_OnFowTextureUpdated();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AFogOfWarManager_RegisterFowActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static FName NAME_AFogOfWarManager_OnFowTextureUpdated = FName(TEXT("OnFowTextureUpdated"));
	void AFogOfWarManager::OnFowTextureUpdated(UTexture2D* currentTexture, UTexture2D* lastTexture)
	{
		FogOfWarManager_eventOnFowTextureUpdated_Parms Parms;
		Parms.currentTexture=currentTexture;
		Parms.lastTexture=lastTexture;
		ProcessEvent(FindFunctionChecked(NAME_AFogOfWarManager_OnFowTextureUpdated),&Parms);
	}
	void AFogOfWarManager::StaticRegisterNativesAFogOfWarManager()
	{
		UClass* Class = AFogOfWarManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFowTextureUpdated", &AFogOfWarManager::execOnFowTextureUpdated },
			{ "RegisterFowActor", &AFogOfWarManager::execRegisterFowActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFogOfWarManager_OnFowTextureUpdated_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lastTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFogOfWarManager_OnFowTextureUpdated_Statics::NewProp_lastTexture = { "lastTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FogOfWarManager_eventOnFowTextureUpdated_Parms, lastTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFogOfWarManager_OnFowTextureUpdated_Statics::NewProp_currentTexture = { "currentTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FogOfWarManager_eventOnFowTextureUpdated_Parms, currentTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFogOfWarManager_OnFowTextureUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFogOfWarManager_OnFowTextureUpdated_Statics::NewProp_lastTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFogOfWarManager_OnFowTextureUpdated_Statics::NewProp_currentTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFogOfWarManager_OnFowTextureUpdated_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Triggers a update in the blueprint\n" },
		{ "ModuleRelativePath", "Public/FogOfWarManager.h" },
		{ "ToolTip", "Triggers a update in the blueprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFogOfWarManager_OnFowTextureUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFogOfWarManager, nullptr, "OnFowTextureUpdated", nullptr, nullptr, sizeof(FogOfWarManager_eventOnFowTextureUpdated_Parms), Z_Construct_UFunction_AFogOfWarManager_OnFowTextureUpdated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFogOfWarManager_OnFowTextureUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFogOfWarManager_OnFowTextureUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFogOfWarManager_OnFowTextureUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFogOfWarManager_OnFowTextureUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFogOfWarManager_OnFowTextureUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFogOfWarManager_RegisterFowActor_Statics
	{
		struct FogOfWarManager_eventRegisterFowActor_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFogOfWarManager_RegisterFowActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FogOfWarManager_eventRegisterFowActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFogOfWarManager_RegisterFowActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFogOfWarManager_RegisterFowActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFogOfWarManager_RegisterFowActor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Register an actor to influence the FOW-texture\n" },
		{ "ModuleRelativePath", "Public/FogOfWarManager.h" },
		{ "ToolTip", "Register an actor to influence the FOW-texture" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFogOfWarManager_RegisterFowActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFogOfWarManager, nullptr, "RegisterFowActor", nullptr, nullptr, sizeof(FogOfWarManager_eventRegisterFowActor_Parms), Z_Construct_UFunction_AFogOfWarManager_RegisterFowActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFogOfWarManager_RegisterFowActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFogOfWarManager_RegisterFowActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFogOfWarManager_RegisterFowActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFogOfWarManager_RegisterFowActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFogOfWarManager_RegisterFowActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFogOfWarManager_NoRegister()
	{
		return AFogOfWarManager::StaticClass();
	}
	struct Z_Construct_UClass_AFogOfWarManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFOWTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastFOWTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOWTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FOWTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FowActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FowActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FowActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_blurKernel_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_blurKernel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_blurKernel_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFrameTextureData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LastFrameTextureData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastFrameTextureData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextureData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalBlurData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HorizontalBlurData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalBlurData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnfoggedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnfoggedData;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UnfoggedData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBlurEnabled_MetaData[];
#endif
		static void NewProp_bIsBlurEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBlurEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDoneBlending_MetaData[];
#endif
		static void NewProp_bIsDoneBlending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDoneBlending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplesPerMeter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SamplesPerMeter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFogOfWarManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFogOfWarManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFogOfWarManager_OnFowTextureUpdated, "OnFowTextureUpdated" }, // 2363953220
		{ &Z_Construct_UFunction_AFogOfWarManager_RegisterFowActor, "RegisterFowActor" }, // 2435678658
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFogOfWarManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FogOfWarManager.h" },
		{ "ModuleRelativePath", "Public/FogOfWarManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_LastFOWTexture_MetaData[] = {
		{ "Comment", "//Texture from last update. We blend between the two to do a smooth unveiling of newly discovered areas.\n" },
		{ "ModuleRelativePath", "Public/FogOfWarManager.h" },
		{ "ToolTip", "Texture from last update. We blend between the two to do a smooth unveiling of newly discovered areas." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_LastFOWTexture = { "LastFOWTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFogOfWarManager, LastFOWTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_LastFOWTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_LastFOWTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_FOWTexture_MetaData[] = {
		{ "Comment", "//Our dynamically updated texture\n" },
		{ "ModuleRelativePath", "Public/FogOfWarManager.h" },
		{ "ToolTip", "Our dynamically updated texture" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_FOWTexture = { "FOWTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFogOfWarManager, FOWTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_FOWTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_FOWTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_FowActors_MetaData[] = {
		{ "Comment", "//Store the actors that will be unveiling the FOW-texture.\n" },
		{ "ModuleRelativePath", "Public/FogOfWarManager.h" },
		{ "ToolTip", "Store the actors that will be unveiling the FOW-texture." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_FowActors = { "FowActors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFogOfWarManager, FowActors), METADATA_PARAMS(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_FowActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_FowActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_FowActors_Inner = { "FowActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_blurKernel_MetaData[] = {
		{ "Comment", "//Blur kernel\n" },
		{ "ModuleRelativePath", "Public/FogOfWarManager.h" },
		{ "ToolTip", "Blur kernel" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_blurKernel = { "blurKernel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFogOfWarManager, blurKernel), METADATA_PARAMS(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_blurKernel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_blurKernel_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_blurKernel_Inner = { "blurKernel", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_LastFrameTextureData_MetaData[] = {
		{ "Comment", "//Our texture data from the last frame\n" },
		{ "ModuleRelativePath", "Public/FogOfWarManager.h" },
		{ "ToolTip", "Our texture data from the last frame" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_LastFrameTextureData = { "LastFrameTextureData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFogOfWarManager, LastFrameTextureData), METADATA_PARAMS(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_LastFrameTextureData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_LastFrameTextureData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_LastFrameTextureData_Inner = { "LastFrameTextureData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_TextureData_MetaData[] = {
		{ "Comment", "//Our texture data (result of vertical blur pass)\n" },
		{ "ModuleRelativePath", "Public/FogOfWarManager.h" },
		{ "ToolTip", "Our texture data (result of vertical blur pass)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_TextureData = { "TextureData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFogOfWarManager, TextureData), METADATA_PARAMS(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_TextureData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_TextureData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_TextureData_Inner = { "TextureData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_HorizontalBlurData_MetaData[] = {
		{ "Comment", "//Temp array for horizontal blur pass\n" },
		{ "ModuleRelativePath", "Public/FogOfWarManager.h" },
		{ "ToolTip", "Temp array for horizontal blur pass" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_HorizontalBlurData = { "HorizontalBlurData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFogOfWarManager, HorizontalBlurData), METADATA_PARAMS(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_HorizontalBlurData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_HorizontalBlurData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_HorizontalBlurData_Inner = { "HorizontalBlurData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_UnfoggedData_MetaData[] = {
		{ "Comment", "//Array containing what parts of the map we've unveiled.\n" },
		{ "ModuleRelativePath", "Public/FogOfWarManager.h" },
		{ "ToolTip", "Array containing what parts of the map we've unveiled." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_UnfoggedData = { "UnfoggedData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFogOfWarManager, UnfoggedData), METADATA_PARAMS(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_UnfoggedData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_UnfoggedData_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_UnfoggedData_Inner = { "UnfoggedData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_bIsBlurEnabled_MetaData[] = {
		{ "Category", "FogOfWarManager" },
		{ "Comment", "//Should we blur? It takes up quite a lot of CPU time...\n" },
		{ "ModuleRelativePath", "Public/FogOfWarManager.h" },
		{ "ToolTip", "Should we blur? It takes up quite a lot of CPU time..." },
	};
#endif
	void Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_bIsBlurEnabled_SetBit(void* Obj)
	{
		((AFogOfWarManager*)Obj)->bIsBlurEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_bIsBlurEnabled = { "bIsBlurEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFogOfWarManager), &Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_bIsBlurEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_bIsBlurEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_bIsBlurEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_bIsDoneBlending_MetaData[] = {
		{ "Category", "FogOfWarManager" },
		{ "Comment", "//If the last texture blending is done\n" },
		{ "ModuleRelativePath", "Public/FogOfWarManager.h" },
		{ "ToolTip", "If the last texture blending is done" },
	};
#endif
	void Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_bIsDoneBlending_SetBit(void* Obj)
	{
		((AFogOfWarManager*)Obj)->bIsDoneBlending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_bIsDoneBlending = { "bIsDoneBlending", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFogOfWarManager), &Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_bIsDoneBlending_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_bIsDoneBlending_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_bIsDoneBlending_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_SamplesPerMeter_MetaData[] = {
		{ "Category", "FogOfWar" },
		{ "Comment", "//The number of samples per 100 unreal units\n" },
		{ "ModuleRelativePath", "Public/FogOfWarManager.h" },
		{ "ToolTip", "The number of samples per 100 unreal units" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_SamplesPerMeter = { "SamplesPerMeter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFogOfWarManager, SamplesPerMeter), METADATA_PARAMS(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_SamplesPerMeter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_SamplesPerMeter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_SightRange_MetaData[] = {
		{ "Category", "FogOfWar" },
		{ "Comment", "//How far will an actor be able to see\n//CONSIDER: Place it on the actors to allow for individual sight-radius\n" },
		{ "ModuleRelativePath", "Public/FogOfWarManager.h" },
		{ "ToolTip", "How far will an actor be able to see\nCONSIDER: Place it on the actors to allow for individual sight-radius" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_SightRange = { "SightRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFogOfWarManager, SightRange), METADATA_PARAMS(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_SightRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_SightRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFogOfWarManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_LastFOWTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_FOWTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_FowActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_FowActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_blurKernel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_blurKernel_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_LastFrameTextureData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_LastFrameTextureData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_TextureData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_TextureData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_HorizontalBlurData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_HorizontalBlurData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_UnfoggedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_UnfoggedData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_bIsBlurEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_bIsDoneBlending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_SamplesPerMeter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_SightRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFogOfWarManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFogOfWarManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFogOfWarManager_Statics::ClassParams = {
		&AFogOfWarManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFogOfWarManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFogOfWarManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFogOfWarManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFogOfWarManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFogOfWarManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFogOfWarManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFogOfWarManager, 3717443107);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<AFogOfWarManager>()
	{
		return AFogOfWarManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFogOfWarManager(Z_Construct_UClass_AFogOfWarManager, &AFogOfWarManager::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("AFogOfWarManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFogOfWarManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
