// Fill out your copyright notice in the Description page of Project Settings.


#include "AttrSet_Default.h"
#include "Kismet/GameplayStatics.h"

AAttrSet_Default::AAttrSet_Default()
{
	SetReplicates(true);
	Health = MaxHealth;
	Mana = MaxMana;
}

void AAttrSet_Default::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// This actually takes care of replicating the Variable
	DOREPLIFETIME(AAttrSet_Default, Health);
	DOREPLIFETIME(AAttrSet_Default, MaxHealth);
	DOREPLIFETIME(AAttrSet_Default, Mana);
	DOREPLIFETIME(AAttrSet_Default, MaxMana);
}


void AAttrSet_Default::OnRep_HealthChanged()
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

void AAttrSet_Default::OnRep_MaxHealthChanged()
{
	//UE_LOG(LogTemp, Log, TEXT("MaxHealth Changed"), MaxHealth);
}

void AAttrSet_Default::OnRep_ManaChanged()
{
	if (HasAuthority())
	{
		//UE_LOG(LogTemp, Log, TEXT("Mana Changed to %F"), Mana);
		if (Mana >= MaxMana)
		{
			Mana = MaxMana;
		}
	}
}

void AAttrSet_Default::OnRep_MaxManaChanged()
{
	//UE_LOG(LogTemp, Log, TEXT("MaxMana Changed"), MaxMana);
}

#if WITH_EDITOR  
void AAttrSet_Default::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	//Get the name of the property that was changed  
	FName PropertyName = (PropertyChangedEvent.Property != nullptr) ? PropertyChangedEvent.Property->GetFName() : NAME_None;

	if (PropertyName == TEXT("MaxHealth"))
	{
		UE_LOG(LogTemp, Log, TEXT("On Max Health Changed In Editor!"));
		Health = MaxHealth;
	}

	if (PropertyName == TEXT("MaxMana"))
	{
		UE_LOG(LogTemp, Log, TEXT("On Max Mana Changed In Editor!"));
		Mana = MaxMana;
	}

	// Call the base class version  
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

