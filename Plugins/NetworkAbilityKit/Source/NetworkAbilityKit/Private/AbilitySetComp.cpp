// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySetComp.h"
#include "AbilitySetBase.h"

// Sets default values for this component's properties
UAbilitySetComp::UAbilitySetComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicated(true);
}

void UAbilitySetComp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UAbilitySetComp, AbilitySetObject);
}

// Called when the game starts
void UAbilitySetComp::BeginPlay()
{
	Super::BeginPlay();
	// ...
	
}


bool UAbilitySetComp::InitializeAbilitySet_Validate()
{
	return true;
}

void UAbilitySetComp::InitializeAbilitySet_Implementation()
{
	UE_LOG(LogTemp, Log, TEXT("----Ability Set Comp Initializing----"));
	
	if (!AbilitySet)
	{
		UE_LOG(LogTemp, Log, TEXT("----No Ability Set Found!----"));
		return;
	}
	//AbilitySetObject = Cast<AAbilitySetBase>(AbilitySet);
	FActorSpawnParameters SpawnParams;
	FVector Loc = FVector::ZeroVector;
	FRotator Rot = FRotator::ZeroRotator;
	AbilitySetObject = GetWorld()->SpawnActor<AAbilitySetBase>(AbilitySet, Loc, Rot, SpawnParams);
	AbilitySetObject->AttachToActor(GetOwner(), FAttachmentTransformRules::SnapToTargetIncludingScale);
	if (!AbilitySetObject)
	{
		UE_LOG(LogTemp, Log, TEXT("----Ability Set Initialization Failed----"));
		return;
	}

	if (!this->BelongingActor)
	{
		UE_LOG(LogTemp, Log, TEXT("----Ability Set Comp Has No Belonging Actor, try assigning----"));
		this->BelongingActor = this->GetOwner();
		if (!this->BelongingActor)
		{
			UE_LOG(LogTemp, Log, TEXT("----Assign Failed, Fatal Error! ABORTING----"));
			return;
		}
		UE_LOG(LogTemp, Log, TEXT("----Assign Succeeded, Continue Initialization Process----"));
	}
	AbilitySetObject->BelongingActor = this->BelongingActor;
	//UNCOMMENT this will result in failed initialize abilities? But Comment this will result in no BelongingController in Ability
	//AbilitySetObject->SetOwner(this->BelongingActor);
	AbilitySetObject->InitializeAbilities();
	UE_LOG(LogTemp, Log, TEXT("----Ability Set Initialization Finished----"));
	CLIENT_BroadcastFinishedInitializationEvent();
	UE_LOG(LogTemp, Log, TEXT("----Ability Comp Initialization Finished----"));
}

//void UAbilitySetComp::SERVER_BroadcastFinishedInitializationEvent_Implementation()
//{
//	UE_LOG(LogTemp, Log, TEXT("----SERVER Broadcast Event----"));
//	CLIENT_BroadcastFinishedInitializationEvent();
//}
//
//bool UAbilitySetComp::SERVER_BroadcastFinishedInitializationEvent_Validate()
//{
//	return true;
//}

void UAbilitySetComp::CLIENT_BroadcastFinishedInitializationEvent_Implementation()
{
	UE_LOG(LogTemp, Log, TEXT("----CLIENT Broadcast Event----"));
	OnInitializationFinishedDelegate.Broadcast();
}

bool UAbilitySetComp::CLIENT_BroadcastFinishedInitializationEvent_Validate()
{
	return true;
}

//bool UAbilitySetComp::InitializeAbilitySet_Validate()
//{
//	return true;
//}

