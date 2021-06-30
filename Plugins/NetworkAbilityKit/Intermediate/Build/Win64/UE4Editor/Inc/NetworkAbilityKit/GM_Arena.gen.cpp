// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/GM_Arena.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGM_Arena() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AGM_Arena_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AGM_Arena();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGM_Arena::execSERVER_SpawnPlayer)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SERVER_SpawnPlayer_Validate(Z_Param_PlayerController))
		{
			RPC_ValidateFailed(TEXT("SERVER_SpawnPlayer_Validate"));
			return;
		}
		P_THIS->SERVER_SpawnPlayer_Implementation(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	static FName NAME_AGM_Arena_SERVER_SpawnPlayer = FName(TEXT("SERVER_SpawnPlayer"));
	void AGM_Arena::SERVER_SpawnPlayer(APlayerController* PlayerController)
	{
		GM_Arena_eventSERVER_SpawnPlayer_Parms Parms;
		Parms.PlayerController=PlayerController;
		ProcessEvent(FindFunctionChecked(NAME_AGM_Arena_SERVER_SpawnPlayer),&Parms);
	}
	void AGM_Arena::StaticRegisterNativesAGM_Arena()
	{
		UClass* Class = AGM_Arena::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SERVER_SpawnPlayer", &AGM_Arena::execSERVER_SpawnPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGM_Arena_SERVER_SpawnPlayer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGM_Arena_SERVER_SpawnPlayer_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GM_Arena_eventSERVER_SpawnPlayer_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGM_Arena_SERVER_SpawnPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGM_Arena_SERVER_SpawnPlayer_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGM_Arena_SERVER_SpawnPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawn Player" },
		{ "ModuleRelativePath", "Public/GM_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGM_Arena_SERVER_SpawnPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGM_Arena, nullptr, "SERVER_SpawnPlayer", nullptr, nullptr, sizeof(GM_Arena_eventSERVER_SpawnPlayer_Parms), Z_Construct_UFunction_AGM_Arena_SERVER_SpawnPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGM_Arena_SERVER_SpawnPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGM_Arena_SERVER_SpawnPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGM_Arena_SERVER_SpawnPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGM_Arena_SERVER_SpawnPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGM_Arena_SERVER_SpawnPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGM_Arena_NoRegister()
	{
		return AGM_Arena::StaticClass();
	}
	struct Z_Construct_UClass_AGM_Arena_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGM_Arena_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGM_Arena_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGM_Arena_SERVER_SpawnPlayer, "SERVER_SpawnPlayer" }, // 1440486662
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_Arena_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n *///UENUM(BlueprintType)\n//enum class EGameModeState : uint8\n//{\n//\x09GMS_MainMenu\x09\x09\x09UMETA(DisplayName = \"InMainMenu\"),\n//\x09GMS_InLobby\x09\x09\x09\x09UMETA(DisplayName = \"InLobby\"),\n//\x09GMS_PreGame \x09\x09\x09UMETA(DisplayName = \"OnPreGame\"),\n//\x09GMS_GameInProgress \x09\x09UMETA(DisplayName = \"GameInProgress\"),\n//\x09GMS_PostGame \x09\x09\x09UMETA(DisplayName = \"OnPostGame\"),\n//\x09GMS_EndGame \x09\x09\x09UMETA(DisplayName = \"OnEndGame\")\n//};\n" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GM_Arena.h" },
		{ "ModuleRelativePath", "Public/GM_Arena.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "//UENUM(BlueprintType)\n//enum class EGameModeState : uint8\n//{\n//     GMS_MainMenu                    UMETA(DisplayName = \"InMainMenu\"),\n//     GMS_InLobby                             UMETA(DisplayName = \"InLobby\"),\n//     GMS_PreGame                     UMETA(DisplayName = \"OnPreGame\"),\n//     GMS_GameInProgress              UMETA(DisplayName = \"GameInProgress\"),\n//     GMS_PostGame                    UMETA(DisplayName = \"OnPostGame\"),\n//     GMS_EndGame                     UMETA(DisplayName = \"OnEndGame\")\n//};" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGM_Arena_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_Arena>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGM_Arena_Statics::ClassParams = {
		&AGM_Arena::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGM_Arena_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Arena_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGM_Arena()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGM_Arena_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGM_Arena, 2985405757);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<AGM_Arena>()
	{
		return AGM_Arena::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGM_Arena(Z_Construct_UClass_AGM_Arena, &AGM_Arena::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("AGM_Arena"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGM_Arena);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
