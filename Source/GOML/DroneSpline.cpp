// Fill out your copyright notice in the Description page of Project Settings.


#include "DroneSpline.h"
#include "Components/SplineComponent.h"

// Sets default values
ADroneSpline::ADroneSpline()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Path = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
}

// Called when the game starts or when spawned
void ADroneSpline::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADroneSpline::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

