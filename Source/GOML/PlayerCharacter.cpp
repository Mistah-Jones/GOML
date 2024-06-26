// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "Drone.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APlayerCharacter::GetPowerup(int type) {
	if (type == 0) { //Nothing
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Nothing Powerup!"));
	}
	else if (type == 1) { //Score
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Score Powerup!"));
	}
	else if (type == 2) { //ScreenWipe
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("ScreenWipe Powerup!"));
	}

}