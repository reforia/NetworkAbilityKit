// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Net/UnrealNetwork.h"
#include "StatusSetBase.generated.h"

UCLASS()
class NETWORKABILITYKIT_API AStatusSetBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStatusSetBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(BlueprintReadOnly, Category = "Parent")
	USceneComponent* TmpRoot;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Parent")
	AActor* BelongingActor;

public:
	UFUNCTION(BlueprintPure, Category = "Status")
	void GetBoolAttribute(const FName PropertyName, bool& Success, UBoolProperty*& BoolProp, bool& AttributeValue);

	UFUNCTION(Category = "Status")
	bool GetBoolAttributeValue(UBoolProperty* BoolProp);

	UFUNCTION(Server, Reliable, WithValidation, Category = "Status")
	void SetBoolAttribute(UBoolProperty* BoolProp, bool bNewBool);

	UFUNCTION(NetMulticast, Reliable, WithValidation, Category = "Status")
	void Multicast_SetBoolAttribute(UBoolProperty* BoolProp, bool bNewBool);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation, Category = "Status")
	void SetBoolAttributeByName(FName PropName, bool bNewBool);

	UFUNCTION(BlueprintImplementableEvent, Category = "Status")
	void BP_OnImmune(UBoolProperty* ImmunedProperty);
};
