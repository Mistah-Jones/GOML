// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Toy.generated.h"

UCLASS()
class GOML_API AToy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AToy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Sphere collision component
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class USphereComponent* CollisionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		bool Targeted;


	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
