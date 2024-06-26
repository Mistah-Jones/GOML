// Fill out your copyright notice in the Description page of Project Settings.


#include "Trespasser.h"
#include "Toy.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "AI/Navigation/NavigationTypes.h"
#include "KidAIController.h"
#include "NavigationSystem.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

//Apply dog animations when in


// Sets default values
ATrespasser::ATrespasser()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATrespasser::BeginPlay()
{
	Super::BeginPlay();
	NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
	NavLocation = FNavLocation(FVector::ZeroVector);
	
}

// Called every frame
void ATrespasser::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATrespasser::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//Let a damage amount of 1 represent picking up a toy (Could be cleaner, like just do an overlap on the toy)
float ATrespasser::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
	if (DamageAmount == 1) {
		RetrieveToy();
		
	}
	return 0;
}

void ATrespasser::EnterLawn() { //Could definitely clean this up, just remove this function and replace its blueprint call with Enter Frolick
	EnterFrolick();
}

void ATrespasser::EnterPlay() {
	SetState(Playing);
}

void ATrespasser::RetrieveToy() {
	AKidAIController* AICont = (AKidAIController*)GetController();
	if (AICont) {
		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("RetrievedToy!"));
		GotToy = true;
		if (CurrentState != Sprayed) {
			EnterPlay();
		}
		
		
		
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Failed to get AIController in RetrieveToy!"));
	}
	
}

void ATrespasser::GoToToy() {
	
	AKidAIController* AICont = (AKidAIController*)GetController();
	if (AICont) {
		AICont->MoveToActor(TargetToy);
		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Going to Toy!"));
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Failed to get AIController in GoToToy!"));
	}

}

bool ATrespasser::GetToy() {
	if (!GotToy) {
		//TargetToy = UGameplayStatics::GetActorOfClass(GetWorld(), ToyClass);
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ToyClass, ToyArray);
		AToy* tmpToy;
		for (int i = 0; i < ToyArray.Num(); i++) {
			tmpToy = (AToy*)ToyArray[i];
			if (!tmpToy->Targeted) {
				tmpToy->Targeted = true;
				TargetToy = ToyArray[i];
				break;
			}

		}

		if (TargetToy) { //We found a toy, so enter the chasing state
			//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Found a Toy!"));
			SetState(ChasingToy);

			return true;
		}
		else { //No toy was found, so instead we'll enter the frolicking state
			//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("No Toy was found!"));
			SetState(EnteringLawn);
			return false;
		}
	}
	else {
		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Already have a toy!"));
		EnterPlay();
		return false;
	}
}

//Should change this to a blueprint function becausew of powerup
void ATrespasser::GettingSprayed(float Force, bool FireHose) {
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, TEXT("GettingSprayed!!!"));
	LoseHealth();
	//If the firehose is active
	if (FireHose) { 
		LoseHealth();
		LoseHealth();
	}

	if (Health <= 0) {
		Flee();
	}

	FRotator newRot = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), ShotLocation);
	newRot.Roll = 0;
	newRot.Pitch = 0;

	SetActorRotation(newRot);
	FVector Direction = -(ShotLocation - GetActorLocation()).GetSafeNormal();
	GetCharacterMovement()->AddForce(Direction * Force);
}

void ATrespasser::StartSprayed() {
	if (CurrentState != Fleeing) {
		PreviousState = CurrentState;	
		AKidAIController* AICont = (AKidAIController*)GetController();
		if (AICont) {
			AICont->StopMovement();
		}
		SetState(Sprayed);
	}

}

void ATrespasser::StopSprayed() {
	if (CurrentState != Fleeing) {
		AKidAIController* AICont = (AKidAIController*)GetController();
		if (AICont) {
			//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Orange, TEXT("No Longer Sprayed!!!!"));
			SetState(PreviousState);
		}
	}
}

void ATrespasser::Flee() {
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::White, TEXT("RUN AWAY!"));
	SetState(Fleeing);
}

void ATrespasser::LoseHealth() {
	Health--;
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Taking Damage!"));
}

void ATrespasser::EnterFrolick() {
	SetState(Frolicking);
	if (!CountingDown) {
		BeginFleeCountdown();
	}
}

void ATrespasser::SetState(FState NewState) {
	AKidAIController* AICont = (AKidAIController*)GetController();
	if (AICont) {
		CurrentState = NewState;
		AICont->Board->SetValueAsEnum("State", CurrentState); //For some reason the BB enum isn't working as intended
		AICont->Board->SetValueAsInt("StateNum", (int32)CurrentState); //So instead I'm just using an int which IS working. May fix or clean up later
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Failed to get AIController in SetState!"));
	}
}

void ATrespasser::BeginFleeCountdown() {
	CountingDown = true;
	ExitTimer = ExitWaitTime;
	GetWorldTimerManager().SetTimer(FleeHandle, this, &ATrespasser::AdvanceFleeTimer, 1.0f, true);
}

void ATrespasser::AdvanceFleeTimer() {
	ExitWaitTime--;
	if (ExitWaitTime <= 0) {
		Flee();
	}
}