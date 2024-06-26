// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GOML/ArduinoHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArduinoHelpers() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GOML_API UClass* Z_Construct_UClass_UArduinoHelpers();
	GOML_API UClass* Z_Construct_UClass_UArduinoHelpers_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GOML();
// End Cross Module References
	DEFINE_FUNCTION(UArduinoHelpers::execProcessTriggerInputAction)
	{
		P_GET_OBJECT(UObject,Z_Param_ref);
		P_GET_PROPERTY(FFloatProperty,Z_Param_input);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UArduinoHelpers::ProcessTriggerInputAction(Z_Param_ref,Z_Param_input,Z_Param_deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArduinoHelpers::execProcessUltraSoundData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SensorData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UArduinoHelpers::ProcessUltraSoundData(Z_Param_SensorData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArduinoHelpers::execProcessTriggerData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SensorData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UArduinoHelpers::ProcessTriggerData(Z_Param_SensorData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArduinoHelpers::execProcessIRSensorData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SensorData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UArduinoHelpers::ProcessIRSensorData(Z_Param_SensorData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArduinoHelpers::execGetCharacterAtIndex)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_string);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UArduinoHelpers::GetCharacterAtIndex(Z_Param_string,Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArduinoHelpers::execIsRFIDCardPresent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SensorData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UArduinoHelpers::IsRFIDCardPresent(Z_Param_SensorData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArduinoHelpers::execGetAccelGyroMagnitudesFromBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_sensorData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UArduinoHelpers::GetAccelGyroMagnitudesFromBytes(Z_Param_sensorData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArduinoHelpers::execGetAccelGyroMagnitudes)
	{
		P_GET_TARRAY(int32,Z_Param_AccGyroData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UArduinoHelpers::GetAccelGyroMagnitudes(Z_Param_AccGyroData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArduinoHelpers::execParseAccelGyroData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_sensorData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UArduinoHelpers::ParseAccelGyroData(Z_Param_sensorData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArduinoHelpers::execByteArrayToString)
	{
		P_GET_TARRAY(uint8,Z_Param_ByteArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UArduinoHelpers::ByteArrayToString(Z_Param_ByteArray);
		P_NATIVE_END;
	}
	void UArduinoHelpers::StaticRegisterNativesUArduinoHelpers()
	{
		UClass* Class = UArduinoHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ByteArrayToString", &UArduinoHelpers::execByteArrayToString },
			{ "GetAccelGyroMagnitudes", &UArduinoHelpers::execGetAccelGyroMagnitudes },
			{ "GetAccelGyroMagnitudesFromBytes", &UArduinoHelpers::execGetAccelGyroMagnitudesFromBytes },
			{ "GetCharacterAtIndex", &UArduinoHelpers::execGetCharacterAtIndex },
			{ "IsRFIDCardPresent", &UArduinoHelpers::execIsRFIDCardPresent },
			{ "ParseAccelGyroData", &UArduinoHelpers::execParseAccelGyroData },
			{ "ProcessIRSensorData", &UArduinoHelpers::execProcessIRSensorData },
			{ "ProcessTriggerData", &UArduinoHelpers::execProcessTriggerData },
			{ "ProcessTriggerInputAction", &UArduinoHelpers::execProcessTriggerInputAction },
			{ "ProcessUltraSoundData", &UArduinoHelpers::execProcessUltraSoundData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArduinoHelpers_ByteArrayToString_Statics
	{
		struct ArduinoHelpers_eventByteArrayToString_Parms
		{
			TArray<uint8> ByteArray;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ByteArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArduinoHelpers_ByteArrayToString_Statics::NewProp_ByteArray_Inner = { "ByteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArduinoHelpers_ByteArrayToString_Statics::NewProp_ByteArray = { "ByteArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventByteArrayToString_Parms, ByteArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArduinoHelpers_ByteArrayToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventByteArrayToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArduinoHelpers_ByteArrayToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_ByteArrayToString_Statics::NewProp_ByteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_ByteArrayToString_Statics::NewProp_ByteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_ByteArrayToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArduinoHelpers_ByteArrayToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "ArduinoHelper" },
		{ "ModuleRelativePath", "ArduinoHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArduinoHelpers_ByteArrayToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArduinoHelpers, nullptr, "ByteArrayToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArduinoHelpers_ByteArrayToString_Statics::ArduinoHelpers_eventByteArrayToString_Parms), Z_Construct_UFunction_UArduinoHelpers_ByteArrayToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArduinoHelpers_ByteArrayToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArduinoHelpers_ByteArrayToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArduinoHelpers_ByteArrayToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArduinoHelpers_ByteArrayToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArduinoHelpers_ByteArrayToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudes_Statics
	{
		struct ArduinoHelpers_eventGetAccelGyroMagnitudes_Parms
		{
			TArray<int32> AccGyroData;
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AccGyroData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AccGyroData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudes_Statics::NewProp_AccGyroData_Inner = { "AccGyroData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudes_Statics::NewProp_AccGyroData = { "AccGyroData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventGetAccelGyroMagnitudes_Parms, AccGyroData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventGetAccelGyroMagnitudes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudes_Statics::NewProp_AccGyroData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudes_Statics::NewProp_AccGyroData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudes_Statics::Function_MetaDataParams[] = {
		{ "Category", "ArduinoHelper" },
		{ "ModuleRelativePath", "ArduinoHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArduinoHelpers, nullptr, "GetAccelGyroMagnitudes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudes_Statics::ArduinoHelpers_eventGetAccelGyroMagnitudes_Parms), Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudesFromBytes_Statics
	{
		struct ArduinoHelpers_eventGetAccelGyroMagnitudesFromBytes_Parms
		{
			FString sensorData;
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_sensorData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudesFromBytes_Statics::NewProp_sensorData = { "sensorData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventGetAccelGyroMagnitudesFromBytes_Parms, sensorData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudesFromBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudesFromBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventGetAccelGyroMagnitudesFromBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudesFromBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudesFromBytes_Statics::NewProp_sensorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudesFromBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudesFromBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudesFromBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "ArduinoHelper" },
		{ "ModuleRelativePath", "ArduinoHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudesFromBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArduinoHelpers, nullptr, "GetAccelGyroMagnitudesFromBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudesFromBytes_Statics::ArduinoHelpers_eventGetAccelGyroMagnitudesFromBytes_Parms), Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudesFromBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudesFromBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudesFromBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudesFromBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudesFromBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudesFromBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArduinoHelpers_GetCharacterAtIndex_Statics
	{
		struct ArduinoHelpers_eventGetCharacterAtIndex_Parms
		{
			FString string;
			int32 index;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_string;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArduinoHelpers_GetCharacterAtIndex_Statics::NewProp_string = { "string", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventGetCharacterAtIndex_Parms, string), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArduinoHelpers_GetCharacterAtIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventGetCharacterAtIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArduinoHelpers_GetCharacterAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventGetCharacterAtIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArduinoHelpers_GetCharacterAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_GetCharacterAtIndex_Statics::NewProp_string,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_GetCharacterAtIndex_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_GetCharacterAtIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArduinoHelpers_GetCharacterAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ArduinoHelper" },
		{ "ModuleRelativePath", "ArduinoHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArduinoHelpers_GetCharacterAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArduinoHelpers, nullptr, "GetCharacterAtIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArduinoHelpers_GetCharacterAtIndex_Statics::ArduinoHelpers_eventGetCharacterAtIndex_Parms), Z_Construct_UFunction_UArduinoHelpers_GetCharacterAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArduinoHelpers_GetCharacterAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArduinoHelpers_GetCharacterAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArduinoHelpers_GetCharacterAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArduinoHelpers_GetCharacterAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArduinoHelpers_GetCharacterAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArduinoHelpers_IsRFIDCardPresent_Statics
	{
		struct ArduinoHelpers_eventIsRFIDCardPresent_Parms
		{
			FString SensorData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SensorData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArduinoHelpers_IsRFIDCardPresent_Statics::NewProp_SensorData = { "SensorData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventIsRFIDCardPresent_Parms, SensorData), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UArduinoHelpers_IsRFIDCardPresent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ArduinoHelpers_eventIsRFIDCardPresent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArduinoHelpers_IsRFIDCardPresent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ArduinoHelpers_eventIsRFIDCardPresent_Parms), &Z_Construct_UFunction_UArduinoHelpers_IsRFIDCardPresent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArduinoHelpers_IsRFIDCardPresent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_IsRFIDCardPresent_Statics::NewProp_SensorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_IsRFIDCardPresent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArduinoHelpers_IsRFIDCardPresent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ArduinoHelper" },
		{ "ModuleRelativePath", "ArduinoHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArduinoHelpers_IsRFIDCardPresent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArduinoHelpers, nullptr, "IsRFIDCardPresent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArduinoHelpers_IsRFIDCardPresent_Statics::ArduinoHelpers_eventIsRFIDCardPresent_Parms), Z_Construct_UFunction_UArduinoHelpers_IsRFIDCardPresent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArduinoHelpers_IsRFIDCardPresent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArduinoHelpers_IsRFIDCardPresent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArduinoHelpers_IsRFIDCardPresent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArduinoHelpers_IsRFIDCardPresent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArduinoHelpers_IsRFIDCardPresent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArduinoHelpers_ParseAccelGyroData_Statics
	{
		struct ArduinoHelpers_eventParseAccelGyroData_Parms
		{
			FString sensorData;
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_sensorData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArduinoHelpers_ParseAccelGyroData_Statics::NewProp_sensorData = { "sensorData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventParseAccelGyroData_Parms, sensorData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArduinoHelpers_ParseAccelGyroData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArduinoHelpers_ParseAccelGyroData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventParseAccelGyroData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArduinoHelpers_ParseAccelGyroData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_ParseAccelGyroData_Statics::NewProp_sensorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_ParseAccelGyroData_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_ParseAccelGyroData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArduinoHelpers_ParseAccelGyroData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ArduinoHelper" },
		{ "ModuleRelativePath", "ArduinoHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArduinoHelpers_ParseAccelGyroData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArduinoHelpers, nullptr, "ParseAccelGyroData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArduinoHelpers_ParseAccelGyroData_Statics::ArduinoHelpers_eventParseAccelGyroData_Parms), Z_Construct_UFunction_UArduinoHelpers_ParseAccelGyroData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArduinoHelpers_ParseAccelGyroData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArduinoHelpers_ParseAccelGyroData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArduinoHelpers_ParseAccelGyroData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArduinoHelpers_ParseAccelGyroData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArduinoHelpers_ParseAccelGyroData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArduinoHelpers_ProcessIRSensorData_Statics
	{
		struct ArduinoHelpers_eventProcessIRSensorData_Parms
		{
			FString SensorData;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SensorData;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArduinoHelpers_ProcessIRSensorData_Statics::NewProp_SensorData = { "SensorData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventProcessIRSensorData_Parms, SensorData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArduinoHelpers_ProcessIRSensorData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventProcessIRSensorData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArduinoHelpers_ProcessIRSensorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_ProcessIRSensorData_Statics::NewProp_SensorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_ProcessIRSensorData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArduinoHelpers_ProcessIRSensorData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ArduinoHelper" },
		{ "ModuleRelativePath", "ArduinoHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArduinoHelpers_ProcessIRSensorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArduinoHelpers, nullptr, "ProcessIRSensorData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArduinoHelpers_ProcessIRSensorData_Statics::ArduinoHelpers_eventProcessIRSensorData_Parms), Z_Construct_UFunction_UArduinoHelpers_ProcessIRSensorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArduinoHelpers_ProcessIRSensorData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArduinoHelpers_ProcessIRSensorData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArduinoHelpers_ProcessIRSensorData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArduinoHelpers_ProcessIRSensorData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArduinoHelpers_ProcessIRSensorData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerData_Statics
	{
		struct ArduinoHelpers_eventProcessTriggerData_Parms
		{
			FString SensorData;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SensorData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerData_Statics::NewProp_SensorData = { "SensorData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventProcessTriggerData_Parms, SensorData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventProcessTriggerData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerData_Statics::NewProp_SensorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ArduinoHelper" },
		{ "ModuleRelativePath", "ArduinoHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArduinoHelpers, nullptr, "ProcessTriggerData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerData_Statics::ArduinoHelpers_eventProcessTriggerData_Parms), Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerInputAction_Statics
	{
		struct ArduinoHelpers_eventProcessTriggerInputAction_Parms
		{
			UObject* ref;
			float input;
			float deltaTime;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ref;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_input;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerInputAction_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventProcessTriggerInputAction_Parms, ref), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerInputAction_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventProcessTriggerInputAction_Parms, input), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerInputAction_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventProcessTriggerInputAction_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerInputAction_Statics::NewProp_ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerInputAction_Statics::NewProp_input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerInputAction_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerInputAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ArduinoHelper" },
		{ "ModuleRelativePath", "ArduinoHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArduinoHelpers, nullptr, "ProcessTriggerInputAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerInputAction_Statics::ArduinoHelpers_eventProcessTriggerInputAction_Parms), Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerInputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArduinoHelpers_ProcessUltraSoundData_Statics
	{
		struct ArduinoHelpers_eventProcessUltraSoundData_Parms
		{
			FString SensorData;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SensorData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArduinoHelpers_ProcessUltraSoundData_Statics::NewProp_SensorData = { "SensorData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventProcessUltraSoundData_Parms, SensorData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArduinoHelpers_ProcessUltraSoundData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArduinoHelpers_eventProcessUltraSoundData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArduinoHelpers_ProcessUltraSoundData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_ProcessUltraSoundData_Statics::NewProp_SensorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArduinoHelpers_ProcessUltraSoundData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArduinoHelpers_ProcessUltraSoundData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ArduinoHelper" },
		{ "ModuleRelativePath", "ArduinoHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArduinoHelpers_ProcessUltraSoundData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArduinoHelpers, nullptr, "ProcessUltraSoundData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArduinoHelpers_ProcessUltraSoundData_Statics::ArduinoHelpers_eventProcessUltraSoundData_Parms), Z_Construct_UFunction_UArduinoHelpers_ProcessUltraSoundData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArduinoHelpers_ProcessUltraSoundData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArduinoHelpers_ProcessUltraSoundData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArduinoHelpers_ProcessUltraSoundData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArduinoHelpers_ProcessUltraSoundData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArduinoHelpers_ProcessUltraSoundData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArduinoHelpers);
	UClass* Z_Construct_UClass_UArduinoHelpers_NoRegister()
	{
		return UArduinoHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UArduinoHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArduinoHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GOML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArduinoHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArduinoHelpers_ByteArrayToString, "ByteArrayToString" }, // 1781504508
		{ &Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudes, "GetAccelGyroMagnitudes" }, // 1696475845
		{ &Z_Construct_UFunction_UArduinoHelpers_GetAccelGyroMagnitudesFromBytes, "GetAccelGyroMagnitudesFromBytes" }, // 374793182
		{ &Z_Construct_UFunction_UArduinoHelpers_GetCharacterAtIndex, "GetCharacterAtIndex" }, // 2974672618
		{ &Z_Construct_UFunction_UArduinoHelpers_IsRFIDCardPresent, "IsRFIDCardPresent" }, // 2932100886
		{ &Z_Construct_UFunction_UArduinoHelpers_ParseAccelGyroData, "ParseAccelGyroData" }, // 2688575416
		{ &Z_Construct_UFunction_UArduinoHelpers_ProcessIRSensorData, "ProcessIRSensorData" }, // 1253203799
		{ &Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerData, "ProcessTriggerData" }, // 2109994378
		{ &Z_Construct_UFunction_UArduinoHelpers_ProcessTriggerInputAction, "ProcessTriggerInputAction" }, // 685725765
		{ &Z_Construct_UFunction_UArduinoHelpers_ProcessUltraSoundData, "ProcessUltraSoundData" }, // 3317327432
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArduinoHelpers_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ArduinoHelpers.h" },
		{ "ModuleRelativePath", "ArduinoHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArduinoHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArduinoHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArduinoHelpers_Statics::ClassParams = {
		&UArduinoHelpers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UArduinoHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArduinoHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArduinoHelpers()
	{
		if (!Z_Registration_Info_UClass_UArduinoHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArduinoHelpers.OuterSingleton, Z_Construct_UClass_UArduinoHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArduinoHelpers.OuterSingleton;
	}
	template<> GOML_API UClass* StaticClass<UArduinoHelpers>()
	{
		return UArduinoHelpers::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArduinoHelpers);
	UArduinoHelpers::~UArduinoHelpers() {}
	struct Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_ArduinoHelpers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_ArduinoHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArduinoHelpers, UArduinoHelpers::StaticClass, TEXT("UArduinoHelpers"), &Z_Registration_Info_UClass_UArduinoHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArduinoHelpers), 3482172501U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_ArduinoHelpers_h_933143009(TEXT("/Script/GOML"),
		Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_ArduinoHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_ArduinoHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
