// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GOML/Toy.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GOML_API UClass* Z_Construct_UClass_AToy();
	GOML_API UClass* Z_Construct_UClass_AToy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GOML();
// End Cross Module References
	DEFINE_FUNCTION(AToy::execOnOverlapBegin)
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
	void AToy::StaticRegisterNativesAToy()
	{
		UClass* Class = AToy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &AToy::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AToy_OnOverlapBegin_Statics
	{
		struct Toy_eventOnOverlapBegin_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Toy_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Toy_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Toy_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Toy_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Toy_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Toy_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Toy_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Toy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AToy, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::Toy_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AToy_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AToy_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AToy);
	UClass* Z_Construct_UClass_AToy_NoRegister()
	{
		return AToy::StaticClass();
	}
	struct Z_Construct_UClass_AToy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targeted_MetaData[];
#endif
		static void NewProp_Targeted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Targeted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AToy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GOML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AToy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AToy_OnOverlapBegin, "OnOverlapBegin" }, // 1131923868
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toy.h" },
		{ "ModuleRelativePath", "Toy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToy_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Toy" },
		{ "Comment", "// Sphere collision component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Toy.h" },
		{ "ToolTip", "Sphere collision component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AToy_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AToy, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AToy_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AToy_Statics::NewProp_CollisionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToy_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Toy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Toy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AToy_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AToy, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AToy_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AToy_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToy_Statics::NewProp_Targeted_MetaData[] = {
		{ "Category", "Toy" },
		{ "ModuleRelativePath", "Toy.h" },
	};
#endif
	void Z_Construct_UClass_AToy_Statics::NewProp_Targeted_SetBit(void* Obj)
	{
		((AToy*)Obj)->Targeted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AToy_Statics::NewProp_Targeted = { "Targeted", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AToy), &Z_Construct_UClass_AToy_Statics::NewProp_Targeted_SetBit, METADATA_PARAMS(Z_Construct_UClass_AToy_Statics::NewProp_Targeted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AToy_Statics::NewProp_Targeted_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AToy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToy_Statics::NewProp_CollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToy_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToy_Statics::NewProp_Targeted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AToy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AToy_Statics::ClassParams = {
		&AToy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AToy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AToy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AToy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AToy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AToy()
	{
		if (!Z_Registration_Info_UClass_AToy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AToy.OuterSingleton, Z_Construct_UClass_AToy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AToy.OuterSingleton;
	}
	template<> GOML_API UClass* StaticClass<AToy>()
	{
		return AToy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AToy);
	AToy::~AToy() {}
	struct Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Toy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Toy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AToy, AToy::StaticClass, TEXT("AToy"), &Z_Registration_Info_UClass_AToy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AToy), 776097669U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Toy_h_2299506176(TEXT("/Script/GOML"),
		Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Toy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Toy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
