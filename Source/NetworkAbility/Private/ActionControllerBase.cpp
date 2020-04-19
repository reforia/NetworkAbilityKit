// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionControllerBase.h"
#include "GameFramework/Pawn.h"
#include "ActionCharacterBase.h"
#include "UnrealNetwork.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
#include "MyGameModeBase.h"
#include "NetworkAbilityKit/Public/StatusSetBase.h"
#include "NetworkAbilityKit/Public/AttributeComp.h"
#include "Kismet/KismetMathLibrary.h"


AActionControllerBase::AActionControllerBase()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PlayerInitialized = false;

	//CursorPointVector = FVector::ZeroVector;
	//CursorPointDirection = FVector::ZeroVector;
	//CursorDistanceToPlayer = 0.0f;
	//CursorDistanceToPlayerNormalized = 0.0f;
	//MaxCursorDistanceOffset = 1000.0f;
	LookUpRate = 1.0f;
	LookRightRate = 1.0f;

	SetReplicates(true);
}

void AActionControllerBase::PlayerRefInitialization(APawn* PossessedPawn)
{
	UE_LOG(LogTemp, Log, TEXT("----Enter Player Ref Initialization----"));
	if (!PossessedPawn)
	{
		UE_LOG(LogTemp, Log, TEXT("----No valid Possessed Pawn----"));
		return;
	}
	UE_LOG(LogTemp, Log, TEXT("----Start Initialize Player Ref----"));

	AActionCharacterBase* TmpPlayerRef = Cast<AActionCharacterBase>(PossessedPawn);
	if (!TmpPlayerRef)
	{
		UE_LOG(LogTemp, Log, TEXT("----No Possessed Pawn----"));
		PlayerRef = nullptr;
		PlayerInitialized = false;
	}
	else
	{
		PlayerRef = TmpPlayerRef;
		PlayerRef->BelongingController = this;
		UE_LOG(LogTemp, Log, TEXT("----Start Initialize Player----"));
		PlayerRef->InitializePlayer();
		PlayerInitialized = true;
		UE_LOG(LogTemp, Log, TEXT("----Finished Assign Player Ref----"));
	}
}

void AActionControllerBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// This actually takes care of replicating the Variable
	DOREPLIFETIME(AActionControllerBase, PlayerRef);
	DOREPLIFETIME(AActionControllerBase, PlayerInitialized);
	DOREPLIFETIME(AActionControllerBase, LookUpRate);
	DOREPLIFETIME(AActionControllerBase, LookRightRate);

}

void AActionControllerBase::CLIENT_PostLogin_Implementation()
{
	// DO ANY Client Logic Here, before pawn spawned and possessed
	// Then, call SERVER_PostLogin
	BP_CLIENT_PostLogin();
	SERVER_PostLogin();
}

bool AActionControllerBase::CLIENT_PostLogin_Validate()
{
	return true;
}

void AActionControllerBase::SERVER_PostLogin_Implementation()
{
	AMyGameModeBase* TmpGamemode = Cast<AMyGameModeBase>(GetWorld()->GetAuthGameMode());
	if (!TmpGamemode)
	{
		UE_LOG(LogTemp, Log, TEXT("----Gamemode Not Found----"));
		return;
	}
	UE_LOG(LogTemp, Log, TEXT("----Server call GM to spawn player----"));
	TmpGamemode->SERVER_SpawnPlayer(this);
}

bool AActionControllerBase::SERVER_PostLogin_Validate()
{
	return true;
}

void AActionControllerBase::CLIENT_PostInitialization_Implementation()
{
	BP_CLIENT_PostInitialization();
}

bool AActionControllerBase::CLIENT_PostInitialization_Validate()
{
	return true;
}

void AActionControllerBase::BeginPlay()
{
	Super::BeginPlay();
}

void AActionControllerBase::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
	UE_LOG(LogTemp, Log, TEXT("----Wait For Join Session Process to Finish----"));
	// Hack solution now, Wait until client actually joined and finished ClientTravel()

	EssentialFrameworkInitialization(aPawn);

}

void AActionControllerBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	//UpdateCursorInfo();
	//UpdateControlRotation();
	//UpdatePlayerCameraOffset();

}

void AActionControllerBase::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveUp", this, &AActionControllerBase::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AActionControllerBase::MoveRight);
	InputComponent->BindAxis("LookUp", this, &AActionControllerBase::LookUp);
	InputComponent->BindAxis("LookRight", this, &AActionControllerBase::LookRight);
}

void AActionControllerBase::MoveForward(float AxisValue)
{
	if (PlayerInitialized)
	{
		if (!PlayerRef)
		{
			HandlePlayerRefLost();
			return;
		}
		bool Success = false;
		UBoolProperty* BoolProp = nullptr;
		bool PropValue = false;

		PlayerRef->AttributeComp->StatusPreset->GetBoolAttribute(TEXT("Stun"), Success, BoolProp, PropValue);
		if (!Success)
		{
			return;
		}
		if (PropValue)
		{
			return;
		}
		PlayerRef->BP_MoveForward(AxisValue);
	}
	else
	{
		HandlePlayerRefLost();
	}
}

void AActionControllerBase::MoveRight(float AxisValue)
{
	if (PlayerInitialized)
	{
		if (!PlayerRef)
		{
			HandlePlayerRefLost();
			return;
		}
		bool Success = false;
		UBoolProperty* BoolProp = nullptr;
		bool PropValue = false;

		PlayerRef->AttributeComp->StatusPreset->GetBoolAttribute(TEXT("Stun"), Success, BoolProp, PropValue);
		if (!Success)
		{
			return;
		}
		if (PropValue)
		{
			return;
		}
		PlayerRef->BP_MoveRight(AxisValue);
	}
	else
	{
		HandlePlayerRefLost();
	}
}

void AActionControllerBase::LookUp(float AxisValue)
{
	if (PlayerInitialized)
	{
		if (!PlayerRef)
		{
			HandlePlayerRefLost();
			return;
		}
		bool Success = false;
		UBoolProperty* BoolProp = nullptr;
		bool PropValue = false;

		PlayerRef->AttributeComp->StatusPreset->GetBoolAttribute(TEXT("Stun"), Success, BoolProp, PropValue);
		if (!Success)
		{
			return;
		}
		if (PropValue)
		{
			return;
		}
		float NewLookUpRate = FMath::Clamp(LookUpRate, 0.2f, 3.0f);
		PlayerRef->BP_LookUp(AxisValue * NewLookUpRate);
	}
	else
	{
		HandlePlayerRefLost();
	}
}

void AActionControllerBase::LookRight(float AxisValue)
{
	if (PlayerInitialized)
	{
		if (!PlayerRef)
		{
			HandlePlayerRefLost();
			return;
		}
		bool Success = false;
		UBoolProperty* BoolProp = nullptr;
		bool PropValue = false;

		PlayerRef->AttributeComp->StatusPreset->GetBoolAttribute(TEXT("Stun"), Success, BoolProp, PropValue);
		if (!Success)
		{
			return;
		}
		if (PropValue)
		{
			return;
		}
		float NewLookRightRate = FMath::Clamp(LookRightRate, 0.2f, 3.0f);
		PlayerRef->BP_LookRight(AxisValue * NewLookRightRate);
	}
	else
	{
		HandlePlayerRefLost();
	}
}

void AActionControllerBase::EssentialFrameworkInitialization(APawn* aPawn)
{
	UE_LOG(LogTemp, Log, TEXT("----Post Client Joined ClientTravel()----"));
	if (!aPawn)
	{
		UE_LOG(LogTemp, Log, TEXT("----No Controlled Pawn----"));
		return;
	}
	UE_LOG(LogTemp, Log, TEXT("----Possessed Pawn is: %s----"), *aPawn->GetName());
	this->PlayerRefInitialization(aPawn);
	UE_LOG(LogTemp, Log, TEXT("----Per Client Player Initialization Finished!----"));
	CLIENT_PostInitialization();
}

void AActionControllerBase::HandlePlayerRefLost()
{
	GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Red, TEXT("(ERROR) Player Controller Class Lost Player Ref"));
}
