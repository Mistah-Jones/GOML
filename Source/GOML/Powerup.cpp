// Fill out your copyright notice in the Description page of Project Settings.


#include "Powerup.h"
#include "PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
APowerup::APowerup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;

}

// Called when the game starts or when spawned
void APowerup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APowerup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APowerup::SelectType() {
	int val = FMath::RandRange(1, 3);
	PowerUpType = (TEnumAsByte<FPowerType>)val;

}


void APowerup::Drop() {
	MeshComponent->SetSimulatePhysics(true);
	
}