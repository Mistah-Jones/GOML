// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GOML/GameModeLawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameModeLawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GOML_API UClass* Z_Construct_UClass_AGameModeLawn();
	GOML_API UClass* Z_Construct_UClass_AGameModeLawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GOML();
// End Cross Module References
	void AGameModeLawn::StaticRegisterNativesAGameModeLawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameModeLawn);
	UClass* Z_Construct_UClass_AGameModeLawn_NoRegister()
	{
		return AGameModeLawn::StaticClass();
	}
	struct Z_Construct_UClass_AGameModeLawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameModeLawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GOML,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeLawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModeLawn.h" },
		{ "ModuleRelativePath", "GameModeLawn.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameModeLawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameModeLawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameModeLawn_Statics::ClassParams = {
		&AGameModeLawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameModeLawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeLawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameModeLawn()
	{
		if (!Z_Registration_Info_UClass_AGameModeLawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameModeLawn.OuterSingleton, Z_Construct_UClass_AGameModeLawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameModeLawn.OuterSingleton;
	}
	template<> GOML_API UClass* StaticClass<AGameModeLawn>()
	{
		return AGameModeLawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameModeLawn);
	AGameModeLawn::~AGameModeLawn() {}
	struct Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_GameModeLawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_GameModeLawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameModeLawn, AGameModeLawn::StaticClass, TEXT("AGameModeLawn"), &Z_Registration_Info_UClass_AGameModeLawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameModeLawn), 2075177321U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_GameModeLawn_h_3205260561(TEXT("/Script/GOML"),
		Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_GameModeLawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_GameModeLawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
