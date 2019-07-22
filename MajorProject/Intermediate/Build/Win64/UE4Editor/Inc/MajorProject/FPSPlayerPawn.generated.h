// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
class USceneComponent;
struct FVector2D;
#ifdef MAJORPROJECT_FPSPlayerPawn_generated_h
#error "FPSPlayerPawn.generated.h already included, missing '#pragma once' in FPSPlayerPawn.h"
#endif
#define MAJORPROJECT_FPSPlayerPawn_generated_h

#define MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCollide) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_OtherComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Collide(Z_Param_OtherComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRecordPositions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RecordPositions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execThrowWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ThrowWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrabFromDistance) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Origin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GrabFromDistance(Z_Param_Origin); \
		P_NATIVE_END; \
	} \
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


#define MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCollide) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_OtherComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Collide(Z_Param_OtherComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRecordPositions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RecordPositions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execThrowWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ThrowWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrabFromDistance) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Origin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GrabFromDistance(Z_Param_Origin); \
		P_NATIVE_END; \
	} \
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


#define MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSPlayerPawn(); \
	friend struct Z_Construct_UClass_AFPSPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(AFPSPlayerPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MajorProject"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayerPawn)


#define MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAFPSPlayerPawn(); \
	friend struct Z_Construct_UClass_AFPSPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(AFPSPlayerPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MajorProject"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayerPawn)


#define MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_24_STANDARD_CONSTRUCTORS \
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


#define MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayerPawn(AFPSPlayerPawn&&); \
	NO_API AFPSPlayerPawn(const AFPSPlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSPlayerPawn)


#define MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__pcurrentWeapon() { return STRUCT_OFFSET(AFPSPlayerPawn, pcurrentWeapon); }


#define MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_21_PROLOG
#define MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_24_PRIVATE_PROPERTY_OFFSET \
	MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_24_RPC_WRAPPERS \
	MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_24_INCLASS \
	MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_24_PRIVATE_PROPERTY_OFFSET \
	MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_24_INCLASS_NO_PURE_DECLS \
	MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAJORPROJECT_API UClass* StaticClass<class AFPSPlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MajorProject_Source_MajorProject_Player_FPSPlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
