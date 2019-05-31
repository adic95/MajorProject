// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
#ifdef MAJORPROJECT_FPSPlayerPawn_generated_h
#error "FPSPlayerPawn.generated.h already included, missing '#pragma once' in FPSPlayerPawn.h"
#endif
#define MAJORPROJECT_FPSPlayerPawn_generated_h

#define MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRotateCamera) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Rotate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RotateCamera(Z_Param_Rotate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShootWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShootWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShootCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShootCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMove) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Movement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Move(Z_Param_Movement); \
		P_NATIVE_END; \
	}


#define MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRotateCamera) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Rotate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RotateCamera(Z_Param_Rotate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShootWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShootWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShootCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShootCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMove) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Movement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Move(Z_Param_Movement); \
		P_NATIVE_END; \
	}


#define MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSPlayerPawn(); \
	friend struct Z_Construct_UClass_AFPSPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(AFPSPlayerPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MajorProject"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayerPawn)


#define MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFPSPlayerPawn(); \
	friend struct Z_Construct_UClass_AFPSPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(AFPSPlayerPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MajorProject"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayerPawn)


#define MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSPlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSPlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayerPawn(AFPSPlayerPawn&&); \
	NO_API AFPSPlayerPawn(const AFPSPlayerPawn&); \
public:


#define MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayerPawn(AFPSPlayerPawn&&); \
	NO_API AFPSPlayerPawn(const AFPSPlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSPlayerPawn)


#define MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_18_PRIVATE_PROPERTY_OFFSET
#define MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_15_PROLOG
#define MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_18_PRIVATE_PROPERTY_OFFSET \
	MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_18_RPC_WRAPPERS \
	MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_18_INCLASS \
	MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_18_PRIVATE_PROPERTY_OFFSET \
	MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_18_INCLASS_NO_PURE_DECLS \
	MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAJORPROJECT_API UClass* StaticClass<class AFPSPlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
