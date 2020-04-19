// Fill out your copyright notice in the Description page of Project Settings.


#include "StatSet_Default.h"

AStatSet_Default::AStatSet_Default()
{
	SetReplicates(true);
}

void AStatSet_Default::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// This actually takes care of replicating the Variable
	DOREPLIFETIME(AStatSet_Default, Stun);
	DOREPLIFETIME(AStatSet_Default, Silence);
}