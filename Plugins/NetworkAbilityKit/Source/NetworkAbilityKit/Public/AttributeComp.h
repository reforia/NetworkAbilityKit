// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Net/UnrealNetwork.h"
#include "AttributeComp.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable )
class NETWORKABILITYKIT_API UAttributeComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAttributeComp();

	UFUNCTION(BlueprintCallable, Category = "Initialization")
	void InitializeAttributeComp();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attribute")
	TSubclassOf<class AAttributeSetBase> AttributePresetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attribute")
	TSubclassOf<class AStatusSetBase> StatusPresetClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Preset")
	AAttributeSetBase* AttributePreset;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Preset")
	AStatusSetBase* StatusPreset;

private:
	UFUNCTION(Category = "Initialization")
	void InitializeAttributePreset();

	UFUNCTION(Category = "Initialization")
	void InitializeStatusPreset();
};
