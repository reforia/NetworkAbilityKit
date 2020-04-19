// Fill out your copyright notice in the Description page = of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectileBase.generated.h"

class UStaticMeshComponent;
class USphereComponent;
class UProjectileMovementComponent;

UCLASS()
class NETWORKABILITYKIT_API AProjectileBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectileBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Movement")
	UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Collision")
	USphereComponent* SphereCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "LifeCycle")
	float LifeSpan = 10.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Range")
	float MaxRange = 1000.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Range")
	bool bDestroyOnReachMaxRange = true;

	UPROPERTY(BlueprintReadOnly, Category = "Parent")
	AActor* BelongingControllerActor;

private:
	float InternalTickTime = 0.1f;

	void HandleLifeCycle();
	
	FTimerHandle ProjectileLifeSpanHandle;

	void OnLifeCyclePreEnd();

	void InternalDestroySelf();

	FTimerHandle ProjectileInternalTickHandle;

	void ProjectileDistanceMeasurement();

	void InternalTick();

	FVector SpawnLocation;
};
