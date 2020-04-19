// Fill out your copyright notice in the Description page of Project Settings.


#include "AttributeComp.h"
#include "AttributeSetBase.h"
#include "StatusSetBase.h"

// Sets default values for this component's properties
UAttributeComp::UAttributeComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicated(true);
}

void UAttributeComp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// This actually takes care of replicating the Variable
	DOREPLIFETIME(UAttributeComp, AttributePreset);
	DOREPLIFETIME(UAttributeComp, StatusPreset);
}

// Called when the game starts
void UAttributeComp::BeginPlay()
{
	Super::BeginPlay();
	// ...
	
}

void UAttributeComp::InitializeAttributePreset()
{
	if (!AttributePresetClass)
	{
		return;
	}

	FActorSpawnParameters SpawnParams;
	FVector Loc = FVector::ZeroVector;
	FRotator Rot = FRotator::ZeroRotator;
	AttributePreset = GetWorld()->SpawnActor<AAttributeSetBase>(AttributePresetClass, Loc, Rot, SpawnParams);
	AttributePreset->AttachToActor(GetOwner(), FAttachmentTransformRules::SnapToTargetIncludingScale);

	if (!AttributePreset)
	{
		UE_LOG(LogTemp, Log, TEXT("AttributePreset Initialization Failed"));
		return;
	}
	if (!this->GetOwner())
	{
		UE_LOG(LogTemp, Log, TEXT("----Attribute Component Has No Owner----"));
		return;
	}
	AttributePreset->BelongingActor = this->GetOwner();
	if (!AttributePreset->BelongingActor)
	{
		UE_LOG(LogTemp, Log, TEXT("----AttributePreset Has No Belonging Actor----"));
		return;
	}
	AttributePreset->SetOwner(AttributePreset->BelongingActor);
	UE_LOG(LogTemp, Log, TEXT("----AttributePreset Initialization Finished----"));
}

//bool UAttributeComp::InitializeAttributePreset_Validate()
//{
//	return true;
//}

void UAttributeComp::InitializeStatusPreset()
{
	if (!StatusPresetClass)
	{
		return;
	}

	FActorSpawnParameters SpawnParams;
	FVector Loc = FVector::ZeroVector;
	FRotator Rot = FRotator::ZeroRotator;
	StatusPreset = GetWorld()->SpawnActor<AStatusSetBase>(StatusPresetClass, Loc, Rot, SpawnParams);
	StatusPreset->AttachToActor(GetOwner(), FAttachmentTransformRules::SnapToTargetIncludingScale);
	if (!StatusPreset)
	{
		UE_LOG(LogTemp, Log, TEXT("StatusPreset Initialization Failed"));
		return;
	}
	if (!this->GetOwner())
	{
		UE_LOG(LogTemp, Log, TEXT("----Attribute Component Has No Owner----"));
		return;
	}
	StatusPreset->BelongingActor = this->GetOwner();
	if (!StatusPreset->BelongingActor)
	{
		UE_LOG(LogTemp, Log, TEXT("----StatusPreset Has No Belonging Actor----"));
		return;
	}
	StatusPreset->SetOwner(StatusPreset->BelongingActor);
	UE_LOG(LogTemp, Log, TEXT("----StatusPreset Initialization Finished----"));
}

//bool UAttributeComp::InitializeStatusPreset_Validate()
//{
//	return true;
//}

void UAttributeComp::InitializeAttributeComp()
{
	UE_LOG(LogTemp, Log, TEXT("----Attr Comp Initializing----"));
	InitializeAttributePreset();
	InitializeStatusPreset();
}

//bool UAttributeComp::InitializeAttributeComp_Validate()
//{
//	return true;
//}

