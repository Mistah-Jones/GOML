// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Powerup.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOML_Powerup_generated_h
#error "Powerup.generated.h already included, missing '#pragma once' in Powerup.h"
#endif
#define GOML_Powerup_generated_h

#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_21_SPARSE_DATA
#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSelectType); \
	DECLARE_FUNCTION(execDrop);


#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelectType); \
	DECLARE_FUNCTION(execDrop);


#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_21_ACCESSORS
#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPowerup(); \
	friend struct Z_Construct_UClass_APowerup_Statics; \
public: \
	DECLARE_CLASS(APowerup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GOML"), NO_API) \
	DECLARE_SERIALIZER(APowerup)


#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAPowerup(); \
	friend struct Z_Construct_UClass_APowerup_Statics; \
public: \
	DECLARE_CLASS(APowerup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GOML"), NO_API) \
	DECLARE_SERIALIZER(APowerup)


#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APowerup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APowerup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APowerup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APowerup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APowerup(APowerup&&); \
	NO_API APowerup(const APowerup&); \
public: \
	NO_API virtual ~APowerup();


#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APowerup(APowerup&&); \
	NO_API APowerup(const APowerup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APowerup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APowerup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APowerup) \
	NO_API virtual ~APowerup();


#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_18_PROLOG
#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_21_SPARSE_DATA \
	FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_21_RPC_WRAPPERS \
	FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_21_ACCESSORS \
	FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_21_INCLASS \
	FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_21_SPARSE_DATA \
	FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_21_ACCESSORS \
	FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOML_API UClass* StaticClass<class APowerup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_u0980906_Desktop_GOML_WS_Source_GOML_Powerup_h


#define FOREACH_ENUM_FPOWERTYPE(op) \
	op(Nothing) \
	op(Score) \
	op(ScreenWipe) \
	op(FireHose) \
	op(Grenade) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
