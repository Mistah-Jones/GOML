// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ArduinoHelpers.generated.h"

/**
 *
 */
UCLASS()
class GOML_API UArduinoHelpers : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "ArduinoHelper")
		static FString ByteArrayToString(TArray<uint8> ByteArray);

	UFUNCTION(BlueprintCallable, Category = "ArduinoHelper")
		static TArray<int32> ParseAccelGyroData(FString sensorData);

	UFUNCTION(BlueprintCallable, Category = "ArduinoHelper")
		static TArray<int32> GetAccelGyroMagnitudes(TArray<int32> AccGyroData);

	UFUNCTION(BlueprintCallable, Category = "ArduinoHelper")
		static TArray<int32> GetAccelGyroMagnitudesFromBytes(FString sensorData);

	UFUNCTION(BlueprintCallable, Category = "ArduinoHelper")
		static bool IsRFIDCardPresent(FString SensorData);

	UFUNCTION(BlueprintPure, Category = "ArduinoHelper")
		static FString GetCharacterAtIndex(FString string, int32 index);

	UFUNCTION(BlueprintCallable, Category = "ArduinoHelper")
		static FString ProcessIRSensorData(FString SensorData);

	UFUNCTION(BlueprintCallable, Category = "ArduinoHelper")
		static float ProcessTriggerData(FString SensorData);

	UFUNCTION(BlueprintCallable, Category = "ArduinoHelper")
		static float ProcessUltraSoundData(FString SensorData);

	UFUNCTION(BlueprintCallable, Category = "ArduinoHelper")
		static void ProcessTriggerInputAction(UObject* ref, float input, float deltaTime);
};
