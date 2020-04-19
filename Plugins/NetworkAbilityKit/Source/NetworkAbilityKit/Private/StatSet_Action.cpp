// Fill out your copyright notice in the Description page of Project Settings.


#include "StatSet_Action.h"

AStatSet_Action::AStatSet_Action()
{
	SetReplicates(true);
}

void AStatSet_Action::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// This actually takes care of replicating the Variable
	DOREPLIFETIME(AStatSet_Action, Stun);
	DOREPLIFETIME(AStatSet_Action, Equipped);
	DOREPLIFETIME(AStatSet_Action, InEquipping);
	DOREPLIFETIME(AStatSet_Action, InLockMode);
	DOREPLIFETIME(AStatSet_Action, InSprint);
	DOREPLIFETIME(AStatSet_Action, InStopping);
	DOREPLIFETIME(AStatSet_Action, InDodging);
	DOREPLIFETIME(AStatSet_Action, InAttacking);
}