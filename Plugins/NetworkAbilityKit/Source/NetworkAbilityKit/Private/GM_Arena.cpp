// Fill out your copyright notice in the Description page of Project Settings.


#include "GM_Arena.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerStart.h"
#include "PS_Arena.h"
#include "GameFramework/GameStateBase.h"
#include "PlayerHeroBase.h"
#include "PlayerHeroControllerBase.h"


void AGM_Arena::PostLogin(APlayerController* NewPlayer)
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
			if (TmpPlayerStart->PlayerStartTag == TEXT("Player1"))
			{
				Player1.Add(TmpPlayerStart);
			}
			else
			{
				Player2.Add(TmpPlayerStart);
			}
		}

		APS_Arena* PlayerState = NewPlayer->GetPlayerState<APS_Arena>();
		if (!PlayerState)
		{
			UE_LOG(LogTemp, Log, TEXT("----Server get Player State Failed----"));
			return;
		}
		PlayerState->PlayerNumber = UGameplayStatics::GetGameState(NewPlayer->GetWorld())->PlayerArray.Num();
		APlayerHeroControllerBase* PlayerController = Cast<APlayerHeroControllerBase>(NewPlayer);
		if (!PlayerController)
		{
			UE_LOG(LogTemp, Log, TEXT("----Server cast player controller failed!----"));
			return;
		}
		UE_LOG(LogTemp, Log, TEXT("----Server calling CLIENT_PostLogin----"));
		PlayerController->CLIENT_PostLogin();
	}

}

void AGM_Arena::AssignTeamNumber()
{

}

void AGM_Arena::SERVER_SpawnPlayer_Implementation(APlayerController* PlayerController)
{
	UE_LOG(LogTemp, Log, TEXT("----Server Start Spawn Pawn for Controller----"));
	APawn* TmpPawn = PlayerController->GetPawn();
	if (TmpPawn)
	{
		UE_LOG(LogTemp, Log, TEXT("----Pawn already there, destroying----"));
		TmpPawn->Destroy();
	}
	int32 TmpPlayerID = PlayerController->GetPlayerState<APlayerState>()->PlayerId;
	//APlayerState* TmpPS = UGameplayStatics::GetGameState(PlayerController)->PlayerArray[0];
	int32 ModuloID = TmpPlayerID % 2;
	//int32 TmpPSPlayerID = TmpPS->PlayerId;
	if (ModuloID != 0)
	{
		APlayerStart* TmpPlayer1Start = Player1[0];
		FVector Loc = TmpPlayer1Start->GetActorLocation();
		FRotator Rot = TmpPlayer1Start->GetActorRotation();
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
		APawn* TmpPlayer1 = PlayerController->GetWorld()->SpawnActor<APawn>(DefaultPawnClass, Loc, Rot, SpawnParams);
		UE_LOG(LogTemp, Log, TEXT("----Server spawned player 1----"));
		PlayerController->Possess(TmpPlayer1);
		UE_LOG(LogTemp, Log, TEXT("----player 1 Possessed----"));
	}
	else
	{
		APlayerStart* TmpPlayer2Start = Player2[0];
		FVector Loc = TmpPlayer2Start->GetActorLocation();
		FRotator Rot = TmpPlayer2Start->GetActorRotation();
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
		TSubclassOf<class APlayerHeroBase> PlayerClass;
		APawn* TmpPlayer2 = PlayerController->GetWorld()->SpawnActor<APawn>(DefaultPawnClass, Loc, Rot, SpawnParams);
		UE_LOG(LogTemp, Log, TEXT("----Server spawned player 2----"));
		PlayerController->Possess(TmpPlayer2);
		UE_LOG(LogTemp, Log, TEXT("----player 2 Possessed----"));
	}
}

bool AGM_Arena::SERVER_SpawnPlayer_Validate(APlayerController* PlayerController)
{
	return true;
}
