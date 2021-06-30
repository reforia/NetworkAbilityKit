// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerStart.h"
#include "NetworkAbilityKit/Public/PS_Arena.h"
#include "GameFramework/GameStateBase.h"
#include "ActionCharacterBase.h"
#include "ActionControllerBase.h"

void AMyGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	UE_LOG(LogTemp, Log, TEXT("----New Player Post Login----"));
	if (HasAuthority())
	{
		UE_LOG(LogTemp, Log, TEXT("----Server Start Initialization Gamemode----"));
		TArray<AActor*> PlayerStartArray;
		UGameplayStatics::GetAllActorsOfClass(NewPlayer->GetWorld(), APlayerStart::StaticClass(), PlayerStartArray);

		for (AActor* PlayerStart : PlayerStartArray)
		{
			APlayerStart* TmpPlayerStart = Cast<APlayerStart>(PlayerStart);
			if (!TmpPlayerStart)
			{
				continue;;
			}
			if (TmpPlayerStart->PlayerStartTag == TEXT("Team1"))
			{
				Team1.Add(TmpPlayerStart);
			}
		}

		APS_Arena* PlayerState = NewPlayer->GetPlayerState<APS_Arena>();
		if (!PlayerState)
		{
			UE_LOG(LogTemp, Log, TEXT("----Server get Player State Failed----"));
			return;
		}
		PlayerState->PlayerNumber = UGameplayStatics::GetGameState(NewPlayer->GetWorld())->PlayerArray.Num();
		AActionControllerBase* PlayerController = Cast<AActionControllerBase>(NewPlayer);
		if (!PlayerController)
		{
			UE_LOG(LogTemp, Log, TEXT("----Server cast player controller failed!----"));
			return;
		}
		UE_LOG(LogTemp, Log, TEXT("----Server calling CLIENT_PostLogin----"));
		PlayerController->CLIENT_PostLogin();
	}

}

void AMyGameModeBase::SERVER_SpawnPlayer_Implementation(APlayerController* PlayerController)
{
	UE_LOG(LogTemp, Log, TEXT("----Server Start Spawn Pawn for Controller----"));
	APawn* TmpPawn = PlayerController->GetPawn();
	if (TmpPawn)
	{
		UE_LOG(LogTemp, Log, TEXT("----Pawn already there, destroying----"));
		TmpPawn->Destroy();
	}
	int32 TmpPlayerID = PlayerController->GetPlayerState<APlayerState>()->GetPlayerId();
	//APlayerState* TmpPS = UGameplayStatics::GetGameState(PlayerController)->PlayerArray[0];
	//int32 ModuloID = TmpPlayerID % 2;
	//int32 TmpPSPlayerID = TmpPS->PlayerId;

	for (auto PerPlayerStart : Team1)
	{
		FVector Loc = PerPlayerStart->GetActorLocation();
		FRotator Rot = PerPlayerStart->GetActorRotation();
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
		APawn* TmpPlayer1 = PlayerController->GetWorld()->SpawnActor<APawn>(DefaultPawnClass, Loc, Rot, SpawnParams);
		if (TmpPlayer1)
		{
			UE_LOG(LogTemp, Log, TEXT("----Server spawned player for team 1----"));
			PlayerController->Possess(TmpPlayer1);
			UE_LOG(LogTemp, Log, TEXT("----Player 1 Possessed----"));
			break;
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("----Player Start Already Occupied, Check next one----"));
			continue;
		}
	}

}

bool AMyGameModeBase::SERVER_SpawnPlayer_Validate(APlayerController* PlayerController)
{
	return true;
}
