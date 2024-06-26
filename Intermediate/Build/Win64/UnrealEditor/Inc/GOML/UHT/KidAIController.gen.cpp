// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GOML/KidAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKidAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	GOML_API UClass* Z_Construct_UClass_AKidAIController();
	GOML_API UClass* Z_Construct_UClass_AKidAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GOML();
// End Cross Module References
	void AKidAIController::StaticRegisterNativesAKidAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKidAIController);
	UClass* Z_Construct_UClass_AKidAIController_NoRegister()
	{
		return AKidAIController::StaticClass();
	}
	struct Z_Construct_UClass_AKidAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Tree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Board_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Board;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKidAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_GOML,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKidAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "KidAIController.h" },
		{ "ModuleRelativePath", "KidAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKidAIController_Statics::NewProp_Tree_MetaData[] = {
		{ "Category", "KidAIController" },
		{ "ModuleRelativePath", "KidAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKidAIController_Statics::NewProp_Tree = { "Tree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AKidAIController, Tree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKidAIController_Statics::NewProp_Tree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKidAIController_Statics::NewProp_Tree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKidAIController_Statics::NewProp_Board_MetaData[] = {
		{ "Category", "KidAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KidAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKidAIController_Statics::NewProp_Board = { "Board", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AKidAIController, Board), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKidAIController_Statics::NewProp_Board_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKidAIController_Statics::NewProp_Board_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKidAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKidAIController_Statics::NewProp_Tree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKidAIController_Statics::NewProp_Board,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKidAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKidAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKidAIController_Statics::ClassParams = {
		&AKidAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AKidAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AKidAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKidAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKidAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKidAIController()
	{
		if (!Z_Registration_Info_UClass_AKidAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKidAIController.OuterSingleton, Z_Construct_UClass_AKidAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKidAIController.OuterSingleton;
	}
	template<> GOML_API UClass* StaticClass<AKidAIController>()
	{
		return AKidAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKidAIController);
	AKidAIController::~AKidAIController() {}
	struct Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_KidAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_KidAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKidAIController, AKidAIController::StaticClass, TEXT("AKidAIController"), &Z_Registration_Info_UClass_AKidAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKidAIController), 3536181590U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_KidAIController_h_205533529(TEXT("/Script/GOML"),
		Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_KidAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_KidAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
