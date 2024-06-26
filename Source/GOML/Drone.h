// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Drone.generated.h"

UCLASS()
class GOML_API ADrone : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADrone();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Health;

	UPROPERTY(EditAnywhere, BlueprintReadOnly) //Debug bool, so we can toggle betwween spawning random and non-random powerups for testing purposes
		bool SpawnRandomPowerup;

	//modifier to adjust where the powerup is relative to the drone (should hang just below the drone);
	UPROPERTY(EditAnywhere)
		FVector Displacement; 

	// Sphere collision component
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class USphereComponent* CollisionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere)
		class TSubclassOf<AActor> SplineClass;

	UPROPERTY(EditAnywhere)
		class TSubclassOf<class APowerup> PackageClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class APowerup* Package;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class ADroneSpline* TargetSpline;

	class TArray<AActor*> PathsArray;

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void LoseHealth();

	UFUNCTION(BlueprintCallable)
	void DropPackage();

	void SpawnPackage();

};
