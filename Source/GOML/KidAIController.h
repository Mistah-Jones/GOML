// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "KidAIController.generated.h"

/**
 * 
 */
UCLASS()
class GOML_API AKidAIController : public AAIController
{
	GENERATED_BODY()

public:
	AKidAIController();

public:

	virtual void OnPossess(APawn* InPawn) override;

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UBehaviorTree* Tree;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UBlackboardComponent* Board;
	
};
