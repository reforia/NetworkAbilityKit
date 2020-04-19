// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef NETWORKABILITYKIT_PlayerHeroControllerBase_generated_h
#error "PlayerHeroControllerBase.generated.h already included, missing '#pragma once' in PlayerHeroControllerBase.h"
#endif
#define NETWORKABILITYKIT_PlayerHeroControllerBase_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_RPC_WRAPPERS \
	virtual void UpdatePlayerCameraOffset_Implementation(); \
	virtual bool CLIENT_PostInitialization_Validate(); \
	virtual void CLIENT_PostInitialization_Implementation(); \
	virtual bool SERVER_PostLogin_Validate(); \
	virtual void SERVER_PostLogin_Implementation(); \
	virtual bool CLIENT_PostLogin_Validate(); \
	virtual void CLIENT_PostLogin_Implementation(); \
 \
	DECLARE_FUNCTION(execEssentialFrameworkInitialization) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_aPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EssentialFrameworkInitialization(Z_Param_aPawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePlayerCameraOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePlayerCameraOffset_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateControlRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateControlRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCursorInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCursorInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCLIENT_PostInitialization) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CLIENT_PostInitialization_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("CLIENT_PostInitialization_Validate")); \
			return; \
		} \
		P_THIS->CLIENT_PostInitialization_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSERVER_PostLogin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SERVER_PostLogin_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("SERVER_PostLogin_Validate")); \
			return; \
		} \
		P_THIS->SERVER_PostLogin_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCLIENT_PostLogin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CLIENT_PostLogin_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("CLIENT_PostLogin_Validate")); \
			return; \
		} \
		P_THIS->CLIENT_PostLogin_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerRefInitialization) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_PossessedPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayerRefInitialization(Z_Param_PossessedPawn); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdatePlayerCameraOffset_Implementation(); \
	virtual bool CLIENT_PostInitialization_Validate(); \
	virtual void CLIENT_PostInitialization_Implementation(); \
	virtual bool SERVER_PostLogin_Validate(); \
	virtual void SERVER_PostLogin_Implementation(); \
	virtual bool CLIENT_PostLogin_Validate(); \
	virtual void CLIENT_PostLogin_Implementation(); \
 \
	DECLARE_FUNCTION(execEssentialFrameworkInitialization) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_aPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EssentialFrameworkInitialization(Z_Param_aPawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePlayerCameraOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePlayerCameraOffset_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateControlRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateControlRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCursorInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCursorInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCLIENT_PostInitialization) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CLIENT_PostInitialization_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("CLIENT_PostInitialization_Validate")); \
			return; \
		} \
		P_THIS->CLIENT_PostInitialization_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSERVER_PostLogin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SERVER_PostLogin_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("SERVER_PostLogin_Validate")); \
			return; \
		} \
		P_THIS->SERVER_PostLogin_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCLIENT_PostLogin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CLIENT_PostLogin_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("CLIENT_PostLogin_Validate")); \
			return; \
		} \
		P_THIS->CLIENT_PostLogin_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerRefInitialization) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_PossessedPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayerRefInitialization(Z_Param_PossessedPawn); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_EVENT_PARMS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_CALLBACK_WRAPPERS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerHeroControllerBase(); \
	friend struct Z_Construct_UClass_APlayerHeroControllerBase_Statics; \
public: \
	DECLARE_CLASS(APlayerHeroControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(APlayerHeroControllerBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerHeroControllerBase(); \
	friend struct Z_Construct_UClass_APlayerHeroControllerBase_Statics; \
public: \
	DECLARE_CLASS(APlayerHeroControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(APlayerHeroControllerBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerHeroControllerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerHeroControllerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerHeroControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerHeroControllerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerHeroControllerBase(APlayerHeroControllerBase&&); \
	NO_API APlayerHeroControllerBase(const APlayerHeroControllerBase&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerHeroControllerBase(APlayerHeroControllerBase&&); \
	NO_API APlayerHeroControllerBase(const APlayerHeroControllerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerHeroControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerHeroControllerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerHeroControllerBase)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerRef() { return STRUCT_OFFSET(APlayerHeroControllerBase, PlayerRef); } \
	FORCEINLINE static uint32 __PPO__CursorPointDirection() { return STRUCT_OFFSET(APlayerHeroControllerBase, CursorPointDirection); } \
	FORCEINLINE static uint32 __PPO__CursorDistanceToPlayer() { return STRUCT_OFFSET(APlayerHeroControllerBase, CursorDistanceToPlayer); } \
	FORCEINLINE static uint32 __PPO__CursorDistanceToPlayerNormalized() { return STRUCT_OFFSET(APlayerHeroControllerBase, CursorDistanceToPlayerNormalized); } \
	FORCEINLINE static uint32 __PPO__MaxCursorDistanceOffset() { return STRUCT_OFFSET(APlayerHeroControllerBase, MaxCursorDistanceOffset); } \
	FORCEINLINE static uint32 __PPO__CursorPointVector() { return STRUCT_OFFSET(APlayerHeroControllerBase, CursorPointVector); } \
	FORCEINLINE static uint32 __PPO__CursorPointPosition() { return STRUCT_OFFSET(APlayerHeroControllerBase, CursorPointPosition); } \
	FORCEINLINE static uint32 __PPO__PlayerInitialized() { return STRUCT_OFFSET(APlayerHeroControllerBase, PlayerInitialized); }


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_15_PROLOG \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_EVENT_PARMS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_INCLASS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_INCLASS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class APlayerHeroControllerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_PlayerHeroControllerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
