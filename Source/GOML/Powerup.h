// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Powerup.generated.h"

UENUM(BlueprintType)
enum FPowerType {
	Nothing UMETA(DisplayName = "Nothing"),
	Score UMETA(DisplayName = "Score"),
	ScreenWipe UMETA(DisplayName = "ScreenWipe"),
	FireHose UMETA(DisplayName = "FireHose"),
	Grenade UMETA(DisplayName = "Grenade")
};

UCLASS()
class GOML_API APowerup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APowerup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte <FPowerType> PowerUpType;

	UPROPERTY(EditAnywhere)
		class TSubclassOf<AActor> PlayerClass;

	UFUNCTION()
		void Drop(); //Begin Simulating physics so it will drop naturally on detach

	UFUNCTION()
		void SelectType();


};
