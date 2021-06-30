// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/AbilityBehaviorCompBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityBehaviorCompBase() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UAbilityBehaviorCompBase_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_UAbilityBehaviorCompBase();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AAbilityBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAbilityBehaviorCompBase::execMULTICAST_PlayMontage)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComp);
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->MULTICAST_PlayMontage_Validate(Z_Param_SkeletalMeshComp,Z_Param_MontageToPlay))
		{
			RPC_ValidateFailed(TEXT("MULTICAST_PlayMontage_Validate"));
			return;
		}
		P_THIS->MULTICAST_PlayMontage_Implementation(Z_Param_SkeletalMeshComp,Z_Param_MontageToPlay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityBehaviorCompBase::execSERVER_DashTowards)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorToDash);
		P_GET_STRUCT(FVector,Z_Param_DashVector);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Velocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SERVER_DashTowards_Validate(Z_Param_ActorToDash,Z_Param_DashVector,Z_Param_Velocity))
		{
			RPC_ValidateFailed(TEXT("SERVER_DashTowards_Validate"));
			return;
		}
		P_THIS->SERVER_DashTowards_Implementation(Z_Param_ActorToDash,Z_Param_DashVector,Z_Param_Velocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityBehaviorCompBase::execSERVER_Teleport)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorToTeleport);
		P_GET_STRUCT(FVector,Z_Param_TeleportLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SERVER_Teleport_Validate(Z_Param_ActorToTeleport,Z_Param_TeleportLocation))
		{
			RPC_ValidateFailed(TEXT("SERVER_Teleport_Validate"));
			return;
		}
		P_THIS->SERVER_Teleport_Implementation(Z_Param_ActorToTeleport,Z_Param_TeleportLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityBehaviorCompBase::execSERVER_ApplyDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_GET_OBJECT(AController,Z_Param_EventInstigator);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SERVER_ApplyDamage_Validate(Z_Param_DamagedActor,Z_Param_DamageAmount,Z_Param_EventInstigator,Z_Param_DamageCauser))
		{
			RPC_ValidateFailed(TEXT("SERVER_ApplyDamage_Validate"));
			return;
		}
		P_THIS->SERVER_ApplyDamage_Implementation(Z_Param_DamagedActor,Z_Param_DamageAmount,Z_Param_EventInstigator,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityBehaviorCompBase::execSERVER_SpawnTrap)
	{
		P_GET_OBJECT(UClass,Z_Param_TrapClass);
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SERVER_SpawnTrap_Validate(Z_Param_TrapClass,Z_Param_SpawnLocation))
		{
			RPC_ValidateFailed(TEXT("SERVER_SpawnTrap_Validate"));
			return;
		}
		P_THIS->SERVER_SpawnTrap_Implementation(Z_Param_TrapClass,Z_Param_SpawnLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityBehaviorCompBase::execSERVER_SpawnActor)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SERVER_SpawnActor_Validate(Z_Param_ActorClass,Z_Param_SpawnLocation))
		{
			RPC_ValidateFailed(TEXT("SERVER_SpawnActor_Validate"));
			return;
		}
		P_THIS->SERVER_SpawnActor_Implementation(Z_Param_ActorClass,Z_Param_SpawnLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityBehaviorCompBase::execSERVER_SpawnProjectile)
	{
		P_GET_OBJECT(UClass,Z_Param_ProjectileClass);
		P_GET_STRUCT(FVector,Z_Param_ForwardVector);
		P_GET_STRUCT(FRotator,Z_Param_DesiredRotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpawningForwardBias);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SERVER_SpawnProjectile_Validate(Z_Param_ProjectileClass,Z_Param_ForwardVector,Z_Param_DesiredRotation,Z_Param_SpawningForwardBias))
		{
			RPC_ValidateFailed(TEXT("SERVER_SpawnProjectile_Validate"));
			return;
		}
		P_THIS->SERVER_SpawnProjectile_Implementation(Z_Param_ProjectileClass,Z_Param_ForwardVector,Z_Param_DesiredRotation,Z_Param_SpawningForwardBias);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityBehaviorCompBase::execSERVER_TryActivateAbility)
	{
		P_GET_OBJECT(AAbilityBase,Z_Param_Ability);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SERVER_TryActivateAbility_Validate(Z_Param_Ability))
		{
			RPC_ValidateFailed(TEXT("SERVER_TryActivateAbility_Validate"));
			return;
		}
		P_THIS->SERVER_TryActivateAbility_Implementation(Z_Param_Ability);
		P_NATIVE_END;
	}
	static FName NAME_UAbilityBehaviorCompBase_MULTICAST_PlayMontage = FName(TEXT("MULTICAST_PlayMontage"));
	void UAbilityBehaviorCompBase::MULTICAST_PlayMontage(USkeletalMeshComponent* SkeletalMeshComp, UAnimMontage* MontageToPlay)
	{
		AbilityBehaviorCompBase_eventMULTICAST_PlayMontage_Parms Parms;
		Parms.SkeletalMeshComp=SkeletalMeshComp;
		Parms.MontageToPlay=MontageToPlay;
		ProcessEvent(FindFunctionChecked(NAME_UAbilityBehaviorCompBase_MULTICAST_PlayMontage),&Parms);
	}
	static FName NAME_UAbilityBehaviorCompBase_SERVER_ApplyDamage = FName(TEXT("SERVER_ApplyDamage"));
	void UAbilityBehaviorCompBase::SERVER_ApplyDamage(AActor* DamagedActor, float DamageAmount, AController* EventInstigator, AActor* DamageCauser)
	{
		AbilityBehaviorCompBase_eventSERVER_ApplyDamage_Parms Parms;
		Parms.DamagedActor=DamagedActor;
		Parms.DamageAmount=DamageAmount;
		Parms.EventInstigator=EventInstigator;
		Parms.DamageCauser=DamageCauser;
		ProcessEvent(FindFunctionChecked(NAME_UAbilityBehaviorCompBase_SERVER_ApplyDamage),&Parms);
	}
	static FName NAME_UAbilityBehaviorCompBase_SERVER_DashTowards = FName(TEXT("SERVER_DashTowards"));
	void UAbilityBehaviorCompBase::SERVER_DashTowards(AActor* ActorToDash, FVector DashVector, float Velocity)
	{
		AbilityBehaviorCompBase_eventSERVER_DashTowards_Parms Parms;
		Parms.ActorToDash=ActorToDash;
		Parms.DashVector=DashVector;
		Parms.Velocity=Velocity;
		ProcessEvent(FindFunctionChecked(NAME_UAbilityBehaviorCompBase_SERVER_DashTowards),&Parms);
	}
	static FName NAME_UAbilityBehaviorCompBase_SERVER_SpawnActor = FName(TEXT("SERVER_SpawnActor"));
	void UAbilityBehaviorCompBase::SERVER_SpawnActor(TSubclassOf<AActor>  ActorClass, FVector SpawnLocation)
	{
		AbilityBehaviorCompBase_eventSERVER_SpawnActor_Parms Parms;
		Parms.ActorClass=ActorClass;
		Parms.SpawnLocation=SpawnLocation;
		ProcessEvent(FindFunctionChecked(NAME_UAbilityBehaviorCompBase_SERVER_SpawnActor),&Parms);
	}
	static FName NAME_UAbilityBehaviorCompBase_SERVER_SpawnProjectile = FName(TEXT("SERVER_SpawnProjectile"));
	void UAbilityBehaviorCompBase::SERVER_SpawnProjectile(TSubclassOf<AActor>  ProjectileClass, FVector ForwardVector, FRotator DesiredRotation, float SpawningForwardBias)
	{
		AbilityBehaviorCompBase_eventSERVER_SpawnProjectile_Parms Parms;
		Parms.ProjectileClass=ProjectileClass;
		Parms.ForwardVector=ForwardVector;
		Parms.DesiredRotation=DesiredRotation;
		Parms.SpawningForwardBias=SpawningForwardBias;
		ProcessEvent(FindFunctionChecked(NAME_UAbilityBehaviorCompBase_SERVER_SpawnProjectile),&Parms);
	}
	static FName NAME_UAbilityBehaviorCompBase_SERVER_SpawnTrap = FName(TEXT("SERVER_SpawnTrap"));
	void UAbilityBehaviorCompBase::SERVER_SpawnTrap(TSubclassOf<AActor>  TrapClass, FVector SpawnLocation)
	{
		AbilityBehaviorCompBase_eventSERVER_SpawnTrap_Parms Parms;
		Parms.TrapClass=TrapClass;
		Parms.SpawnLocation=SpawnLocation;
		ProcessEvent(FindFunctionChecked(NAME_UAbilityBehaviorCompBase_SERVER_SpawnTrap),&Parms);
	}
	static FName NAME_UAbilityBehaviorCompBase_SERVER_Teleport = FName(TEXT("SERVER_Teleport"));
	void UAbilityBehaviorCompBase::SERVER_Teleport(AActor* ActorToTeleport, FVector TeleportLocation)
	{
		AbilityBehaviorCompBase_eventSERVER_Teleport_Parms Parms;
		Parms.ActorToTeleport=ActorToTeleport;
		Parms.TeleportLocation=TeleportLocation;
		ProcessEvent(FindFunctionChecked(NAME_UAbilityBehaviorCompBase_SERVER_Teleport),&Parms);
	}
	static FName NAME_UAbilityBehaviorCompBase_SERVER_TryActivateAbility = FName(TEXT("SERVER_TryActivateAbility"));
	void UAbilityBehaviorCompBase::SERVER_TryActivateAbility(AAbilityBase* Ability)
	{
		AbilityBehaviorCompBase_eventSERVER_TryActivateAbility_Parms Parms;
		Parms.Ability=Ability;
		ProcessEvent(FindFunctionChecked(NAME_UAbilityBehaviorCompBase_SERVER_TryActivateAbility),&Parms);
	}
	void UAbilityBehaviorCompBase::StaticRegisterNativesUAbilityBehaviorCompBase()
	{
		UClass* Class = UAbilityBehaviorCompBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MULTICAST_PlayMontage", &UAbilityBehaviorCompBase::execMULTICAST_PlayMontage },
			{ "SERVER_ApplyDamage", &UAbilityBehaviorCompBase::execSERVER_ApplyDamage },
			{ "SERVER_DashTowards", &UAbilityBehaviorCompBase::execSERVER_DashTowards },
			{ "SERVER_SpawnActor", &UAbilityBehaviorCompBase::execSERVER_SpawnActor },
			{ "SERVER_SpawnProjectile", &UAbilityBehaviorCompBase::execSERVER_SpawnProjectile },
			{ "SERVER_SpawnTrap", &UAbilityBehaviorCompBase::execSERVER_SpawnTrap },
			{ "SERVER_Teleport", &UAbilityBehaviorCompBase::execSERVER_Teleport },
			{ "SERVER_TryActivateAbility", &UAbilityBehaviorCompBase::execSERVER_TryActivateAbility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::NewProp_SkeletalMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::NewProp_SkeletalMeshComp = { "SkeletalMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventMULTICAST_PlayMontage_Parms, SkeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::NewProp_SkeletalMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::NewProp_SkeletalMeshComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventMULTICAST_PlayMontage_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::NewProp_SkeletalMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::NewProp_MontageToPlay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/AbilityBehaviorCompBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityBehaviorCompBase, nullptr, "MULTICAST_PlayMontage", nullptr, nullptr, sizeof(AbilityBehaviorCompBase_eventMULTICAST_PlayMontage_Parms), Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_ApplyDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_ApplyDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_ApplyDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_ApplyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::NewProp_DamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/AbilityBehaviorCompBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityBehaviorCompBase, nullptr, "SERVER_ApplyDamage", nullptr, nullptr, sizeof(AbilityBehaviorCompBase_eventSERVER_ApplyDamage_Parms), Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToDash;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DashVector;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::NewProp_ActorToDash = { "ActorToDash", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_DashTowards_Parms, ActorToDash), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::NewProp_DashVector = { "DashVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_DashTowards_Parms, DashVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_DashTowards_Parms, Velocity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::NewProp_ActorToDash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::NewProp_DashVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::NewProp_Velocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "CPP_Default_Velocity", "1000.000000" },
		{ "ModuleRelativePath", "Public/AbilityBehaviorCompBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityBehaviorCompBase, nullptr, "SERVER_DashTowards", nullptr, nullptr, sizeof(AbilityBehaviorCompBase_eventSERVER_DashTowards_Parms), Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_SpawnActor_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_SpawnActor_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::NewProp_SpawnLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/AbilityBehaviorCompBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityBehaviorCompBase, nullptr, "SERVER_SpawnActor", nullptr, nullptr, sizeof(AbilityBehaviorCompBase_eventSERVER_SpawnActor_Parms), Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredRotation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawningForwardBias;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_SpawnProjectile_Parms, ProjectileClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_SpawnProjectile_Parms, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::NewProp_DesiredRotation = { "DesiredRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_SpawnProjectile_Parms, DesiredRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::NewProp_SpawningForwardBias = { "SpawningForwardBias", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_SpawnProjectile_Parms, SpawningForwardBias), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::NewProp_ForwardVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::NewProp_DesiredRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::NewProp_SpawningForwardBias,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "CPP_Default_SpawningForwardBias", "100.000000" },
		{ "ModuleRelativePath", "Public/AbilityBehaviorCompBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityBehaviorCompBase, nullptr, "SERVER_SpawnProjectile", nullptr, nullptr, sizeof(AbilityBehaviorCompBase_eventSERVER_SpawnProjectile_Parms), Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TrapClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::NewProp_TrapClass = { "TrapClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_SpawnTrap_Parms, TrapClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_SpawnTrap_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::NewProp_TrapClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::NewProp_SpawnLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/AbilityBehaviorCompBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityBehaviorCompBase, nullptr, "SERVER_SpawnTrap", nullptr, nullptr, sizeof(AbilityBehaviorCompBase_eventSERVER_SpawnTrap_Parms), Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToTeleport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeleportLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::NewProp_ActorToTeleport = { "ActorToTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_Teleport_Parms, ActorToTeleport), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::NewProp_TeleportLocation = { "TeleportLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_Teleport_Parms, TeleportLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::NewProp_ActorToTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::NewProp_TeleportLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/AbilityBehaviorCompBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityBehaviorCompBase, nullptr, "SERVER_Teleport", nullptr, nullptr, sizeof(AbilityBehaviorCompBase_eventSERVER_Teleport_Parms), Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_TryActivateAbility_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_TryActivateAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_TryActivateAbility_Parms, Ability), Z_Construct_UClass_AAbilityBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_TryActivateAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_TryActivateAbility_Statics::NewProp_Ability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_TryActivateAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/AbilityBehaviorCompBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_TryActivateAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityBehaviorCompBase, nullptr, "SERVER_TryActivateAbility", nullptr, nullptr, sizeof(AbilityBehaviorCompBase_eventSERVER_TryActivateAbility_Parms), Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_TryActivateAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_TryActivateAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_TryActivateAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_TryActivateAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_TryActivateAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_TryActivateAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAbilityBehaviorCompBase_NoRegister()
	{
		return UAbilityBehaviorCompBase::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityBehaviorCompBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityBehaviorCompBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityBehaviorCompBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage, "MULTICAST_PlayMontage" }, // 1591057346
		{ &Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage, "SERVER_ApplyDamage" }, // 2575082744
		{ &Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards, "SERVER_DashTowards" }, // 1255901184
		{ &Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor, "SERVER_SpawnActor" }, // 3523932100
		{ &Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile, "SERVER_SpawnProjectile" }, // 776761730
		{ &Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap, "SERVER_SpawnTrap" }, // 3789053131
		{ &Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport, "SERVER_Teleport" }, // 3878841855
		{ &Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_TryActivateAbility, "SERVER_TryActivateAbility" }, // 1029226360
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityBehaviorCompBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AbilityBehaviorCompBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilityBehaviorCompBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityBehaviorCompBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityBehaviorCompBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbilityBehaviorCompBase_Statics::ClassParams = {
		&UAbilityBehaviorCompBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityBehaviorCompBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityBehaviorCompBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityBehaviorCompBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbilityBehaviorCompBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbilityBehaviorCompBase, 2393329802);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<UAbilityBehaviorCompBase>()
	{
		return UAbilityBehaviorCompBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbilityBehaviorCompBase(Z_Construct_UClass_UAbilityBehaviorCompBase, &UAbilityBehaviorCompBase::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("UAbilityBehaviorCompBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityBehaviorCompBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
