// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
struct FTransform;
#ifdef MAJORPROJECT_VRPlayerPawn_generated_h
#error "VRPlayerPawn.generated.h already included, missing '#pragma once' in VRPlayerPawn.h"
#endif
#define MAJORPROJECT_VRPlayerPawn_generated_h

#define MajorProject_Source_MajorProject_Player_VRPlayerPawn_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execParentWeapon) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Parent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ParentWeapon(Z_Param_Parent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWeaponTransform) \
	{ \
		P_GET_STRUCT(FTransform,Z_Param_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWeaponTransform(Z_Param_Transform); \
		P_NATIVE_END; \
	}


#define MajorProject_Source_MajorProject_Player_VRPlayerPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execParentWeapon) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Parent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ParentWeapon(Z_Param_Parent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWeaponTransform) \
	{ \
		P_GET_STRUCT(FTransform,Z_Param_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWeaponTransform(Z_Param_Transform); \
		P_NATIVE_END; \
	}


#define MajorProject_Source_MajorProject_Player_VRPlayerPawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRPlayerPawn(); \
	friend struct Z_Construct_UClass_AVRPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(AVRPlayerPawn, AFPSPlayerPawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MajorProject"), NO_API) \
	DECLARE_SERIALIZER(AVRPlayerPawn)


#define MajorProject_Source_MajorProject_Player_VRPlayerPawn_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAVRPlayerPawn(); \
	friend struct Z_Construct_UClass_AVRPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(AVRPlayerPawn, AFPSPlayerPawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MajorProject"), NO_API) \
	DECLARE_SERIALIZER(AVRPlayerPawn)


#define MajorProject_Source_MajorProject_Player_VRPlayerPawn_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRPlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRPlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRPlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRPlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRPlayerPawn(AVRPlayerPawn&&); \
	NO_API AVRPlayerPawn(const AVRPlayerPawn&); \
public:


#define MajorProject_Source_MajorProject_Player_VRPlayerPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRPlayerPawn(AVRPlayerPawn&&); \
	NO_API AVRPlayerPawn(const AVRPlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRPlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRPlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVRPlayerPawn)


#define MajorProject_Source_MajorProject_Player_VRPlayerPawn_h_15_PRIVATE_PROPERTY_OFFSET
#define MajorProject_Source_MajorProject_Player_VRPlayerPawn_h_12_PROLOG
#define MajorProject_Source_MajorProject_Player_VRPlayerPawn_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MajorProject_Source_MajorProject_Player_VRPlayerPawn_h_15_PRIVATE_PROPERTY_OFFSET \
	MajorProject_Source_MajorProject_Player_VRPlayerPawn_h_15_RPC_WRAPPERS \
	MajorProject_Source_MajorProject_Player_VRPlayerPawn_h_15_INCLASS \
	MajorProject_Source_MajorProject_Player_VRPlayerPawn_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MajorProject_Source_MajorProject_Player_VRPlayerPawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MajorProject_Source_MajorProject_Player_VRPlayerPawn_h_15_PRIVATE_PROPERTY_OFFSET \
	MajorProject_Source_MajorProject_Player_VRPlayerPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MajorProject_Source_MajorProject_Player_VRPlayerPawn_h_15_INCLASS_NO_PURE_DECLS \
	MajorProject_Source_MajorProject_Player_VRPlayerPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAJORPROJECT_API UClass* StaticClass<class AVRPlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MajorProject_Source_MajorProject_Player_VRPlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
