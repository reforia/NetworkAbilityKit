// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHeroControllerBase.h"
#include "GameFramework/Pawn.h"
#include "PlayerHeroBase.h"
#include "UnrealNetwork.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
#include "GM_Arena.h"
#include "StatusSetBase.h"
#include "Kismet/KismetMathLibrary.h"

APlayerHeroControllerBase::APlayerHeroControllerBase()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PlayerInitialized = false;

	CursorPointVector = FVector::ZeroVector;
	CursorPointDirection = FVector::ZeroVector;
	CursorDistanceToPlayer = 0.0f;
	CursorDistanceToPlayerNormalized = 0.0f;
	MaxCursorDistanceOffset = 1000.0f;

	SetReplicates(true);
}

void APlayerHeroControllerBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// This actually takes care of replicating the Variable
	DOREPLIFETIME(APlayerHeroControllerBase, PlayerRef);
	DOREPLIFETIME(APlayerHeroControllerBase, PlayerInitialized);
}


// Initialize Player Reference
void APlayerHeroControllerBase::PlayerRefInitialization(APawn* PossessedPawn)
{
	UE_LOG(LogTemp, Log, TEXT("----Enter Player Ref Initialization----"));
	if (!PossessedPawn)
	{
		UE_LOG(LogTemp, Log, TEXT("----No valid Possessed Pawn----"));
		return;
	}
	UE_LOG(LogTemp, Log, TEXT("----Start Initialize Player Ref----"));
	
	APlayerHeroBase* TmpPlayerRef = Cast<APlayerHeroBase>(PossessedPawn);
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


void APlayerHeroControllerBase::CLIENT_PostInitialization_Implementation()
{
	BP_CLIENT_PostInitialization();
}

bool APlayerHeroControllerBase::CLIENT_PostInitialization_Validate()
{
	return true;
}

void APlayerHeroControllerBase::SERVER_PostLogin_Implementation()
{
	AGM_Arena* TmpGamemode = Cast<AGM_Arena>(GetWorld()->GetAuthGameMode());
	if (!TmpGamemode)
	{
		UE_LOG(LogTemp, Log, TEXT("----Gamemode Not Found----"));
		return;
	}
	UE_LOG(LogTemp, Log, TEXT("----Server call GM to spawn player----"));
	TmpGamemode->SERVER_SpawnPlayer(this);
}

bool APlayerHeroControllerBase::SERVER_PostLogin_Validate()
{
	return true;
}

void APlayerHeroControllerBase::CLIENT_PostLogin_Implementation()
{
	// DO ANY Client Logic Here, before pawn spawned and possessed
	// Then, call SERVER_PostLogin
	BP_CLIENT_PostLogin();
	SERVER_PostLogin();
}

bool APlayerHeroControllerBase::CLIENT_PostLogin_Validate()
{
	return true;
}

//bool APlayerHeroControllerBase::PlayerRefInitialization_Validate(APawn* PossessedPawn)
//{
//	return true;
//}

void APlayerHeroControllerBase::BeginPlay()
{
	Super::BeginPlay();
}

void APlayerHeroControllerBase::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
	UE_LOG(LogTemp, Log, TEXT("----Wait For Join Session Process to Finish----"));
	// Hack solution now, Wait until client actually joined and finished ClientTravel()

	EssentialFrameworkInitialization(aPawn);

}

void APlayerHeroControllerBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	UpdateCursorInfo();
	UpdateControlRotation();
	UpdatePlayerCameraOffset();

}

void APlayerHeroControllerBase::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveUp", this, &APlayerHeroControllerBase::MoveUp);
	InputComponent->BindAxis("MoveRight", this, &APlayerHeroControllerBase::MoveRight);
}

void APlayerHeroControllerBase::MoveUp(float AxisValue)
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
		PlayerRef->AddMovementInput(FVector(1.0f, 0.0f, 0.0f), AxisValue);
	}
	else
	{
		HandlePlayerRefLost();
	}
}

void APlayerHeroControllerBase::MoveRight(float AxisValue)
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
		PlayerRef->AddMovementInput(FVector(0.0f, 1.0f, 0.0f), AxisValue);
	}
	else
	{
		HandlePlayerRefLost();
	}
}

void APlayerHeroControllerBase::HandlePlayerRefLost()
{
	GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Red, TEXT("(ERROR) Player Controller Class Lost Player Ref"));
}

void APlayerHeroControllerBase::EssentialFrameworkInitialization(APawn* aPawn)
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

void APlayerHeroControllerBase::UpdateCursorInfo()
{
	float LocX;
	float LocY;
	this->GetMousePosition(LocX, LocY);

	FVector2D MousePos(LocX, LocY);
	FHitResult HitResult;
	const bool bTraceComplex = false;
	if (this->GetHitResultAtScreenPosition(MousePos, ECC_Visibility, bTraceComplex, HitResult) == true)
	{
		if (!PlayerRef)
		{
			HandlePlayerRefLost();
			return;
		}
		CursorPointPosition = HitResult.Location;
		CursorPointVector = CursorPointPosition - PlayerRef->GetMesh()->GetComponentLocation();
		CursorPointDirection = CursorPointVector.GetSafeNormal();
		CursorDistanceToPlayer = CursorPointVector.Size();
		CursorDistanceToPlayerNormalized = FMath::Clamp(CursorDistanceToPlayer / MaxCursorDistanceOffset, 0.0f, 1.0f);
	}
}

void APlayerHeroControllerBase::UpdateControlRotation()
{
	if (!PlayerRef)
	{
		HandlePlayerRefLost();
		return;
	}

	FRotator LookAtRot = FRotator::ZeroRotator;
	LookAtRot = UKismetMathLibrary::FindLookAtRotation(PlayerRef->GetMesh()->GetComponentLocation(), CursorPointPosition);
	SetControlRotation(FRotator(LookAtRot.Pitch, LookAtRot.Yaw, 0.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Cyan, TEXT("Controller Rotation Updated"));
	//GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Cyan, FString::Printf(TEXT("Look At Rotation is: %s"), *LookAtRot.ToString()));

}

void APlayerHeroControllerBase::UpdatePlayerCameraOffset_Implementation()
{
	if (!PlayerRef)
	{
		HandlePlayerRefLost();
		return;
	}
	PlayerRef->UpdateCameraOffset(CursorPointDirection, CursorDistanceToPlayerNormalized);
}



