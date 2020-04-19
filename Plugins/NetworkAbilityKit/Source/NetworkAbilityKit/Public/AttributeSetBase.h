// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Net/UnrealNetwork.h"
#include "AttributeSetBase.generated.h"

UCLASS()
class NETWORKABILITYKIT_API AAttributeSetBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAttributeSetBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(BlueprintReadOnly, Category = "Parent")
	USceneComponent* TmpRoot;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Parent")
	AActor* BelongingActor;
	
public:
	UFUNCTION(Category = "Attribute")
	UFloatProperty* GetFloatAttribute(FName PropertyName);

	UFUNCTION(Category = "Attribute")
	float GetTmpValueAfterModifiedFloatAttribute(UFloatProperty* FloatProp, EAttrModifyMethod ModifyMethod, float ModifyValue);

	UFUNCTION(Server, Reliable, WithValidation, Category = "Attribute")
	void SetFloatAttributeValue(UFloatProperty* FloatProp, float NewValue);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation, Category = "Attribute")
	void SetFloatAttributeValueByName(FName PropName, EAttrModifyMethod ModifyMethod, float ModifyValue);
};
