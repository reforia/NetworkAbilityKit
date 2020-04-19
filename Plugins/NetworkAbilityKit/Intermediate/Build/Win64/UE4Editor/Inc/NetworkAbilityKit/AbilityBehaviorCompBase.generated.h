// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
class UAnimMontage;
class AActor;
struct FVector;
class AController;
struct FRotator;
class AAbilityBase;
#ifdef NETWORKABILITYKIT_AbilityBehaviorCompBase_generated_h
#error "AbilityBehaviorCompBase.generated.h already included, missing '#pragma once' in AbilityBehaviorCompBase.h"
#endif
#define NETWORKABILITYKIT_AbilityBehaviorCompBase_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_RPC_WRAPPERS \
	virtual bool MULTICAST_PlayMontage_Validate(USkeletalMeshComponent* , UAnimMontage* ); \
	virtual void MULTICAST_PlayMontage_Implementation(USkeletalMeshComponent* SkeletalMeshComp, UAnimMontage* MontageToPlay); \
	virtual bool SERVER_DashTowards_Validate(AActor* , FVector , float ); \
	virtual void SERVER_DashTowards_Implementation(AActor* ActorToDash, FVector DashVector, float Velocity); \
	virtual bool SERVER_Teleport_Validate(AActor* , FVector ); \
	virtual void SERVER_Teleport_Implementation(AActor* ActorToTeleport, FVector TeleportLocation); \
	virtual bool SERVER_ApplyDamage_Validate(AActor* , float , AController* , AActor* ); \
	virtual void SERVER_ApplyDamage_Implementation(AActor* DamagedActor, float DamageAmount, AController* EventInstigator, AActor* DamageCauser); \
	virtual bool SERVER_SpawnTrap_Validate(TSubclassOf<AActor>  , FVector ); \
	virtual void SERVER_SpawnTrap_Implementation(TSubclassOf<AActor>  TrapClass, FVector SpawnLocation); \
	virtual bool SERVER_SpawnActor_Validate(TSubclassOf<AActor>  , FVector ); \
	virtual void SERVER_SpawnActor_Implementation(TSubclassOf<AActor>  ActorClass, FVector SpawnLocation); \
	virtual bool SERVER_SpawnProjectile_Validate(TSubclassOf<AActor>  , FVector , FRotator , float ); \
	virtual void SERVER_SpawnProjectile_Implementation(TSubclassOf<AActor>  ProjectileClass, FVector ForwardVector, FRotator DesiredRotation, float SpawningForwardBias); \
	virtual bool SERVER_TryActivateAbility_Validate(AAbilityBase* ); \
	virtual void SERVER_TryActivateAbility_Implementation(AAbilityBase* Ability); \
 \
	DECLARE_FUNCTION(execMULTICAST_PlayMontage) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComp); \
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MULTICAST_PlayMontage_Validate(Z_Param_SkeletalMeshComp,Z_Param_MontageToPlay)) \
		{ \
			RPC_ValidateFailed(TEXT("MULTICAST_PlayMontage_Validate")); \
			return; \
		} \
		P_THIS->MULTICAST_PlayMontage_Implementation(Z_Param_SkeletalMeshComp,Z_Param_MontageToPlay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSERVER_DashTowards) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToDash); \
		P_GET_STRUCT(FVector,Z_Param_DashVector); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Velocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SERVER_DashTowards_Validate(Z_Param_ActorToDash,Z_Param_DashVector,Z_Param_Velocity)) \
		{ \
			RPC_ValidateFailed(TEXT("SERVER_DashTowards_Validate")); \
			return; \
		} \
		P_THIS->SERVER_DashTowards_Implementation(Z_Param_ActorToDash,Z_Param_DashVector,Z_Param_Velocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSERVER_Teleport) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToTeleport); \
		P_GET_STRUCT(FVector,Z_Param_TeleportLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SERVER_Teleport_Validate(Z_Param_ActorToTeleport,Z_Param_TeleportLocation)) \
		{ \
			RPC_ValidateFailed(TEXT("SERVER_Teleport_Validate")); \
			return; \
		} \
		P_THIS->SERVER_Teleport_Implementation(Z_Param_ActorToTeleport,Z_Param_TeleportLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSERVER_ApplyDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageAmount); \
		P_GET_OBJECT(AController,Z_Param_EventInstigator); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SERVER_ApplyDamage_Validate(Z_Param_DamagedActor,Z_Param_DamageAmount,Z_Param_EventInstigator,Z_Param_DamageCauser)) \
		{ \
			RPC_ValidateFailed(TEXT("SERVER_ApplyDamage_Validate")); \
			return; \
		} \
		P_THIS->SERVER_ApplyDamage_Implementation(Z_Param_DamagedActor,Z_Param_DamageAmount,Z_Param_EventInstigator,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSERVER_SpawnTrap) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_TrapClass); \
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SERVER_SpawnTrap_Validate(Z_Param_TrapClass,Z_Param_SpawnLocation)) \
		{ \
			RPC_ValidateFailed(TEXT("SERVER_SpawnTrap_Validate")); \
			return; \
		} \
		P_THIS->SERVER_SpawnTrap_Implementation(Z_Param_TrapClass,Z_Param_SpawnLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSERVER_SpawnActor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SERVER_SpawnActor_Validate(Z_Param_ActorClass,Z_Param_SpawnLocation)) \
		{ \
			RPC_ValidateFailed(TEXT("SERVER_SpawnActor_Validate")); \
			return; \
		} \
		P_THIS->SERVER_SpawnActor_Implementation(Z_Param_ActorClass,Z_Param_SpawnLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSERVER_SpawnProjectile) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ProjectileClass); \
		P_GET_STRUCT(FVector,Z_Param_ForwardVector); \
		P_GET_STRUCT(FRotator,Z_Param_DesiredRotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SpawningForwardBias); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SERVER_SpawnProjectile_Validate(Z_Param_ProjectileClass,Z_Param_ForwardVector,Z_Param_DesiredRotation,Z_Param_SpawningForwardBias)) \
		{ \
			RPC_ValidateFailed(TEXT("SERVER_SpawnProjectile_Validate")); \
			return; \
		} \
		P_THIS->SERVER_SpawnProjectile_Implementation(Z_Param_ProjectileClass,Z_Param_ForwardVector,Z_Param_DesiredRotation,Z_Param_SpawningForwardBias); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSERVER_TryActivateAbility) \
	{ \
		P_GET_OBJECT(AAbilityBase,Z_Param_Ability); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SERVER_TryActivateAbility_Validate(Z_Param_Ability)) \
		{ \
			RPC_ValidateFailed(TEXT("SERVER_TryActivateAbility_Validate")); \
			return; \
		} \
		P_THIS->SERVER_TryActivateAbility_Implementation(Z_Param_Ability); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool MULTICAST_PlayMontage_Validate(USkeletalMeshComponent* , UAnimMontage* ); \
	virtual void MULTICAST_PlayMontage_Implementation(USkeletalMeshComponent* SkeletalMeshComp, UAnimMontage* MontageToPlay); \
	virtual bool SERVER_DashTowards_Validate(AActor* , FVector , float ); \
	virtual void SERVER_DashTowards_Implementation(AActor* ActorToDash, FVector DashVector, float Velocity); \
	virtual bool SERVER_Teleport_Validate(AActor* , FVector ); \
	virtual void SERVER_Teleport_Implementation(AActor* ActorToTeleport, FVector TeleportLocation); \
	virtual bool SERVER_ApplyDamage_Validate(AActor* , float , AController* , AActor* ); \
	virtual void SERVER_ApplyDamage_Implementation(AActor* DamagedActor, float DamageAmount, AController* EventInstigator, AActor* DamageCauser); \
	virtual bool SERVER_SpawnTrap_Validate(TSubclassOf<AActor>  , FVector ); \
	virtual void SERVER_SpawnTrap_Implementation(TSubclassOf<AActor>  TrapClass, FVector SpawnLocation); \
	virtual bool SERVER_SpawnActor_Validate(TSubclassOf<AActor>  , FVector ); \
	virtual void SERVER_SpawnActor_Implementation(TSubclassOf<AActor>  ActorClass, FVector SpawnLocation); \
	virtual bool SERVER_SpawnProjectile_Validate(TSubclassOf<AActor>  , FVector , FRotator , float ); \
	virtual void SERVER_SpawnProjectile_Implementation(TSubclassOf<AActor>  ProjectileClass, FVector ForwardVector, FRotator DesiredRotation, float SpawningForwardBias); \
	virtual bool SERVER_TryActivateAbility_Validate(AAbilityBase* ); \
	virtual void SERVER_TryActivateAbility_Implementation(AAbilityBase* Ability); \
 \
	DECLARE_FUNCTION(execMULTICAST_PlayMontage) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComp); \
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MULTICAST_PlayMontage_Validate(Z_Param_SkeletalMeshComp,Z_Param_MontageToPlay)) \
		{ \
			RPC_ValidateFailed(TEXT("MULTICAST_PlayMontage_Validate")); \
			return; \
		} \
		P_THIS->MULTICAST_PlayMontage_Implementation(Z_Param_SkeletalMeshComp,Z_Param_MontageToPlay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSERVER_DashTowards) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToDash); \
		P_GET_STRUCT(FVector,Z_Param_DashVector); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Velocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SERVER_DashTowards_Validate(Z_Param_ActorToDash,Z_Param_DashVector,Z_Param_Velocity)) \
		{ \
			RPC_ValidateFailed(TEXT("SERVER_DashTowards_Validate")); \
			return; \
		} \
		P_THIS->SERVER_DashTowards_Implementation(Z_Param_ActorToDash,Z_Param_DashVector,Z_Param_Velocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSERVER_Teleport) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToTeleport); \
		P_GET_STRUCT(FVector,Z_Param_TeleportLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SERVER_Teleport_Validate(Z_Param_ActorToTeleport,Z_Param_TeleportLocation)) \
		{ \
			RPC_ValidateFailed(TEXT("SERVER_Teleport_Validate")); \
			return; \
		} \
		P_THIS->SERVER_Teleport_Implementation(Z_Param_ActorToTeleport,Z_Param_TeleportLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSERVER_ApplyDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageAmount); \
		P_GET_OBJECT(AController,Z_Param_EventInstigator); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SERVER_ApplyDamage_Validate(Z_Param_DamagedActor,Z_Param_DamageAmount,Z_Param_EventInstigator,Z_Param_DamageCauser)) \
		{ \
			RPC_ValidateFailed(TEXT("SERVER_ApplyDamage_Validate")); \
			return; \
		} \
		P_THIS->SERVER_ApplyDamage_Implementation(Z_Param_DamagedActor,Z_Param_DamageAmount,Z_Param_EventInstigator,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSERVER_SpawnTrap) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_TrapClass); \
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SERVER_SpawnTrap_Validate(Z_Param_TrapClass,Z_Param_SpawnLocation)) \
		{ \
			RPC_ValidateFailed(TEXT("SERVER_SpawnTrap_Validate")); \
			return; \
		} \
		P_THIS->SERVER_SpawnTrap_Implementation(Z_Param_TrapClass,Z_Param_SpawnLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSERVER_SpawnActor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SERVER_SpawnActor_Validate(Z_Param_ActorClass,Z_Param_SpawnLocation)) \
		{ \
			RPC_ValidateFailed(TEXT("SERVER_SpawnActor_Validate")); \
			return; \
		} \
		P_THIS->SERVER_SpawnActor_Implementation(Z_Param_ActorClass,Z_Param_SpawnLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSERVER_SpawnProjectile) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ProjectileClass); \
		P_GET_STRUCT(FVector,Z_Param_ForwardVector); \
		P_GET_STRUCT(FRotator,Z_Param_DesiredRotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SpawningForwardBias); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SERVER_SpawnProjectile_Validate(Z_Param_ProjectileClass,Z_Param_ForwardVector,Z_Param_DesiredRotation,Z_Param_SpawningForwardBias)) \
		{ \
			RPC_ValidateFailed(TEXT("SERVER_SpawnProjectile_Validate")); \
			return; \
		} \
		P_THIS->SERVER_SpawnProjectile_Implementation(Z_Param_ProjectileClass,Z_Param_ForwardVector,Z_Param_DesiredRotation,Z_Param_SpawningForwardBias); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSERVER_TryActivateAbility) \
	{ \
		P_GET_OBJECT(AAbilityBase,Z_Param_Ability); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SERVER_TryActivateAbility_Validate(Z_Param_Ability)) \
		{ \
			RPC_ValidateFailed(TEXT("SERVER_TryActivateAbility_Validate")); \
			return; \
		} \
		P_THIS->SERVER_TryActivateAbility_Implementation(Z_Param_Ability); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_EVENT_PARMS \
	struct AbilityBehaviorCompBase_eventMULTICAST_PlayMontage_Parms \
	{ \
		USkeletalMeshComponent* SkeletalMeshComp; \
		UAnimMontage* MontageToPlay; \
	}; \
	struct AbilityBehaviorCompBase_eventSERVER_ApplyDamage_Parms \
	{ \
		AActor* DamagedActor; \
		float DamageAmount; \
		AController* EventInstigator; \
		AActor* DamageCauser; \
	}; \
	struct AbilityBehaviorCompBase_eventSERVER_DashTowards_Parms \
	{ \
		AActor* ActorToDash; \
		FVector DashVector; \
		float Velocity; \
	}; \
	struct AbilityBehaviorCompBase_eventSERVER_SpawnActor_Parms \
	{ \
		TSubclassOf<AActor>  ActorClass; \
		FVector SpawnLocation; \
	}; \
	struct AbilityBehaviorCompBase_eventSERVER_SpawnProjectile_Parms \
	{ \
		TSubclassOf<AActor>  ProjectileClass; \
		FVector ForwardVector; \
		FRotator DesiredRotation; \
		float SpawningForwardBias; \
	}; \
	struct AbilityBehaviorCompBase_eventSERVER_SpawnTrap_Parms \
	{ \
		TSubclassOf<AActor>  TrapClass; \
		FVector SpawnLocation; \
	}; \
	struct AbilityBehaviorCompBase_eventSERVER_Teleport_Parms \
	{ \
		AActor* ActorToTeleport; \
		FVector TeleportLocation; \
	}; \
	struct AbilityBehaviorCompBase_eventSERVER_TryActivateAbility_Parms \
	{ \
		AAbilityBase* Ability; \
	};


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_CALLBACK_WRAPPERS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityBehaviorCompBase(); \
	friend struct Z_Construct_UClass_UAbilityBehaviorCompBase_Statics; \
public: \
	DECLARE_CLASS(UAbilityBehaviorCompBase, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(UAbilityBehaviorCompBase)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityBehaviorCompBase(); \
	friend struct Z_Construct_UClass_UAbilityBehaviorCompBase_Statics; \
public: \
	DECLARE_CLASS(UAbilityBehaviorCompBase, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(UAbilityBehaviorCompBase)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityBehaviorCompBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityBehaviorCompBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityBehaviorCompBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityBehaviorCompBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityBehaviorCompBase(UAbilityBehaviorCompBase&&); \
	NO_API UAbilityBehaviorCompBase(const UAbilityBehaviorCompBase&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityBehaviorCompBase(UAbilityBehaviorCompBase&&); \
	NO_API UAbilityBehaviorCompBase(const UAbilityBehaviorCompBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityBehaviorCompBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityBehaviorCompBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilityBehaviorCompBase)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_PRIVATE_PROPERTY_OFFSET
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_13_PROLOG \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_EVENT_PARMS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_INCLASS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_INCLASS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class UAbilityBehaviorCompBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
