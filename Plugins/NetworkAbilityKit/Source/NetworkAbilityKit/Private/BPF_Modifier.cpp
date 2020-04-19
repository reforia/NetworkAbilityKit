// Fill out your copyright notice in the Description page of Project Settings.


#include "BPF_Modifier.h"
#include "ModifierComp.h"
#include "ModifierBase.h"
#include "AbilityFrameworkEnum.h"
#include "I_Modifier.h"

bool UBPF_Modifier::TryApplyModifierToTarget(TSubclassOf<class AModifierBase> ModifierClass, AActor* Target, AActor* ModifierInstigator)
{
	if (!Target)
	{
		UE_LOG(LogTemp, Log, TEXT("----BPF_Modifier: Target Invalid----"));
		return false;
	}
	UModifierComp* TmpModifierComp = Target->FindComponentByClass<UModifierComp>();
	if (!TmpModifierComp)
	{
		UE_LOG(LogTemp, Log, TEXT("----BPF_Modifier: Target Did Not Have ModifierComp----"));
		return false;
	}
	II_Modifier* ModifierInterface = Cast<II_Modifier>(TmpModifierComp);
	if (ModifierInterface && ModifierClass)
	{
		FActorSpawnParameters SpawnParams;
		FVector Loc = FVector::ZeroVector;
		FRotator Rot = FRotator::ZeroRotator;
		AModifierBase* TmpModifier = Target->GetWorld()->SpawnActor<AModifierBase>(ModifierClass, Loc, Rot, SpawnParams);
		TmpModifier->AttachToActor(Target, FAttachmentTransformRules::SnapToTargetIncludingScale);

		II_Modifier::Execute_OnReceivedModifier(TmpModifierComp, TmpModifier, ModifierInstigator);
		UE_LOG(LogTemp, Log, TEXT("----Modifier Successfully Submited to Target Modifier Comp----"));
		return true;
	}
	UE_LOG(LogTemp, Log, TEXT("----BPF_Modifier: Target Did Not Implement I_Modifier----"));
	return false;

}

bool UBPF_Modifier::TryRemoveModifierFromTarget(FName ModifierName, AActor* Target)
{
	if (!Target)
	{
		UE_LOG(LogTemp, Log, TEXT("----BPF_Modifier: Target Invalid----"));
		return false;
	}
	UModifierComp* TmpModifierComp = Target->FindComponentByClass<UModifierComp>();
	if (!TmpModifierComp)
	{
		UE_LOG(LogTemp, Log, TEXT("----BPF_Modifier: Target Did Not Have ModifierComp----"));
		return false;
	}
	II_Modifier* ModifierInterface = Cast<II_Modifier>(TmpModifierComp);
	if (ModifierInterface)
	{
		II_Modifier::Execute_OnTryRemoveModifier(TmpModifierComp, ModifierName);
		UE_LOG(LogTemp, Log, TEXT("----Modifier Removal Request Successfully Submited to Target Modifier Comp----"));
		return true;
	}
	UE_LOG(LogTemp, Log, TEXT("----BPF_Modifier: Target Did Not Implement I_Modifier----"));
	return false;
}

bool UBPF_Modifier::TryRemoveModifierByTypeFromTarget(EModifierType ModifierType, AActor * Target)
{
	if (!Target)
	{
		UE_LOG(LogTemp, Log, TEXT("----BPF_Modifier: Target Invalid----"));
		return false;
	}
	UModifierComp* TmpModifierComp = Target->FindComponentByClass<UModifierComp>();
	if (!TmpModifierComp)
	{
		UE_LOG(LogTemp, Log, TEXT("----BPF_Modifier: Target Did Not Have ModifierComp----"));
		return false;
	}
	II_Modifier* ModifierInterface = Cast<II_Modifier>(TmpModifierComp);
	if (ModifierInterface)
	{
		II_Modifier::Execute_OnTryRemoveModifierByType(TmpModifierComp, ModifierType);
		UE_LOG(LogTemp, Log, TEXT("----Modifier Removal by Type Request Successfully Submited to Target Modifier Comp----"));
		return true;
	}
	UE_LOG(LogTemp, Log, TEXT("----BPF_Modifier: Target Did Not Implement I_Modifier----"));
	return false;
}
