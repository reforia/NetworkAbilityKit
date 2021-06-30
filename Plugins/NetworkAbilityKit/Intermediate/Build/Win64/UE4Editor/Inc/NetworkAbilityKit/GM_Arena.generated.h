// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef NETWORKABILITYKIT_GM_Arena_generated_h
#error "GM_Arena.generated.h already included, missing '#pragma once' in GM_Arena.h"
#endif
#define NETWORKABILITYKIT_GM_Arena_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_SPARSE_DATA
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_RPC_WRAPPERS \
	virtual bool SERVER_SpawnPlayer_Validate(APlayerController* ); \
	virtual void SERVER_SpawnPlayer_Implementation(APlayerController* PlayerController); \
 \
	DECLARE_FUNCTION(execSERVER_SpawnPlayer);


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool SERVER_SpawnPlayer_Validate(APlayerController* ); \
	virtual void SERVER_SpawnPlayer_Implementation(APlayerController* PlayerController); \
 \
	DECLARE_FUNCTION(execSERVER_SpawnPlayer);


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_EVENT_PARMS \
	struct GM_Arena_eventSERVER_SpawnPlayer_Parms \
	{ \
		APlayerController* PlayerController; \
	};


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_CALLBACK_WRAPPERS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGM_Arena(); \
	friend struct Z_Construct_UClass_AGM_Arena_Statics; \
public: \
	DECLARE_CLASS(AGM_Arena, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AGM_Arena)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAGM_Arena(); \
	friend struct Z_Construct_UClass_AGM_Arena_Statics; \
public: \
	DECLARE_CLASS(AGM_Arena, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AGM_Arena)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGM_Arena(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGM_Arena) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGM_Arena); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGM_Arena); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGM_Arena(AGM_Arena&&); \
	NO_API AGM_Arena(const AGM_Arena&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGM_Arena(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGM_Arena(AGM_Arena&&); \
	NO_API AGM_Arena(const AGM_Arena&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGM_Arena); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGM_Arena); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGM_Arena)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_PRIVATE_PROPERTY_OFFSET
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_24_PROLOG \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_EVENT_PARMS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_SPARSE_DATA \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_INCLASS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_SPARSE_DATA \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_INCLASS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class AGM_Arena>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_GM_Arena_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
