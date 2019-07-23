// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
#ifdef MAJORPROJECT_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define MAJORPROJECT_Weapon_generated_h

#define MajorProject_Source_MajorProject_Weapon_Weapon_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCollide) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_OtherComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Collide(Z_Param_OtherComp); \
		P_NATIVE_END; \
	}


#define MajorProject_Source_MajorProject_Weapon_Weapon_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCollide) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_OtherComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Collide(Z_Param_OtherComp); \
		P_NATIVE_END; \
	}


#define MajorProject_Source_MajorProject_Weapon_Weapon_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MajorProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define MajorProject_Source_MajorProject_Weapon_Weapon_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MajorProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define MajorProject_Source_MajorProject_Weapon_Weapon_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define MajorProject_Source_MajorProject_Weapon_Weapon_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define MajorProject_Source_MajorProject_Weapon_Weapon_h_21_PRIVATE_PROPERTY_OFFSET
#define MajorProject_Source_MajorProject_Weapon_Weapon_h_18_PROLOG
#define MajorProject_Source_MajorProject_Weapon_Weapon_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MajorProject_Source_MajorProject_Weapon_Weapon_h_21_PRIVATE_PROPERTY_OFFSET \
	MajorProject_Source_MajorProject_Weapon_Weapon_h_21_RPC_WRAPPERS \
	MajorProject_Source_MajorProject_Weapon_Weapon_h_21_INCLASS \
	MajorProject_Source_MajorProject_Weapon_Weapon_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MajorProject_Source_MajorProject_Weapon_Weapon_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MajorProject_Source_MajorProject_Weapon_Weapon_h_21_PRIVATE_PROPERTY_OFFSET \
	MajorProject_Source_MajorProject_Weapon_Weapon_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	MajorProject_Source_MajorProject_Weapon_Weapon_h_21_INCLASS_NO_PURE_DECLS \
	MajorProject_Source_MajorProject_Weapon_Weapon_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAJORPROJECT_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MajorProject_Source_MajorProject_Weapon_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
