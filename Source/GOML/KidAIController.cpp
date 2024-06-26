// Fill out your copyright notice in the Description page of Project Settings.


#include "KidAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"


AKidAIController::AKidAIController() {

}

void AKidAIController::OnPossess(APawn* InPawn) { 
	Super::OnPossess(InPawn);
	RunBehaviorTree(Tree);
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Possessing Enemy!"));
}


void AKidAIController::BeginPlay() {
	Super::BeginPlay();
	UseBlackboard(Tree->BlackboardAsset, Board);
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Controller Spawned!"));
}