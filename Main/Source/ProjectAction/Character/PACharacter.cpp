// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PACharacter.h"

#include "Components/CapsuleComponent.h"

static FName NAME_PACharacterCollisionProfile_Capsule(TEXT("PAPawnCapsule"));
static FName NAME_PACharacterCollisionProfile_Pawn(TEXT("PAPawn"));

APACharacter::APACharacter(const FObjectInitializer& ObjectInitializer)
{
	// Avoid ticking characters if possible.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	UCapsuleComponent* CapComponent = GetComponentByClass<UCapsuleComponent>();
	check(CapComponent);
	CapComponent->InitCapsuleSize(40, 90);
	//这里使用编辑器的预设，先注释掉
	//CapsuleComponent->SetCollisionProfileName(NAME_PACharacterCollisionProfile_Capsule);

	USkeletalMeshComponent* SkeletalMesh = GetMesh();
	check(SkeletalMesh);
	SkeletalMesh->SetRelativeRotation(FRotator(0,-90,0));
	//CapsuleComponent->SetCollisionProfileName(NAME_PACharacterCollisionProfile_Pawn);
	
	PawnExtComponent->CreateDefaultSubobject<UPAPawnExtensionComponent>(TEXT("PawnExtensionComponent"));
	check(PawnExtComponent);

	//todo PawnExtCompoent加ASC
	//todo 实现MovementComponent
	//todo 实现CameraComponent
	
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;
}

void APACharacter::PreInitializeComponents()
{
	Super::PreInitializeComponents();
}

void APACharacter::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();

	if (PawnExtComponent)
	{
		//PawnExtComponent->CheckDefaultInitialization(); // 或你自己的简化逻辑
	}
}

void APACharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void APACharacter::Reset()
{
	Super::Reset();
}

void APACharacter::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void APACharacter::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker)
{
	Super::PreReplication(ChangedPropertyTracker);

	if (UCharacterMovementComponent* MovementComponent = GetCharacterMovement())
	{
		// // Compress Acceleration: XY components as direction + magnitude, Z component as direct value
		// const double MaxAccel = MovementComponent->MaxAcceleration;
		// const FVector CurrentAccel = MovementComponent->GetCurrentAcceleration();
		// double AccelXYRadians, AccelXYMagnitude;
		// FMath::CartesianToPolar(CurrentAccel.X, CurrentAccel.Y, AccelXYMagnitude, AccelXYRadians);
		//
		// ReplicatedAcceleration.AccelXYRadians   = FMath::FloorToInt((AccelXYRadians / TWO_PI) * 255.0);     // [0, 2PI] -> [0, 255]
		// ReplicatedAcceleration.AccelXYMagnitude = FMath::FloorToInt((AccelXYMagnitude / MaxAccel) * 255.0);	// [0, MaxAccel] -> [0, 255]
		// ReplicatedAcceleration.AccelZ           = FMath::FloorToInt((CurrentAccel.Z / MaxAccel) * 127.0);   // [-MaxAccel, MaxAccel] -> [-127, 127]
	}
}

void APACharacter::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	//const FGenericTeamId OldTeamId = GetGenericTeamId();

	Super::NotifyControllerChanged();

	// Update our team ID based on the controller
	if (HasAuthority() && (GetController() != nullptr))
	{
		// if (ILyraTeamAgentInterface* ControllerWithTeam = Cast<ILyraTeamAgentInterface>(GetController()))
		// {
		// 	MyTeamID = ControllerWithTeam->GetGenericTeamId();
		// 	ConditionalBroadcastTeamChanged(this, OldTeamId, MyTeamID);
		// }
	}
}

void APACharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	PawnExtComponent->HandleControllerChanged();

	// Grab the current team ID and listen for future changes
	// if (ILyraTeamAgentInterface* ControllerAsTeamProvider = Cast<ILyraTeamAgentInterface>(NewController))
	// {
	// 	MyTeamID = ControllerAsTeamProvider->GetGenericTeamId();
	// 	ControllerAsTeamProvider->GetTeamChangedDelegateChecked().AddDynamic(this, &ThisClass::OnControllerChangedTeam);
	// }
	// ConditionalBroadcastTeamChanged(this, OldTeamID, MyTeamID);
}

void APACharacter::UnPossessed()
{
	
	AController* const OldController = GetController();

	// Stop listening for changes from the old controller
	// const FGenericTeamId OldTeamID = MyTeamID;
	// if (ILyraTeamAgentInterface* ControllerAsTeamProvider = Cast<ILyraTeamAgentInterface>(OldController))
	// {
	// 	ControllerAsTeamProvider->GetTeamChangedDelegateChecked().RemoveAll(this);
	// }

	Super::UnPossessed();

	PawnExtComponent->HandleControllerChanged();

	// // Determine what the new team ID should be afterwards
	// MyTeamID = DetermineNewTeamAfterPossessionEnds(OldTeamID);
	// ConditionalBroadcastTeamChanged(this, OldTeamID, MyTeamID);
}

void APACharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PawnExtComponent->SetupPlayerInputComponent();
}
