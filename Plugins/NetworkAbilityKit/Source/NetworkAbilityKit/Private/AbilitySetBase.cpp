// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySetBase.h"
#include "AbilityBase.h"
#include "AttributeComp.h"

// Sets default values
AAbilitySetBase::AAbilitySetBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	SetReplicates(true);
}

void AAbilitySetBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// This actually takes care of replicating the Variable
	DOREPLIFETIME(AAbilitySetBase, AbilityArray);
	DOREPLIFETIME(AAbilitySetBase, AbilityObjectsDict);
}

// Called when the game starts or when spawned
void AAbilitySetBase::BeginPlay()
{
	Super::BeginPlay();
}

void AAbilitySetBase::InitializeAbilities_Implementation()
{
	UE_LOG(LogTemp, Log, TEXT("----Abilities Initializing----"));
	if (!BelongingActor)
	{
		UE_LOG(LogTemp, Log, TEXT("----Ability Set Has No Belonging Actor----"));
		return;
	}

	AbilityList.Empty();
	AbilityArray.Empty();
	AbilityObjectsDict.Empty();

	for (auto& Ability : AbilityClasses)
	{
		FVector Loc = FVector::ZeroVector;
		FRotator Rot = FRotator::ZeroRotator;
		FActorSpawnParameters SpawnParams;
		AAbilityBase* TmpAbility = BelongingActor->GetWorld()->SpawnActor<AAbilityBase>(*Ability.Value, Loc, Rot, SpawnParams);

		if (!TmpAbility)
		{
			UE_LOG(LogTemp, Log, TEXT("----Ability Spawn Failed----"));
			continue;
		}

		TmpAbility->BelongingAbilitySet = this;
		TmpAbility->BelongingActor = this->BelongingActor;
		TmpAbility->BelongingController = TmpAbility->BelongingActor->GetInstigatorController();
		TmpAbility->SetOwner(TmpAbility->BelongingActor);
		TmpAbility->PairAttrComp = BelongingActor->FindComponentByClass<UAttributeComp>();
		TmpAbility->PairAttrSet = TmpAbility->PairAttrComp->AttributePreset;

		TmpAbility->AttachToActor(this, FAttachmentTransformRules::SnapToTargetIncludingScale);

		AbilityList.Emplace(Ability.Key, TmpAbility);
		
		FAbilityListStruct AbilityListStruct;
		AbilityListStruct.Dev_AbilityName = Ability.Key;
		AbilityListStruct.Ability = TmpAbility;

		AbilityObjectsDict.Add(AbilityListStruct);
	}
	AbilityList.GenerateValueArray(AbilityArray);
	UE_LOG(LogTemp, Log, TEXT("----Spawn All Abilities Finished, Abilities count: %d----"), AbilityList.Num());
}

bool AAbilitySetBase::InitializeAbilities_Validate()
{
	return true;
}

