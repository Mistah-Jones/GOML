// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GOML/Drone.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrone() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GOML_API UClass* Z_Construct_UClass_ADrone();
	GOML_API UClass* Z_Construct_UClass_ADrone_NoRegister();
	GOML_API UClass* Z_Construct_UClass_ADroneSpline_NoRegister();
	GOML_API UClass* Z_Construct_UClass_APowerup_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GOML();
// End Cross Module References
	DEFINE_FUNCTION(ADrone::execDropPackage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropPackage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADrone::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ADrone::StaticRegisterNativesADrone()
	{
		UClass* Class = ADrone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DropPackage", &ADrone::execDropPackage },
			{ "OnOverlapBegin", &ADrone::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADrone_DropPackage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADrone_DropPackage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADrone_DropPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADrone, nullptr, "DropPackage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADrone_DropPackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADrone_DropPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADrone_DropPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADrone_DropPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics
	{
		struct Drone_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Drone_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Drone_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Drone_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Drone_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Drone_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Drone_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Drone_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADrone, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::Drone_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADrone_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADrone_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADrone);
	UClass* Z_Construct_UClass_ADrone_NoRegister()
	{
		return ADrone::StaticClass();
	}
	struct Z_Construct_UClass_ADrone_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRandomPowerup_MetaData[];
#endif
		static void NewProp_SpawnRandomPowerup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnRandomPowerup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Displacement_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Displacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SplineClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PackageClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Package_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Package;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSpline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSpline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADrone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GOML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADrone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADrone_DropPackage, "DropPackage" }, // 2256761331
		{ &Z_Construct_UFunction_ADrone_OnOverlapBegin, "OnOverlapBegin" }, // 799960261
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Drone.h" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Drone" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADrone, Health), METADATA_PARAMS(Z_Construct_UClass_ADrone_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_SpawnRandomPowerup_MetaData[] = {
		{ "Category", "Drone" },
		{ "Comment", "//Debug bool, so we can toggle betwween spawning random and non-random powerups for testing purposes\n" },
		{ "ModuleRelativePath", "Drone.h" },
		{ "ToolTip", "Debug bool, so we can toggle betwween spawning random and non-random powerups for testing purposes" },
	};
#endif
	void Z_Construct_UClass_ADrone_Statics::NewProp_SpawnRandomPowerup_SetBit(void* Obj)
	{
		((ADrone*)Obj)->SpawnRandomPowerup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_SpawnRandomPowerup = { "SpawnRandomPowerup", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADrone), &Z_Construct_UClass_ADrone_Statics::NewProp_SpawnRandomPowerup_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADrone_Statics::NewProp_SpawnRandomPowerup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_SpawnRandomPowerup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_Displacement_MetaData[] = {
		{ "Category", "Drone" },
		{ "Comment", "//modifier to adjust where the powerup is relative to the drone (should hang just below the drone);\n" },
		{ "ModuleRelativePath", "Drone.h" },
		{ "ToolTip", "modifier to adjust where the powerup is relative to the drone (should hang just below the drone);" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_Displacement = { "Displacement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADrone, Displacement), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADrone_Statics::NewProp_Displacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_Displacement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Drone" },
		{ "Comment", "// Sphere collision component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Drone.h" },
		{ "ToolTip", "Sphere collision component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADrone, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADrone_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_CollisionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Drone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADrone, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADrone_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_SplineClass_MetaData[] = {
		{ "Category", "Drone" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_SplineClass = { "SplineClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADrone, SplineClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADrone_Statics::NewProp_SplineClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_SplineClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_PackageClass_MetaData[] = {
		{ "Category", "Drone" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_PackageClass = { "PackageClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADrone, PackageClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APowerup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADrone_Statics::NewProp_PackageClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_PackageClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_Package_MetaData[] = {
		{ "Category", "Drone" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADrone, Package), Z_Construct_UClass_APowerup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADrone_Statics::NewProp_Package_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_Package_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_TargetSpline_MetaData[] = {
		{ "Category", "Drone" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_TargetSpline = { "TargetSpline", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADrone, TargetSpline), Z_Construct_UClass_ADroneSpline_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADrone_Statics::NewProp_TargetSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_TargetSpline_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADrone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_SpawnRandomPowerup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_Displacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_CollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_SplineClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_PackageClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_Package,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_TargetSpline,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADrone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADrone_Statics::ClassParams = {
		&ADrone::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADrone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADrone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADrone()
	{
		if (!Z_Registration_Info_UClass_ADrone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADrone.OuterSingleton, Z_Construct_UClass_ADrone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADrone.OuterSingleton;
	}
	template<> GOML_API UClass* StaticClass<ADrone>()
	{
		return ADrone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADrone);
	ADrone::~ADrone() {}
	struct Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADrone, ADrone::StaticClass, TEXT("ADrone"), &Z_Registration_Info_UClass_ADrone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADrone), 1600800959U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_4260664807(TEXT("/Script/GOML"),
		Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
