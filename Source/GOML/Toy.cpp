// Fill out your copyright notice in the Description page of Project Settings.


#include "Toy.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCharacter.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AToy::AToy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->OnComponentBeginOverlap.AddDynamic(this, &AToy::OnOverlapBegin);
	RootComponent = MeshComponent;

	//CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	//CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AToy::OnOverlapBegin);
	//CollisionComponent->SetupAttachment(MeshComponent);

}

// Called when the game starts or when spawned
void AToy::BeginPlay()
{
	Super::BeginPlay();



}

// Called every frame
void AToy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AToy::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	//ALWAYS APPLY SOME DAMAGE, APPLYING 0 DAMAGE MEANS TAKEDAMAGE WON'T BE CALLED
	//UGameplayStatics::ApplyDamage(OtherActor, 1, NULL, this, TSubclassOf<UDamageType>(UDamageType::StaticClass()));
	//Destroy();

}

