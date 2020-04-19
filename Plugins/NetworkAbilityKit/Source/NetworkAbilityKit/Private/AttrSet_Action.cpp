// Fill out your copyright notice in the Description page of Project Settings.


#include "AttrSet_Action.h"
#include "Kismet/GameplayStatics.h"

AAttrSet_Action::AAttrSet_Action()
{
	SetReplicates(true);
	Health = MaxHealth;
	Stamina = MaxStamina;
}

void AAttrSet_Action::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// This actually takes care of replicating the Variable
	DOREPLIFETIME(AAttrSet_Action, Health);
	DOREPLIFETIME(AAttrSet_Action, MaxHealth);
	DOREPLIFETIME(AAttrSet_Action, Stamina);
	DOREPLIFETIME(AAttrSet_Action, MaxStamina);
}


void AAttrSet_Action::OnRep_HealthChanged()
{
	if (HasAuthority())
	{
		//UE_LOG(LogTemp, Log, TEXT("Health Changed to %F"), Health);
		if (Health <= 0.0f)
		{
			OnDeathDelegate.Broadcast();
			UE_LOG(LogTemp, Log, TEXT("On Dead!"));
		}
		else if (Health >= MaxHealth)
		{
			Health = MaxHealth;
		}
	}
}

void AAttrSet_Action::OnRep_MaxHealthChanged()
{
	//UE_LOG(LogTemp, Log, TEXT("MaxHealth Changed"), MaxHealth);
}

void AAttrSet_Action::OnRep_StaminaChanged()
{
	if (HasAuthority())
	{
		//UE_LOG(LogTemp, Log, TEXT("Mana Changed to %F"), Mana);
		if (Stamina >= MaxStamina)
		{
			Stamina = MaxStamina;
		}
	}
}

void AAttrSet_Action::OnRep_MaxStaminaChanged()
{
	//UE_LOG(LogTemp, Log, TEXT("MaxMana Changed"), MaxMana);
}

#if WITH_EDITOR  
void AAttrSet_Action::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	//Get the name of the property that was changed  
	FName PropertyName = (PropertyChangedEvent.Property != nullptr) ? PropertyChangedEvent.Property->GetFName() : NAME_None;

	if (PropertyName == TEXT("MaxHealth"))
	{
		UE_LOG(LogTemp, Log, TEXT("On Max Health Changed In Editor!"));
		Health = MaxHealth;
	}

	if (PropertyName == TEXT("MaxStamina"))
	{
		UE_LOG(LogTemp, Log, TEXT("On Max Stamina Changed In Editor!"));
		Stamina = MaxStamina;
	}

	// Call the base class version  
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

