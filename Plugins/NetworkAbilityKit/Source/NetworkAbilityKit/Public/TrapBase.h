// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TrapBase.generated.h"

UCLASS()
class NETWORKABILITYKIT_API ATrapBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATrapBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Collision")
	USphereComponent* SphereCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "LifeCycle")
	float LifeSpan = 10.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Parent")
	AActor* BelongingControllerActor;

private:
	float InternalTickTime = 0.1f;

	void HandleLifeCycle();

	FTimerHandle TrapLifeSpanHandle;

	void OnLifeCyclePreEnd();

	void InternalDestroySelf();

	FTimerHandle TrapInternalTickHandle;

	void InternalTick();

};
