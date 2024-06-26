// Fill out your copyright notice in the Description page of Project Settings.


#include "ArduinoHelpers.h"
#include "GenericPlatform/GenericPlatformMath.h"
#include "Kismet/GameplayStatics.h"

FString UArduinoHelpers::ByteArrayToString(TArray<uint8> ByteArray)
{
	FString Result;
	int32 Count = ByteArray.Num();
	Result.Empty(Count);

	uint8* In = ByteArray.GetData();

	while (Count)
	{
		// Put the byte into an int16 and add 1 to it, this keeps anything from being put into the string as a null terminator
		int16 Value = *In;

		Result += TCHAR(Value);

		++In;
		Count--;
	}

	return Result;
}

TArray<int32> UArduinoHelpers::ParseAccelGyroData(FString SensorData)
{
	SensorData.RemoveAt(0); // Remove |
	FString lhs, rhs;
	TArray<int32> result = TArray<int32_t>();
	while (SensorData.Split(",", &lhs, &rhs))
	{
		SensorData = rhs;
		int32 val = FCString::Atoi(*lhs);
		result.Add(val);
		/* code */
	}
	result.Add(FCString::Atoi(*rhs));
	return result;
}


TArray<int32> UArduinoHelpers::GetAccelGyroMagnitudes(TArray<int32> AccGyroData)
{
	TArray<int32> result = TArray<int32_t>();
	result.Add(sqrtl(AccGyroData[0] * AccGyroData[0] + AccGyroData[1] * AccGyroData[1] + AccGyroData[2] * AccGyroData[2]));
	result.Add(sqrtl(AccGyroData[3] * AccGyroData[3] + AccGyroData[4] * AccGyroData[4] + AccGyroData[5] * AccGyroData[5]));

	return result;
}

TArray<int32> UArduinoHelpers::GetAccelGyroMagnitudesFromBytes(FString sensorData)
{
	TArray<int32> data = ParseAccelGyroData(sensorData);
	if (data.Num() != 6) return TArray<int32_t>();

	return GetAccelGyroMagnitudes(data);
}

bool UArduinoHelpers::IsRFIDCardPresent(FString SensorData)
{
	return SensorData[1] == '1';
}

FString UArduinoHelpers::GetCharacterAtIndex(FString InString, int32 Index)
{
	if (Index >= InString.Len()) return TEXT("");
	FString retString = FString();
	retString.AppendChar(InString[Index]);
	return retString;
}

FString UArduinoHelpers::ProcessIRSensorData(FString SensorData)
{
	SensorData.RemoveAt(0);
	return SensorData;
}

float UArduinoHelpers::ProcessTriggerData(FString SensorData)
{
	SensorData.RemoveAt(0);
	//UGameViewportClient* ViewportClient = UGameplayStatics::GetGameInstance()->GetGameViewportClient();
	/*ViewportClient->InputAxis(
		ViewportClient->Viewport,
		0,
		FKey(FName(TEXT("Gamepad_RightTriggerAxis"))),
		FCString::Atoi(*SensorData) / 512.0,

		); */
	return  FCString::Atof(*SensorData);
}

void UArduinoHelpers::ProcessTriggerInputAction(UObject* ref, float input, float deltaTime)
{
	UGameViewportClient* ViewportClient = UGameplayStatics::GetGameInstance(ref->GetWorld())->GetGameViewportClient();
	ViewportClient->InputAxis(
		GEngine->GameViewport->Viewport,
		0,
		FKey(FName(TEXT("Shooting"))),
		input,
		deltaTime
	);
}

float UArduinoHelpers::ProcessUltraSoundData(FString SensorData)
{
	SensorData.RemoveAt(0);
	//UGameViewportClient* ViewportClient = UGameplayStatics::GetGameInstance()->GetGameViewportClient();
	/*ViewportClient->InputAxis(
		ViewportClient->Viewport,
		0,
		FKey(FName(TEXT("Gamepad_RightTriggerAxis"))),
		FCString::Atoi(*SensorData) / 512.0,

		); */
	return  FCString::Atof(*SensorData);
}