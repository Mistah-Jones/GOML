// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GOML/Trespasser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrespasser() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	GOML_API UClass* Z_Construct_UClass_ATrespasser();
	GOML_API UClass* Z_Construct_UClass_ATrespasser_NoRegister();
	GOML_API UEnum* Z_Construct_UEnum_GOML_FState();
	UPackage* Z_Construct_UPackage__Script_GOML();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FState;
	static UEnum* FState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GOML_FState, Z_Construct_UPackage__Script_GOML(), TEXT("FState"));
		}
		return Z_Registration_Info_UEnum_FState.OuterSingleton;
	}
	template<> GOML_API UEnum* StaticEnum<FState>()
	{
		return FState_StaticEnum();
	}
	struct Z_Construct_UEnum_GOML_FState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GOML_FState_Statics::Enumerators[] = {
		{ "Nothing", (int64)Nothing },
		{ "ChasingToy", (int64)ChasingToy },
		{ "Frolicking", (int64)Frolicking },
		{ "Fleeing", (int64)Fleeing },
		{ "Idling", (int64)Idling },
		{ "EnteringLawn", (int64)EnteringLawn },
		{ "Sprayed", (int64)Sprayed },
		{ "Playing", (int64)Playing },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GOML_FState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChasingToy.DisplayName", "ChasingToy" },
		{ "ChasingToy.Name", "ChasingToy" },
		{ "EnteringLawn.DisplayName", "EnteringLawn" },
		{ "EnteringLawn.Name", "EnteringLawn" },
		{ "Fleeing.DisplayName", "Fleeing" },
		{ "Fleeing.Name", "Fleeing" },
		{ "Frolicking.DisplayName", "Frolicking" },
		{ "Frolicking.Name", "Frolicking" },
		{ "Idling.DisplayName", "Idling" },
		{ "Idling.Name", "Idling" },
		{ "ModuleRelativePath", "Trespasser.h" },
		{ "Nothing.DisplayName", "Nothing" },
		{ "Nothing.Name", "Nothing" },
		{ "Playing.DisplayName", "Playing" },
		{ "Playing.Name", "Playing" },
		{ "Sprayed.DisplayName", "Sprayed" },
		{ "Sprayed.Name", "Sprayed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GOML_FState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GOML,
		nullptr,
		"FState",
		"FState",
		Z_Construct_UEnum_GOML_FState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GOML_FState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_GOML_FState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GOML_FState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GOML_FState()
	{
		if (!Z_Registration_Info_UEnum_FState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FState.InnerSingleton, Z_Construct_UEnum_GOML_FState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FState.InnerSingleton;
	}
	DEFINE_FUNCTION(ATrespasser::execEnterPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrespasser::execEnterFrolick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterFrolick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrespasser::execFlee)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Flee();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrespasser::execGetToy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetToy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrespasser::execGoToToy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoToToy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrespasser::execRetrieveToy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RetrieveToy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrespasser::execStopSprayed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSprayed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrespasser::execStartSprayed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSprayed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrespasser::execGettingSprayed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Force);
		P_GET_UBOOL(Z_Param_FireHose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GettingSprayed(Z_Param_Force,Z_Param_FireHose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrespasser::execEnterLawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterLawn();
		P_NATIVE_END;
	}
	void ATrespasser::StaticRegisterNativesATrespasser()
	{
		UClass* Class = ATrespasser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterFrolick", &ATrespasser::execEnterFrolick },
			{ "EnterLawn", &ATrespasser::execEnterLawn },
			{ "EnterPlay", &ATrespasser::execEnterPlay },
			{ "Flee", &ATrespasser::execFlee },
			{ "GettingSprayed", &ATrespasser::execGettingSprayed },
			{ "GetToy", &ATrespasser::execGetToy },
			{ "GoToToy", &ATrespasser::execGoToToy },
			{ "RetrieveToy", &ATrespasser::execRetrieveToy },
			{ "StartSprayed", &ATrespasser::execStartSprayed },
			{ "StopSprayed", &ATrespasser::execStopSprayed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATrespasser_EnterFrolick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrespasser_EnterFrolick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Trespasser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrespasser_EnterFrolick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrespasser, nullptr, "EnterFrolick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrespasser_EnterFrolick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrespasser_EnterFrolick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrespasser_EnterFrolick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrespasser_EnterFrolick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrespasser_EnterLawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrespasser_EnterLawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Trespasser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrespasser_EnterLawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrespasser, nullptr, "EnterLawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrespasser_EnterLawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrespasser_EnterLawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrespasser_EnterLawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrespasser_EnterLawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrespasser_EnterPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrespasser_EnterPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Trespasser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrespasser_EnterPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrespasser, nullptr, "EnterPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrespasser_EnterPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrespasser_EnterPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrespasser_EnterPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrespasser_EnterPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrespasser_Flee_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrespasser_Flee_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Trespasser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrespasser_Flee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrespasser, nullptr, "Flee", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrespasser_Flee_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrespasser_Flee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrespasser_Flee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrespasser_Flee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrespasser_GettingSprayed_Statics
	{
		struct Trespasser_eventGettingSprayed_Parms
		{
			float Force;
			bool FireHose;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Force;
		static void NewProp_FireHose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FireHose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATrespasser_GettingSprayed_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Trespasser_eventGettingSprayed_Parms, Force), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATrespasser_GettingSprayed_Statics::NewProp_FireHose_SetBit(void* Obj)
	{
		((Trespasser_eventGettingSprayed_Parms*)Obj)->FireHose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATrespasser_GettingSprayed_Statics::NewProp_FireHose = { "FireHose", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Trespasser_eventGettingSprayed_Parms), &Z_Construct_UFunction_ATrespasser_GettingSprayed_Statics::NewProp_FireHose_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrespasser_GettingSprayed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrespasser_GettingSprayed_Statics::NewProp_Force,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrespasser_GettingSprayed_Statics::NewProp_FireHose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrespasser_GettingSprayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Trespasser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrespasser_GettingSprayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrespasser, nullptr, "GettingSprayed", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATrespasser_GettingSprayed_Statics::Trespasser_eventGettingSprayed_Parms), Z_Construct_UFunction_ATrespasser_GettingSprayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrespasser_GettingSprayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrespasser_GettingSprayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrespasser_GettingSprayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrespasser_GettingSprayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrespasser_GettingSprayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrespasser_GetToy_Statics
	{
		struct Trespasser_eventGetToy_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATrespasser_GetToy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Trespasser_eventGetToy_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATrespasser_GetToy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Trespasser_eventGetToy_Parms), &Z_Construct_UFunction_ATrespasser_GetToy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrespasser_GetToy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrespasser_GetToy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrespasser_GetToy_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Find a toy to pursue, enter toy chasing state\n" },
		{ "ModuleRelativePath", "Trespasser.h" },
		{ "ToolTip", "Find a toy to pursue, enter toy chasing state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrespasser_GetToy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrespasser, nullptr, "GetToy", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATrespasser_GetToy_Statics::Trespasser_eventGetToy_Parms), Z_Construct_UFunction_ATrespasser_GetToy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrespasser_GetToy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrespasser_GetToy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrespasser_GetToy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrespasser_GetToy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrespasser_GetToy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrespasser_GoToToy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrespasser_GoToToy_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Call when you are going to a toy\n" },
		{ "ModuleRelativePath", "Trespasser.h" },
		{ "ToolTip", "Call when you are going to a toy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrespasser_GoToToy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrespasser, nullptr, "GoToToy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrespasser_GoToToy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrespasser_GoToToy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrespasser_GoToToy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrespasser_GoToToy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrespasser_RetrieveToy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrespasser_RetrieveToy_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Call when toy is retrieved\n" },
		{ "ModuleRelativePath", "Trespasser.h" },
		{ "ToolTip", "Call when toy is retrieved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrespasser_RetrieveToy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrespasser, nullptr, "RetrieveToy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrespasser_RetrieveToy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrespasser_RetrieveToy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrespasser_RetrieveToy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrespasser_RetrieveToy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrespasser_StartSprayed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrespasser_StartSprayed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Enter Sprayed State\n" },
		{ "ModuleRelativePath", "Trespasser.h" },
		{ "ToolTip", "Enter Sprayed State" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrespasser_StartSprayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrespasser, nullptr, "StartSprayed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrespasser_StartSprayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrespasser_StartSprayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrespasser_StartSprayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrespasser_StartSprayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrespasser_StopSprayed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrespasser_StopSprayed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Exit Sprayed State\n" },
		{ "ModuleRelativePath", "Trespasser.h" },
		{ "ToolTip", "Exit Sprayed State" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrespasser_StopSprayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrespasser, nullptr, "StopSprayed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrespasser_StopSprayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrespasser_StopSprayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrespasser_StopSprayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrespasser_StopSprayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrespasser);
	UClass* Z_Construct_UClass_ATrespasser_NoRegister()
	{
		return ATrespasser::StaticClass();
	}
	struct Z_Construct_UClass_ATrespasser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatrolRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PatrolRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KnockBackForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockBackForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnterWaitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnterWaitTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitWaitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExitWaitTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExitTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StationaryWaitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StationaryWaitTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TakingDamage_MetaData[];
#endif
		static void NewProp_TakingDamage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TakingDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToyClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ToyClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetToy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetToy;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToyArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToyArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToyArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousState_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExitLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnterLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnterLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShotLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GotToy_MetaData[];
#endif
		static void NewProp_GotToy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GotToy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrespasser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GOML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATrespasser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATrespasser_EnterFrolick, "EnterFrolick" }, // 597543853
		{ &Z_Construct_UFunction_ATrespasser_EnterLawn, "EnterLawn" }, // 3620547435
		{ &Z_Construct_UFunction_ATrespasser_EnterPlay, "EnterPlay" }, // 4294640989
		{ &Z_Construct_UFunction_ATrespasser_Flee, "Flee" }, // 498764948
		{ &Z_Construct_UFunction_ATrespasser_GettingSprayed, "GettingSprayed" }, // 1560749401
		{ &Z_Construct_UFunction_ATrespasser_GetToy, "GetToy" }, // 3128184949
		{ &Z_Construct_UFunction_ATrespasser_GoToToy, "GoToToy" }, // 2515789117
		{ &Z_Construct_UFunction_ATrespasser_RetrieveToy, "RetrieveToy" }, // 1177686574
		{ &Z_Construct_UFunction_ATrespasser_StartSprayed, "StartSprayed" }, // 3519403887
		{ &Z_Construct_UFunction_ATrespasser_StopSprayed, "StopSprayed" }, // 2632000827
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrespasser_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Trespasser.h" },
		{ "ModuleRelativePath", "Trespasser.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrespasser_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Trespasser.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATrespasser_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATrespasser, Health), METADATA_PARAMS(Z_Construct_UClass_ATrespasser_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrespasser_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrespasser_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Trespasser.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrespasser_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATrespasser, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_ATrespasser_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrespasser_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrespasser_Statics::NewProp_PatrolRadius_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "//Should be the radius of the lawn from the center point\n" },
		{ "ModuleRelativePath", "Trespasser.h" },
		{ "ToolTip", "Should be the radius of the lawn from the center point" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrespasser_Statics::NewProp_PatrolRadius = { "PatrolRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATrespasser, PatrolRadius), METADATA_PARAMS(Z_Construct_UClass_ATrespasser_Statics::NewProp_PatrolRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrespasser_Statics::NewProp_PatrolRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrespasser_Statics::NewProp_KnockBackForce_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "//How far does the kid get pushed back when shot?\n" },
		{ "ModuleRelativePath", "Trespasser.h" },
		{ "ToolTip", "How far does the kid get pushed back when shot?" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrespasser_Statics::NewProp_KnockBackForce = { "KnockBackForce", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATrespasser, KnockBackForce), METADATA_PARAMS(Z_Construct_UClass_ATrespasser_Statics::NewProp_KnockBackForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrespasser_Statics::NewProp_KnockBackForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrespasser_Statics::NewProp_EnterWaitTime_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "//How long does the trespasser wait to enter the lawn after spawning in?\n" },
		{ "ModuleRelativePath", "Trespasser.h" },
		{ "ToolTip", "How long does the trespasser wait to enter the lawn after spawning in?" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrespasser_Statics::NewProp_EnterWaitTime = { "EnterWaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATrespasser, EnterWaitTime), METADATA_PARAMS(Z_Construct_UClass_ATrespasser_Statics::NewProp_EnterWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrespasser_Statics::NewProp_EnterWaitTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrespasser_Statics::NewProp_ExitWaitTime_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "//How long does the trespasser wait to exit the lawn after grabbing a toy?\n" },
		{ "ModuleRelativePath", "Trespasser.h" },
		{ "ToolTip", "How long does the trespasser wait to exit the lawn after grabbing a toy?" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrespasser_Statics::NewProp_ExitWaitTime = { "ExitWaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATrespasser, ExitWaitTime), METADATA_PARAMS(Z_Construct_UClass_ATrespasser_Statics::NewProp_ExitWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrespasser_Statics::NewProp_ExitWaitTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrespasser_Statics::NewProp_ExitTimer_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Trespasser.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrespasser_Statics::NewProp_ExitTimer = { "ExitTimer", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATrespasser, ExitTimer), METADATA_PARAMS(Z_Construct_UClass_ATrespasser_Statics::NewProp_ExitTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrespasser_Statics::NewProp_ExitTimer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrespasser_Statics::NewProp_StationaryWaitTime_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "//How long does the trespasser wait in between frolicking?\n" },
		{ "ModuleRelativePath", "Trespasser.h" },
		{ "ToolTip", "How long does the trespasser wait in between frolicking?" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrespasser_Statics::NewProp_StationaryWaitTime = { "StationaryWaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATrespasser, StationaryWaitTime), METADATA_PARAMS(Z_Construct_UClass_ATrespasser_Statics::NewProp_StationaryWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrespasser_Statics::NewProp_StationaryWaitTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrespasser_Statics::NewProp_TakingDamage_MetaData[] = {
		{ "Category", "Trespasser" },
		{ "ModuleRelativePath", "Trespasser.h" },
	};
#endif
	void Z_Construct_UClass_ATrespasser_Statics::NewProp_TakingDamage_SetBit(void* Obj)
	{
		((ATrespasser*)Obj)->TakingDamage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATrespasser_Statics::NewProp_TakingDamage = { "TakingDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ATrespasser), &Z_Construct_UClass_ATrespasser_Statics::NewProp_TakingDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATrespasser_Statics::NewProp_TakingDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrespasser_Statics::NewProp_TakingDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrespasser_Statics::NewProp_ToyClass_MetaData[] = {
		{ "Category", "Trespasser" },
		{ "ModuleRelativePath", "Trespasser.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATrespasser_Statics::NewProp_ToyClass = { "ToyClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATrespasser, ToyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATrespasser_Statics::NewProp_ToyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrespasser_Statics::NewProp_ToyClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrespasser_Statics::NewProp_TargetToy_MetaData[] = {
		{ "Category", "Trespasser" },
		{ "ModuleRelativePath", "Trespasser.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrespasser_Statics::NewProp_TargetToy = { "TargetToy", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATrespasser, TargetToy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATrespasser_Statics::NewProp_TargetToy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrespasser_Statics::NewProp_TargetToy_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrespasser_Statics::NewProp_ToyArray_Inner = { "ToyArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrespasser_Statics::NewProp_ToyArray_MetaData[] = {
		{ "Category", "Trespasser" },
		{ "ModuleRelativePath", "Trespasser.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATrespasser_Statics::NewProp_ToyArray = { "ToyArray", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATrespasser, ToyArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATrespasser_Statics::NewProp_ToyArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrespasser_Statics::NewProp_ToyArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrespasser_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "Trespasser" },
		{ "ModuleRelativePath", "Trespasser.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATrespasser_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATrespasser, CurrentState), Z_Construct_UEnum_GOML_FState, METADATA_PARAMS(Z_Construct_UClass_ATrespasser_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrespasser_Statics::NewProp_CurrentState_MetaData)) }; // 1469156019
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrespasser_Statics::NewProp_PreviousState_MetaData[] = {
		{ "Category", "Trespasser" },
		{ "Comment", "//What state were they in before they started getting sprayed?\n" },
		{ "ModuleRelativePath", "Trespasser.h" },
		{ "ToolTip", "What state were they in before they started getting sprayed?" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATrespasser_Statics::NewProp_PreviousState = { "PreviousState", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATrespasser, PreviousState), Z_Construct_UEnum_GOML_FState, METADATA_PARAMS(Z_Construct_UClass_ATrespasser_Statics::NewProp_PreviousState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrespasser_Statics::NewProp_PreviousState_MetaData)) }; // 1469156019
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrespasser_Statics::NewProp_ExitLocation_MetaData[] = {
		{ "Category", "Trespasser" },
		{ "Comment", "//Just make 2 points on either side of the map, and let the trespasser choose where to go when they exit\n" },
		{ "ModuleRelativePath", "Trespasser.h" },
		{ "ToolTip", "Just make 2 points on either side of the map, and let the trespasser choose where to go when they exit" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATrespasser_Statics::NewProp_ExitLocation = { "ExitLocation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATrespasser, ExitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATrespasser_Statics::NewProp_ExitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrespasser_Statics::NewProp_ExitLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrespasser_Statics::NewProp_EnterLocation_MetaData[] = {
		{ "Category", "Trespasser" },
		{ "Comment", "//Let this represent the center of the lawn, kids will go to here if they find no toy\n" },
		{ "ModuleRelativePath", "Trespasser.h" },
		{ "ToolTip", "Let this represent the center of the lawn, kids will go to here if they find no toy" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATrespasser_Statics::NewProp_EnterLocation = { "EnterLocation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATrespasser, EnterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATrespasser_Statics::NewProp_EnterLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrespasser_Statics::NewProp_EnterLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrespasser_Statics::NewProp_ShotLocation_MetaData[] = {
		{ "Category", "Trespasser" },
		{ "Comment", "//Origin of hose, direction from which kid getsb pushed when shot\n" },
		{ "ModuleRelativePath", "Trespasser.h" },
		{ "ToolTip", "Origin of hose, direction from which kid getsb pushed when shot" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATrespasser_Statics::NewProp_ShotLocation = { "ShotLocation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATrespasser, ShotLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATrespasser_Statics::NewProp_ShotLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrespasser_Statics::NewProp_ShotLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrespasser_Statics::NewProp_GotToy_MetaData[] = {
		{ "Category", "Trespasser" },
		{ "ModuleRelativePath", "Trespasser.h" },
	};
#endif
	void Z_Construct_UClass_ATrespasser_Statics::NewProp_GotToy_SetBit(void* Obj)
	{
		((ATrespasser*)Obj)->GotToy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATrespasser_Statics::NewProp_GotToy = { "GotToy", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ATrespasser), &Z_Construct_UClass_ATrespasser_Statics::NewProp_GotToy_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATrespasser_Statics::NewProp_GotToy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrespasser_Statics::NewProp_GotToy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrespasser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrespasser_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrespasser_Statics::NewProp_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrespasser_Statics::NewProp_PatrolRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrespasser_Statics::NewProp_KnockBackForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrespasser_Statics::NewProp_EnterWaitTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrespasser_Statics::NewProp_ExitWaitTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrespasser_Statics::NewProp_ExitTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrespasser_Statics::NewProp_StationaryWaitTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrespasser_Statics::NewProp_TakingDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrespasser_Statics::NewProp_ToyClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrespasser_Statics::NewProp_TargetToy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrespasser_Statics::NewProp_ToyArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrespasser_Statics::NewProp_ToyArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrespasser_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrespasser_Statics::NewProp_PreviousState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrespasser_Statics::NewProp_ExitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrespasser_Statics::NewProp_EnterLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrespasser_Statics::NewProp_ShotLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrespasser_Statics::NewProp_GotToy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrespasser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrespasser>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrespasser_Statics::ClassParams = {
		&ATrespasser::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATrespasser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATrespasser_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATrespasser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATrespasser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATrespasser()
	{
		if (!Z_Registration_Info_UClass_ATrespasser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrespasser.OuterSingleton, Z_Construct_UClass_ATrespasser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATrespasser.OuterSingleton;
	}
	template<> GOML_API UClass* StaticClass<ATrespasser>()
	{
		return ATrespasser::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrespasser);
	ATrespasser::~ATrespasser() {}
	struct Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Trespasser_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Trespasser_h_Statics::EnumInfo[] = {
		{ FState_StaticEnum, TEXT("FState"), &Z_Registration_Info_UEnum_FState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1469156019U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Trespasser_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATrespasser, ATrespasser::StaticClass, TEXT("ATrespasser"), &Z_Registration_Info_UClass_ATrespasser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrespasser), 1074015636U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Trespasser_h_448058580(TEXT("/Script/GOML"),
		Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Trespasser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Trespasser_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Trespasser_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Trespasser_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
