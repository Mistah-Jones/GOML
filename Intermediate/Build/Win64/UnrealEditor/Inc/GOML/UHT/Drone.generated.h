// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Drone.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GOML_Drone_generated_h
#error "Drone.generated.h already included, missing '#pragma once' in Drone.h"
#endif
#define GOML_Drone_generated_h

#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_12_SPARSE_DATA
#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDropPackage); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDropPackage); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_12_ACCESSORS
#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADrone(); \
	friend struct Z_Construct_UClass_ADrone_Statics; \
public: \
	DECLARE_CLASS(ADrone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GOML"), NO_API) \
	DECLARE_SERIALIZER(ADrone)


#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADrone(); \
	friend struct Z_Construct_UClass_ADrone_Statics; \
public: \
	DECLARE_CLASS(ADrone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GOML"), NO_API) \
	DECLARE_SERIALIZER(ADrone)


#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADrone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADrone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADrone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADrone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADrone(ADrone&&); \
	NO_API ADrone(const ADrone&); \
public: \
	NO_API virtual ~ADrone();


#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADrone(ADrone&&); \
	NO_API ADrone(const ADrone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADrone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADrone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADrone) \
	NO_API virtual ~ADrone();


#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_9_PROLOG
#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_12_SPARSE_DATA \
	FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_12_RPC_WRAPPERS \
	FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_12_ACCESSORS \
	FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_12_INCLASS \
	FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_12_SPARSE_DATA \
	FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_12_ACCESSORS \
	FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOML_API UClass* StaticClass<class ADrone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Drone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
