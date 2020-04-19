// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbilityBehaviorCompBase.generated.h"

class AAbilityBase;
class UAnimMontage;
class USkeletalMeshComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable )
class NETWORKABILITYKIT_API UAbilityBehaviorCompBase : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAbilityBehaviorCompBase();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "Behavior")
	void SERVER_TryActivateAbility(AAbilityBase* Ability);

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "Behavior")
	void SERVER_SpawnProjectile(TSubclassOf<class AActor> ProjectileClass, FVector ForwardVector, FRotator DesiredRotation, float SpawningForwardBias = 100.0f);

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "Behavior")
	void SERVER_SpawnActor(TSubclassOf<class AActor> ActorClass, FVector SpawnLocation);

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "Behavior")
	void SERVER_SpawnTrap(TSubclassOf<class AActor> TrapClass, FVector SpawnLocation);

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "Behavior")
	void SERVER_ApplyDamage(AActor* DamagedActor, float DamageAmount, class AController * EventInstigator, AActor * DamageCauser);

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "Behavior")
	void SERVER_Teleport(AActor* ActorToTeleport, FVector TeleportLocation);

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "Behavior")
	void SERVER_DashTowards(AActor* ActorToDash, FVector DashVector, float Velocity = 1000.0f);

	UFUNCTION(NetMulticast, Reliable, WithValidation, BlueprintCallable, Category = "Behavior")
	void MULTICAST_PlayMontage(USkeletalMeshComponent* SkeletalMeshComp, UAnimMontage* MontageToPlay);

};
