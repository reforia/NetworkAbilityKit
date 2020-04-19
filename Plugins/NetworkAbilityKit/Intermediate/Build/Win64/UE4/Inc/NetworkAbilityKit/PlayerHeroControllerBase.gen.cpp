// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/PlayerHeroControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHeroControllerBase() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_APlayerHeroControllerBase_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_APlayerHeroControllerBase();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_APlayerHeroControllerBase_BP_CLIENT_PostInitialization();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_APlayerHeroControllerBase_BP_CLIENT_PostLogin();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_APlayerHeroControllerBase_CLIENT_PostInitialization();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_APlayerHeroControllerBase_CLIENT_PostLogin();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_APlayerHeroControllerBase_EssentialFrameworkInitialization();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_APlayerHeroControllerBase_PlayerRefInitialization();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_APlayerHeroControllerBase_SERVER_PostLogin();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_APlayerHeroControllerBase_UpdateControlRotation();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_APlayerHeroControllerBase_UpdateCursorInfo();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_APlayerHeroControllerBase_UpdatePlayerCameraOffset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_APlayerHeroBase_NoRegister();
// End Cross Module References
	static FName NAME_APlayerHeroControllerBase_BP_CLIENT_PostInitialization = FName(TEXT("BP_CLIENT_PostInitialization"));
	void APlayerHeroControllerBase::BP_CLIENT_PostInitialization()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerHeroControllerBase_BP_CLIENT_PostInitialization),NULL);
	}
	static FName NAME_APlayerHeroControllerBase_BP_CLIENT_PostLogin = FName(TEXT("BP_CLIENT_PostLogin"));
	void APlayerHeroControllerBase::BP_CLIENT_PostLogin()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerHeroControllerBase_BP_CLIENT_PostLogin),NULL);
	}
	static FName NAME_APlayerHeroControllerBase_CLIENT_PostInitialization = FName(TEXT("CLIENT_PostInitialization"));
	void APlayerHeroControllerBase::CLIENT_PostInitialization()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerHeroControllerBase_CLIENT_PostInitialization),NULL);
	}
	static FName NAME_APlayerHeroControllerBase_CLIENT_PostLogin = FName(TEXT("CLIENT_PostLogin"));
	void APlayerHeroControllerBase::CLIENT_PostLogin()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerHeroControllerBase_CLIENT_PostLogin),NULL);
	}
	static FName NAME_APlayerHeroControllerBase_SERVER_PostLogin = FName(TEXT("SERVER_PostLogin"));
	void APlayerHeroControllerBase::SERVER_PostLogin()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerHeroControllerBase_SERVER_PostLogin),NULL);
	}
	static FName NAME_APlayerHeroControllerBase_UpdatePlayerCameraOffset = FName(TEXT("UpdatePlayerCameraOffset"));
	void APlayerHeroControllerBase::UpdatePlayerCameraOffset()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerHeroControllerBase_UpdatePlayerCameraOffset),NULL);
	}
	void APlayerHeroControllerBase::StaticRegisterNativesAPlayerHeroControllerBase()
	{
		UClass* Class = APlayerHeroControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CLIENT_PostInitialization", &APlayerHeroControllerBase::execCLIENT_PostInitialization },
			{ "CLIENT_PostLogin", &APlayerHeroControllerBase::execCLIENT_PostLogin },
			{ "EssentialFrameworkInitialization", &APlayerHeroControllerBase::execEssentialFrameworkInitialization },
			{ "PlayerRefInitialization", &APlayerHeroControllerBase::execPlayerRefInitialization },
			{ "SERVER_PostLogin", &APlayerHeroControllerBase::execSERVER_PostLogin },
			{ "UpdateControlRotation", &APlayerHeroControllerBase::execUpdateControlRotation },
			{ "UpdateCursorInfo", &APlayerHeroControllerBase::execUpdateCursorInfo },
			{ "UpdatePlayerCameraOffset", &APlayerHeroControllerBase::execUpdatePlayerCameraOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerHeroControllerBase_BP_CLIENT_PostInitialization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerHeroControllerBase_BP_CLIENT_PostInitialization_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/PlayerHeroControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerHeroControllerBase_BP_CLIENT_PostInitialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerHeroControllerBase, nullptr, "BP_CLIENT_PostInitialization", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerHeroControllerBase_BP_CLIENT_PostInitialization_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerHeroControllerBase_BP_CLIENT_PostInitialization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerHeroControllerBase_BP_CLIENT_PostInitialization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerHeroControllerBase_BP_CLIENT_PostInitialization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerHeroControllerBase_BP_CLIENT_PostLogin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerHeroControllerBase_BP_CLIENT_PostLogin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/PlayerHeroControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerHeroControllerBase_BP_CLIENT_PostLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerHeroControllerBase, nullptr, "BP_CLIENT_PostLogin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerHeroControllerBase_BP_CLIENT_PostLogin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerHeroControllerBase_BP_CLIENT_PostLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerHeroControllerBase_BP_CLIENT_PostLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerHeroControllerBase_BP_CLIENT_PostLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerHeroControllerBase_CLIENT_PostInitialization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerHeroControllerBase_CLIENT_PostInitialization_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/PlayerHeroControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerHeroControllerBase_CLIENT_PostInitialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerHeroControllerBase, nullptr, "CLIENT_PostInitialization", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerHeroControllerBase_CLIENT_PostInitialization_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerHeroControllerBase_CLIENT_PostInitialization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerHeroControllerBase_CLIENT_PostInitialization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerHeroControllerBase_CLIENT_PostInitialization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerHeroControllerBase_CLIENT_PostLogin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerHeroControllerBase_CLIENT_PostLogin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/PlayerHeroControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerHeroControllerBase_CLIENT_PostLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerHeroControllerBase, nullptr, "CLIENT_PostLogin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerHeroControllerBase_CLIENT_PostLogin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerHeroControllerBase_CLIENT_PostLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerHeroControllerBase_CLIENT_PostLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerHeroControllerBase_CLIENT_PostLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerHeroControllerBase_EssentialFrameworkInitialization_Statics
	{
		struct PlayerHeroControllerBase_eventEssentialFrameworkInitialization_Parms
		{
			APawn* aPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_aPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerHeroControllerBase_EssentialFrameworkInitialization_Statics::NewProp_aPawn = { "aPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHeroControllerBase_eventEssentialFrameworkInitialization_Parms, aPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerHeroControllerBase_EssentialFrameworkInitialization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerHeroControllerBase_EssentialFrameworkInitialization_Statics::NewProp_aPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerHeroControllerBase_EssentialFrameworkInitialization_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerHeroControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerHeroControllerBase_EssentialFrameworkInitialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerHeroControllerBase, nullptr, "EssentialFrameworkInitialization", nullptr, nullptr, sizeof(PlayerHeroControllerBase_eventEssentialFrameworkInitialization_Parms), Z_Construct_UFunction_APlayerHeroControllerBase_EssentialFrameworkInitialization_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerHeroControllerBase_EssentialFrameworkInitialization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerHeroControllerBase_EssentialFrameworkInitialization_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerHeroControllerBase_EssentialFrameworkInitialization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerHeroControllerBase_EssentialFrameworkInitialization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerHeroControllerBase_EssentialFrameworkInitialization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerHeroControllerBase_PlayerRefInitialization_Statics
	{
		struct PlayerHeroControllerBase_eventPlayerRefInitialization_Parms
		{
			APawn* PossessedPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PossessedPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerHeroControllerBase_PlayerRefInitialization_Statics::NewProp_PossessedPawn = { "PossessedPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHeroControllerBase_eventPlayerRefInitialization_Parms, PossessedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerHeroControllerBase_PlayerRefInitialization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerHeroControllerBase_PlayerRefInitialization_Statics::NewProp_PossessedPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerHeroControllerBase_PlayerRefInitialization_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/PlayerHeroControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerHeroControllerBase_PlayerRefInitialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerHeroControllerBase, nullptr, "PlayerRefInitialization", nullptr, nullptr, sizeof(PlayerHeroControllerBase_eventPlayerRefInitialization_Parms), Z_Construct_UFunction_APlayerHeroControllerBase_PlayerRefInitialization_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerHeroControllerBase_PlayerRefInitialization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerHeroControllerBase_PlayerRefInitialization_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerHeroControllerBase_PlayerRefInitialization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerHeroControllerBase_PlayerRefInitialization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerHeroControllerBase_PlayerRefInitialization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerHeroControllerBase_SERVER_PostLogin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerHeroControllerBase_SERVER_PostLogin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/PlayerHeroControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerHeroControllerBase_SERVER_PostLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerHeroControllerBase, nullptr, "SERVER_PostLogin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerHeroControllerBase_SERVER_PostLogin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerHeroControllerBase_SERVER_PostLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerHeroControllerBase_SERVER_PostLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerHeroControllerBase_SERVER_PostLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerHeroControllerBase_UpdateControlRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerHeroControllerBase_UpdateControlRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/PlayerHeroControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerHeroControllerBase_UpdateControlRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerHeroControllerBase, nullptr, "UpdateControlRotation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerHeroControllerBase_UpdateControlRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerHeroControllerBase_UpdateControlRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerHeroControllerBase_UpdateControlRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerHeroControllerBase_UpdateControlRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerHeroControllerBase_UpdateCursorInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerHeroControllerBase_UpdateCursorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "Comment", "//UUserWidget* MainUMGWidgetInstance;\n" },
		{ "ModuleRelativePath", "Public/PlayerHeroControllerBase.h" },
		{ "ToolTip", "UUserWidget* MainUMGWidgetInstance;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerHeroControllerBase_UpdateCursorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerHeroControllerBase, nullptr, "UpdateCursorInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerHeroControllerBase_UpdateCursorInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerHeroControllerBase_UpdateCursorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerHeroControllerBase_UpdateCursorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerHeroControllerBase_UpdateCursorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerHeroControllerBase_UpdatePlayerCameraOffset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerHeroControllerBase_UpdatePlayerCameraOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/PlayerHeroControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerHeroControllerBase_UpdatePlayerCameraOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerHeroControllerBase, nullptr, "UpdatePlayerCameraOffset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerHeroControllerBase_UpdatePlayerCameraOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerHeroControllerBase_UpdatePlayerCameraOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerHeroControllerBase_UpdatePlayerCameraOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerHeroControllerBase_UpdatePlayerCameraOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerHeroControllerBase_NoRegister()
	{
		return APlayerHeroControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_APlayerHeroControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInitialized_MetaData[];
#endif
		static void NewProp_PlayerInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PlayerInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorPointPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CursorPointPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorPointVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CursorPointVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCursorDistanceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCursorDistanceOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorDistanceToPlayerNormalized_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CursorDistanceToPlayerNormalized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorDistanceToPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CursorDistanceToPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorPointDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CursorPointDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerHeroControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerHeroControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerHeroControllerBase_BP_CLIENT_PostInitialization, "BP_CLIENT_PostInitialization" }, // 624117679
		{ &Z_Construct_UFunction_APlayerHeroControllerBase_BP_CLIENT_PostLogin, "BP_CLIENT_PostLogin" }, // 2958671145
		{ &Z_Construct_UFunction_APlayerHeroControllerBase_CLIENT_PostInitialization, "CLIENT_PostInitialization" }, // 2089001887
		{ &Z_Construct_UFunction_APlayerHeroControllerBase_CLIENT_PostLogin, "CLIENT_PostLogin" }, // 3523315225
		{ &Z_Construct_UFunction_APlayerHeroControllerBase_EssentialFrameworkInitialization, "EssentialFrameworkInitialization" }, // 3853544565
		{ &Z_Construct_UFunction_APlayerHeroControllerBase_PlayerRefInitialization, "PlayerRefInitialization" }, // 929283692
		{ &Z_Construct_UFunction_APlayerHeroControllerBase_SERVER_PostLogin, "SERVER_PostLogin" }, // 729245640
		{ &Z_Construct_UFunction_APlayerHeroControllerBase_UpdateControlRotation, "UpdateControlRotation" }, // 168255074
		{ &Z_Construct_UFunction_APlayerHeroControllerBase_UpdateCursorInfo, "UpdateCursorInfo" }, // 597420387
		{ &Z_Construct_UFunction_APlayerHeroControllerBase_UpdatePlayerCameraOffset, "UpdatePlayerCameraOffset" }, // 2910544701
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHeroControllerBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerHeroControllerBase.h" },
		{ "ModuleRelativePath", "Public/PlayerHeroControllerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_PlayerInitialized_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/PlayerHeroControllerBase.h" },
	};
#endif
	void Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_PlayerInitialized_SetBit(void* Obj)
	{
		((APlayerHeroControllerBase*)Obj)->PlayerInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_PlayerInitialized = { "PlayerInitialized", nullptr, (EPropertyFlags)0x0020080000020035, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerHeroControllerBase), &Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_PlayerInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_PlayerInitialized_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_PlayerInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorPointPosition_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/PlayerHeroControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorPointPosition = { "CursorPointPosition", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHeroControllerBase, CursorPointPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorPointPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorPointPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorPointVector_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/PlayerHeroControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorPointVector = { "CursorPointVector", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHeroControllerBase, CursorPointVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorPointVector_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorPointVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_MaxCursorDistanceOffset_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/PlayerHeroControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_MaxCursorDistanceOffset = { "MaxCursorDistanceOffset", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHeroControllerBase, MaxCursorDistanceOffset), METADATA_PARAMS(Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_MaxCursorDistanceOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_MaxCursorDistanceOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorDistanceToPlayerNormalized_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/PlayerHeroControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorDistanceToPlayerNormalized = { "CursorDistanceToPlayerNormalized", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHeroControllerBase, CursorDistanceToPlayerNormalized), METADATA_PARAMS(Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorDistanceToPlayerNormalized_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorDistanceToPlayerNormalized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorDistanceToPlayer_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/PlayerHeroControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorDistanceToPlayer = { "CursorDistanceToPlayer", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHeroControllerBase, CursorDistanceToPlayer), METADATA_PARAMS(Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorDistanceToPlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorDistanceToPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorPointDirection_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/PlayerHeroControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorPointDirection = { "CursorPointDirection", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHeroControllerBase, CursorPointDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorPointDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorPointDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_PlayerRef_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/PlayerHeroControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0020080000020035, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHeroControllerBase, PlayerRef), Z_Construct_UClass_APlayerHeroBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_PlayerRef_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_PlayerRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerHeroControllerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_PlayerInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorPointPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorPointVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_MaxCursorDistanceOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorDistanceToPlayerNormalized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorDistanceToPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_CursorPointDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHeroControllerBase_Statics::NewProp_PlayerRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerHeroControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerHeroControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerHeroControllerBase_Statics::ClassParams = {
		&APlayerHeroControllerBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerHeroControllerBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APlayerHeroControllerBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerHeroControllerBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerHeroControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerHeroControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerHeroControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerHeroControllerBase, 3316571721);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<APlayerHeroControllerBase>()
	{
		return APlayerHeroControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerHeroControllerBase(Z_Construct_UClass_APlayerHeroControllerBase, &APlayerHeroControllerBase::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("APlayerHeroControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerHeroControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif