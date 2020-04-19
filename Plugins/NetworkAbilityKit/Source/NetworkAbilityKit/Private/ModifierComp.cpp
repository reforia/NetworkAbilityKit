// Fill out your copyright notice in the Description page of Project Settings.


#include "ModifierComp.h"
#include "ModifierBase.h"
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
UModifierComp::UModifierComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicated(true);
	// ...
}


// Called when the game starts
void UModifierComp::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UModifierComp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UModifierComp, ModifierList);
}

void UModifierComp::AddToLocalModifierList_Implementation(AModifierBase* Modifier)
{
	UE_LOG(LogTemp, Log, TEXT("----Start Evaluating Modifier for adding to local List----"));
	Modifier->BelongingModComp = this;

	// Check if the modifier is already in the list, if it does, call OnReapplied() on modifier and return this function
	// Later, move the info of modifier into data driven, read from datatable.
	for (AModifierBase* EachModifier : ModifierList)
	{
		if (EachModifier->Name == Modifier->Name)
		{
			UE_LOG(LogTemp, Log, TEXT("----Modifier Already in List, calling OnReapplied()----"));
			EachModifier->OnReapplied(Modifier->ModifierStack);
			// After passing in stack counts, GC self
			Modifier->Destroy();
			return;
		}
	}
	UE_LOG(LogTemp, Log, TEXT("----Modifier not in List, initializing process...----"));
	// If it is a new modifier, try add to modifier list
	UE_LOG(LogTemp, Log, TEXT("----Add modifier to List----"));
	ModifierList.AddUnique(Modifier);
	OnModifierAdded(Modifier);

	UE_LOG(LogTemp, Log, TEXT("----Extracting ModifierBlockList and BlockTypeList to existing----"));
	// Then, extract the block type list and block name list, and append to existing list, this list could have duplicated elements
	ModifierBlockList.Append(Modifier->ModifierBlockList);
	this->OnModifierBlockListAdded(Modifier->ModifierBlockList);
	ModifierBlockerTypeList.Append(Modifier->ModifierBlockTypeList);
	this->OnModifierBlockTypeAdded(Modifier->ModifierBlockTypeList);

	UE_LOG(LogTemp, Log, TEXT("----Modifier finished initialization process, calling OnApplied on Modifier----"));
	// Last, Call OnApplied() on the modifier
	Modifier->OnApplied();

}

bool UModifierComp::AddToLocalModifierList_Validate(AModifierBase* Modifier)
{
	return true;
}

void UModifierComp::RemoveFromLocalModifierList(AModifierBase* Modifier)
{
	UE_LOG(LogTemp, Log, TEXT("----Start Removing Modifier Info from Local Modifier List----"));
	RemoveFromLocalModifierBlockList(Modifier->ModifierBlockList);
	RemoveFromLocalModifierBlockTypeList(Modifier->ModifierBlockTypeList);
	ModifierList.Remove(Modifier);
	UE_LOG(LogTemp, Log, TEXT("----Modifier Removed----"));
	OnModifierRemoved(Modifier);
}

void UModifierComp::RemoveFromLocalModifierBlockList(TArray<FName> ModifierBlockListToRemove)
{
	for (auto& BlockedModifierNameFromThisModifier : ModifierBlockListToRemove)
	{
		if (ModifierBlockList.Contains(BlockedModifierNameFromThisModifier))
		{
			ModifierBlockList.RemoveSingleSwap(BlockedModifierNameFromThisModifier);
		}
	}
	UE_LOG(LogTemp, Log, TEXT("----Modifier Block List Removed!----"));
	this->OnModifierBlockListRemoved(ModifierBlockListToRemove);
}

void UModifierComp::RemoveFromLocalModifierBlockTypeList(TArray<EModifierType> ModifierBlockTypeListToRemove)
{
	for (auto& BlockedModifierTypeFromThisModifier : ModifierBlockTypeListToRemove)
	{
		if (ModifierBlockerTypeList.Contains(BlockedModifierTypeFromThisModifier))
		{
			ModifierBlockerTypeList.RemoveSingleSwap(BlockedModifierTypeFromThisModifier);
		}
	}
	UE_LOG(LogTemp, Log, TEXT("----Modifier Block Type List Removed!----"));
	this->OnModifierBlockTypeRemoved(ModifierBlockTypeListToRemove);
}

bool UModifierComp::BlockListCheck(AModifierBase* Modifier)
{
	if (Modifier->bForceIgnoreBlockList)
	{
		UE_LOG(LogTemp, Log, TEXT("----Modifier Ignored the list check----"));
		return false;
	}
	else
	{
		if (ModifierBlockList.Contains(Modifier->Name))
		{
			UE_LOG(LogTemp, Log, TEXT("----Modifier blocked by a existing modifier----"));
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("----Modifier is not blocked by a existing modifier----"));
			return false;
		}
	}
}

bool UModifierComp::BlockTypeCheck(AModifierBase* Modifier)
{
	if (Modifier->bForceIgnoreBlockType)
	{
		UE_LOG(LogTemp, Log, TEXT("----Modifier Ignored the type check----"));
		return false;
	}
	else
	{
		if (ModifierBlockerTypeList.Contains(Modifier->ModifierType))
		{
			UE_LOG(LogTemp, Log, TEXT("----Modifier blocked by a existing modifier by Type----"));
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("----Modifier is not blocked by a existing modifier by Type----"));
			return false;
		}
	}
}

void UModifierComp::OnModifierRemoved(AModifierBase* RemovedModifier)
{
	RemovedModifier->Destroy();
}

void UModifierComp::OnReceivedModifier_Implementation(AModifierBase* Modifier, AActor* ModifierInstigator)
{
	UE_LOG(LogTemp, Log, TEXT("----Modifier Comp Received a New Modifier, checking----"));
	Modifier->ModifierInstigator = ModifierInstigator;
	if (ApplyModifierPrecheck(Modifier))
	{
		UE_LOG(LogTemp, Log, TEXT("----Check passed, processing----"));
		AddToLocalModifierList(Modifier);
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("----Check failed! GC Modifier----"));
		Modifier->OnBlocked();
		OnModifierBlocked(Modifier);
	}
}

void UModifierComp::OnTryRemoveModifier_Implementation(FName ModifierName)
{
	for (AModifierBase* EachModifier : ModifierList)
	{
		if (EachModifier->Name == ModifierName)
		{
			if (!EachModifier->bForceIgnoreMannualRemoval)
			{
				EachModifier->OnModifierPendingExpire();
			}
		}
	}
}

void UModifierComp::OnTryRemoveModifierByType_Implementation(EModifierType ModifierType)
{
	for (AModifierBase* EachModifier : ModifierList)
	{
		if (EachModifier->ModifierType == ModifierType)
		{
			if (!EachModifier->bForceIgnoreMannualRemoval)
			{
				EachModifier->OnModifierPendingExpire();
			}
		}
	}
}

bool UModifierComp::ApplyModifierPrecheck(AModifierBase* InModifier)
{
	bool bTmpBool = !BlockListCheck(InModifier) && !BlockTypeCheck(InModifier);
	if (bTmpBool)
	{
		UE_LOG(LogTemp, Log, TEXT("----Apply Modifier Precheck Passed----"));
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("----Apply Modifier Precheck Failed----"));
	}
	return bTmpBool;
}


//void UModifierComp::InitializeModifier_Implementation()
//{
//
//}
//
//bool UModifierComp::InitializeModifier_Validate()
//{
//	return true;
//}

