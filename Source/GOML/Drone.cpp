// Fill out your copyright notice in the Description page of Project Settings.


#include "Drone.h"
#include "Math/UnrealMathUtility.h"
#include "DroneSpline.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCharacter.h"
#include "Components/StaticMeshComponent.h"
#include "Powerup.h"

// Sets default values
ADrone::ADrone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->OnComponentBeginOverlap.AddDynamic(this, &ADrone::OnOverlapBegin);
	RootComponent = MeshComponent;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	CollisionComponent->SetupAttachment(MeshComponent);

}

// Called when the game starts or when spawned
void ADrone::BeginPlay()
{
	Super::BeginPlay();
	
	//Pick a random spline path to follow 
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), SplineClass, PathsArray);
	int SplineVal = FMath::RandRange(0, PathsArray.Num() - 1);
	TargetSpline = (ADroneSpline*)PathsArray[SplineVal];

	SpawnPackage();

}

// Called every frame
void ADrone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADrone::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	LoseHealth();
	if (Health == 0) {
		DropPackage();
	}
}

void ADrone::DropPackage() {
	if (Package) {
		Package->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		Package->Drop();

	}

}

void ADrone::SpawnPackage() {
	UWorld* World = GetWorld();

	if (World) {
		Package = World->SpawnActor<APowerup>(PackageClass, GetActorLocation() + Displacement, GetActorRotation());
		if (Package) {

			Package->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
			if (SpawnRandomPowerup) {
				Package->SelectType();
			}
			

		}
	}
}

void ADrone::LoseHealth() {
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Drone Taking Damage!"));
	Health--;
}