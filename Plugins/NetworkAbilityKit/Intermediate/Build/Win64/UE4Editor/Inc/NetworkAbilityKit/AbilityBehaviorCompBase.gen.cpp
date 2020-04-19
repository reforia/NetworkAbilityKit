// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_TryActivateAbility();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AAbilityBase_NoRegister();
// End Cross Module References
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
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventMULTICAST_PlayMontage_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::NewProp_SkeletalMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::NewProp_SkeletalMeshComp = { "SkeletalMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventMULTICAST_PlayMontage_Parms, SkeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::NewProp_SkeletalMeshComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::NewProp_SkeletalMeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::NewProp_MontageToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::NewProp_SkeletalMeshComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/AbilityBehaviorCompBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityBehaviorCompBase, nullptr, "MULTICAST_PlayMontage", nullptr, nullptr, sizeof(AbilityBehaviorCompBase_eventMULTICAST_PlayMontage_Parms), Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_ApplyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_ApplyDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_ApplyDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_ApplyDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::NewProp_DamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::NewProp_DamagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/AbilityBehaviorCompBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityBehaviorCompBase, nullptr, "SERVER_ApplyDamage", nullptr, nullptr, sizeof(AbilityBehaviorCompBase_eventSERVER_ApplyDamage_Parms), Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DashVector;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToDash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_DashTowards_Parms, Velocity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::NewProp_DashVector = { "DashVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_DashTowards_Parms, DashVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::NewProp_ActorToDash = { "ActorToDash", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_DashTowards_Parms, ActorToDash), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::NewProp_DashVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::NewProp_ActorToDash,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "CPP_Default_Velocity", "1000.000000" },
		{ "ModuleRelativePath", "Public/AbilityBehaviorCompBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityBehaviorCompBase, nullptr, "SERVER_DashTowards", nullptr, nullptr, sizeof(AbilityBehaviorCompBase_eventSERVER_DashTowards_Parms), Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_SpawnActor_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_SpawnActor_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::NewProp_ActorClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/AbilityBehaviorCompBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityBehaviorCompBase, nullptr, "SERVER_SpawnActor", nullptr, nullptr, sizeof(AbilityBehaviorCompBase_eventSERVER_SpawnActor_Parms), Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawningForwardBias;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::NewProp_SpawningForwardBias = { "SpawningForwardBias", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_SpawnProjectile_Parms, SpawningForwardBias), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::NewProp_DesiredRotation = { "DesiredRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_SpawnProjectile_Parms, DesiredRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_SpawnProjectile_Parms, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_SpawnProjectile_Parms, ProjectileClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::NewProp_SpawningForwardBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::NewProp_DesiredRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::NewProp_ForwardVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::NewProp_ProjectileClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "CPP_Default_SpawningForwardBias", "100.000000" },
		{ "ModuleRelativePath", "Public/AbilityBehaviorCompBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityBehaviorCompBase, nullptr, "SERVER_SpawnProjectile", nullptr, nullptr, sizeof(AbilityBehaviorCompBase_eventSERVER_SpawnProjectile_Parms), Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TrapClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_SpawnTrap_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::NewProp_TrapClass = { "TrapClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_SpawnTrap_Parms, TrapClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::NewProp_TrapClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/AbilityBehaviorCompBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityBehaviorCompBase, nullptr, "SERVER_SpawnTrap", nullptr, nullptr, sizeof(AbilityBehaviorCompBase_eventSERVER_SpawnTrap_Parms), Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeleportLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToTeleport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::NewProp_TeleportLocation = { "TeleportLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_Teleport_Parms, TeleportLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::NewProp_ActorToTeleport = { "ActorToTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityBehaviorCompBase_eventSERVER_Teleport_Parms, ActorToTeleport), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::NewProp_TeleportLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::NewProp_ActorToTeleport,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/AbilityBehaviorCompBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityBehaviorCompBase, nullptr, "SERVER_Teleport", nullptr, nullptr, sizeof(AbilityBehaviorCompBase_eventSERVER_Teleport_Parms), Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_TryActivateAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityBehaviorCompBase, nullptr, "SERVER_TryActivateAbility", nullptr, nullptr, sizeof(AbilityBehaviorCompBase_eventSERVER_TryActivateAbility_Parms), Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_TryActivateAbility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_TryActivateAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_TryActivateAbility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_TryActivateAbility_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_UAbilityBehaviorCompBase_MULTICAST_PlayMontage, "MULTICAST_PlayMontage" }, // 3449277047
		{ &Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_ApplyDamage, "SERVER_ApplyDamage" }, // 4208047698
		{ &Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_DashTowards, "SERVER_DashTowards" }, // 1919444524
		{ &Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnActor, "SERVER_SpawnActor" }, // 334406600
		{ &Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnProjectile, "SERVER_SpawnProjectile" }, // 3389432925
		{ &Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_SpawnTrap, "SERVER_SpawnTrap" }, // 1361543356
		{ &Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_Teleport, "SERVER_Teleport" }, // 2508531641
		{ &Z_Construct_UFunction_UAbilityBehaviorCompBase_SERVER_TryActivateAbility, "SERVER_TryActivateAbility" }, // 3915069788
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
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityBehaviorCompBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAbilityBehaviorCompBase_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(UAbilityBehaviorCompBase, 1291032673);
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
