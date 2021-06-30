// Copyright Epic Games, Inc. All Rights Reserved.
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

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_SPARSE_DATA
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
	DECLARE_FUNCTION(execMULTICAST_PlayMontage); \
	DECLARE_FUNCTION(execSERVER_DashTowards); \
	DECLARE_FUNCTION(execSERVER_Teleport); \
	DECLARE_FUNCTION(execSERVER_ApplyDamage); \
	DECLARE_FUNCTION(execSERVER_SpawnTrap); \
	DECLARE_FUNCTION(execSERVER_SpawnActor); \
	DECLARE_FUNCTION(execSERVER_SpawnProjectile); \
	DECLARE_FUNCTION(execSERVER_TryActivateAbility);


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
	DECLARE_FUNCTION(execMULTICAST_PlayMontage); \
	DECLARE_FUNCTION(execSERVER_DashTowards); \
	DECLARE_FUNCTION(execSERVER_Teleport); \
	DECLARE_FUNCTION(execSERVER_ApplyDamage); \
	DECLARE_FUNCTION(execSERVER_SpawnTrap); \
	DECLARE_FUNCTION(execSERVER_SpawnActor); \
	DECLARE_FUNCTION(execSERVER_SpawnProjectile); \
	DECLARE_FUNCTION(execSERVER_TryActivateAbility);


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
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_SPARSE_DATA \
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
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityBehaviorCompBase_h_16_SPARSE_DATA \
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
