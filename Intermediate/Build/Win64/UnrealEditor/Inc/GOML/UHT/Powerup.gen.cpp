// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GOML/Powerup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerup() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GOML_API UClass* Z_Construct_UClass_APowerup();
	GOML_API UClass* Z_Construct_UClass_APowerup_NoRegister();
	GOML_API UEnum* Z_Construct_UEnum_GOML_FPowerType();
	UPackage* Z_Construct_UPackage__Script_GOML();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FPowerType;
	static UEnum* FPowerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FPowerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FPowerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GOML_FPowerType, Z_Construct_UPackage__Script_GOML(), TEXT("FPowerType"));
		}
		return Z_Registration_Info_UEnum_FPowerType.OuterSingleton;
	}
	template<> GOML_API UEnum* StaticEnum<FPowerType>()
	{
		return FPowerType_StaticEnum();
	}
	struct Z_Construct_UEnum_GOML_FPowerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GOML_FPowerType_Statics::Enumerators[] = {
		{ "Nothing", (int64)Nothing },
		{ "Score", (int64)Score },
		{ "ScreenWipe", (int64)ScreenWipe },
		{ "FireHose", (int64)FireHose },
		{ "Grenade", (int64)Grenade },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GOML_FPowerType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FireHose.DisplayName", "FireHose" },
		{ "FireHose.Name", "FireHose" },
		{ "Grenade.DisplayName", "Grenade" },
		{ "Grenade.Name", "Grenade" },
		{ "ModuleRelativePath", "Powerup.h" },
		{ "Nothing.DisplayName", "Nothing" },
		{ "Nothing.Name", "Nothing" },
		{ "Score.DisplayName", "Score" },
		{ "Score.Name", "Score" },
		{ "ScreenWipe.DisplayName", "ScreenWipe" },
		{ "ScreenWipe.Name", "ScreenWipe" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GOML_FPowerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GOML,
		nullptr,
		"FPowerType",
		"FPowerType",
		Z_Construct_UEnum_GOML_FPowerType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GOML_FPowerType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_GOML_FPowerType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GOML_FPowerType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GOML_FPowerType()
	{
		if (!Z_Registration_Info_UEnum_FPowerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FPowerType.InnerSingleton, Z_Construct_UEnum_GOML_FPowerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FPowerType.InnerSingleton;
	}
	DEFINE_FUNCTION(APowerup::execSelectType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APowerup::execDrop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Drop();
		P_NATIVE_END;
	}
	void APowerup::StaticRegisterNativesAPowerup()
	{
		UClass* Class = APowerup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Drop", &APowerup::execDrop },
			{ "SelectType", &APowerup::execSelectType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APowerup_Drop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APowerup_Drop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Powerup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APowerup_Drop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APowerup, nullptr, "Drop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APowerup_Drop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APowerup_Drop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APowerup_Drop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APowerup_Drop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APowerup_SelectType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APowerup_SelectType_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Begin Simulating physics so it will drop naturally on detach\n" },
		{ "ModuleRelativePath", "Powerup.h" },
		{ "ToolTip", "Begin Simulating physics so it will drop naturally on detach" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APowerup_SelectType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APowerup, nullptr, "SelectType", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APowerup_SelectType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APowerup_SelectType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APowerup_SelectType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APowerup_SelectType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APowerup);
	UClass* Z_Construct_UClass_APowerup_NoRegister()
	{
		return APowerup::StaticClass();
	}
	struct Z_Construct_UClass_APowerup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PowerUpType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PowerUpType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APowerup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GOML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APowerup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APowerup_Drop, "Drop" }, // 2650796521
		{ &Z_Construct_UFunction_APowerup_SelectType, "SelectType" }, // 3567143309
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Powerup.h" },
		{ "ModuleRelativePath", "Powerup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerup_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Powerup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Powerup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APowerup_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APowerup, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APowerup_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APowerup_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerup_Statics::NewProp_PowerUpType_MetaData[] = {
		{ "Category", "Powerup" },
		{ "ModuleRelativePath", "Powerup.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APowerup_Statics::NewProp_PowerUpType = { "PowerUpType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APowerup, PowerUpType), Z_Construct_UEnum_GOML_FPowerType, METADATA_PARAMS(Z_Construct_UClass_APowerup_Statics::NewProp_PowerUpType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APowerup_Statics::NewProp_PowerUpType_MetaData)) }; // 2604823547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerup_Statics::NewProp_PlayerClass_MetaData[] = {
		{ "Category", "Powerup" },
		{ "ModuleRelativePath", "Powerup.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APowerup_Statics::NewProp_PlayerClass = { "PlayerClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APowerup, PlayerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APowerup_Statics::NewProp_PlayerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APowerup_Statics::NewProp_PlayerClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APowerup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerup_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerup_Statics::NewProp_PowerUpType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerup_Statics::NewProp_PlayerClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APowerup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APowerup_Statics::ClassParams = {
		&APowerup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APowerup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APowerup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APowerup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APowerup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APowerup()
	{
		if (!Z_Registration_Info_UClass_APowerup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APowerup.OuterSingleton, Z_Construct_UClass_APowerup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APowerup.OuterSingleton;
	}
	template<> GOML_API UClass* StaticClass<APowerup>()
	{
		return APowerup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APowerup);
	APowerup::~APowerup() {}
	struct Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_Statics::EnumInfo[] = {
		{ FPowerType_StaticEnum, TEXT("FPowerType"), &Z_Registration_Info_UEnum_FPowerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2604823547U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APowerup, APowerup::StaticClass, TEXT("APowerup"), &Z_Registration_Info_UClass_APowerup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APowerup), 1916244972U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_3086303507(TEXT("/Script/GOML"),
		Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
