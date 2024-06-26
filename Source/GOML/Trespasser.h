// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Trespasser.generated.h"

UENUM(BlueprintType)
enum FState {
	Nothing UMETA(DisplayName = "Nothing"),
	ChasingToy UMETA(DisplayName = "ChasingToy"),
	Frolicking UMETA(DisplayName = "Frolicking"),
	Fleeing UMETA(DisplayName = "Fleeing"),
	Idling UMETA(DisplayName = "Idling"),
	EnteringLawn UMETA(DisplayName = "EnteringLawn"),
	Sprayed UMETA(DisplayName = "Sprayed"),
	Playing UMETA(DisplayName = "Playing")
};

UCLASS()
class GOML_API ATrespasser : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATrespasser();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Let a damage amount of 0 represent picking up a toy, and 1 represent getting hit with the hose water
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
		int Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
		float MoveSpeed;

	//Should be the radius of the lawn from the center point
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
		float PatrolRadius; 

	//How far does the kid get pushed back when shot?
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Properties")
		float KnockBackForce;

	//How long does the trespasser wait to enter the lawn after spawning in?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
		float EnterWaitTime; 

	//How long does the trespasser wait to exit the lawn after grabbing a toy?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
		float ExitWaitTime; 

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Properties")
		float ExitTimer;

	//How long does the trespasser wait in between frolicking?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
		float StationaryWaitTime; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool TakingDamage;

	bool CountingDown;

	UPROPERTY(EditAnywhere)
		class TSubclassOf<AActor> ToyClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class AActor* TargetToy;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<AActor*> ToyArray;

	FNavLocation NavLocation;
	
	class UNavigationSystemV1* NavSystem;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TEnumAsByte <FState> CurrentState;

	//What state were they in before they started getting sprayed?
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TEnumAsByte <FState> PreviousState; 

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite) //Just make 2 points on either side of the map, and let the trespasser choose where to go when they exit
		FVector ExitLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite) //Let this represent the center of the lawn, kids will go to here if they find no toy
		FVector EnterLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite) //Origin of hose, direction from which kid getsb pushed when shot
		FVector ShotLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		bool GotToy;

	void SetState(FState NewState);

	UFUNCTION(BlueprintCallable)
	void EnterLawn();

	UFUNCTION(BlueprintCallable)
		void GettingSprayed(float Force, bool FireHose);

	//Enter Sprayed State
	UFUNCTION(BlueprintCallable)
		void StartSprayed();

	//Exit Sprayed State
	UFUNCTION(BlueprintCallable)
		void StopSprayed();

	UFUNCTION(BlueprintCallable) //Call when toy is retrieved
		void RetrieveToy();

	UFUNCTION(BlueprintCallable) //Call when you are going to a toy
		void GoToToy();

	UFUNCTION(BlueprintCallable) //Find a toy to pursue, enter toy chasing state
		bool GetToy();

	UFUNCTION(BlueprintCallable)
		void Flee();

	UFUNCTION(BlueprintCallable)
	void EnterFrolick();

	UFUNCTION(BlueprintCallable)
		void EnterPlay();

	void LoseHealth();

	void BeginFleeCountdown();

	void AdvanceFleeTimer();

	FTimerHandle FleeHandle;

};
