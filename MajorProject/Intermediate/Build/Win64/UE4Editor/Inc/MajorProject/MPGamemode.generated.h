// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAJORPROJECT_MPGamemode_generated_h
#error "MPGamemode.generated.h already included, missing '#pragma once' in MPGamemode.h"
#endif
#define MAJORPROJECT_MPGamemode_generated_h

#define MajorProject_Source_MajorProject_Base_MPGamemode_h_16_RPC_WRAPPERS
#define MajorProject_Source_MajorProject_Base_MPGamemode_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define MajorProject_Source_MajorProject_Base_MPGamemode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMPGamemode(); \
	friend struct Z_Construct_UClass_AMPGamemode_Statics; \
public: \
	DECLARE_CLASS(AMPGamemode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MajorProject"), NO_API) \
	DECLARE_SERIALIZER(AMPGamemode)


#define MajorProject_Source_MajorProject_Base_MPGamemode_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMPGamemode(); \
	friend struct Z_Construct_UClass_AMPGamemode_Statics; \
public: \
	DECLARE_CLASS(AMPGamemode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MajorProject"), NO_API) \
	DECLARE_SERIALIZER(AMPGamemode)


#define MajorProject_Source_MajorProject_Base_MPGamemode_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMPGamemode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMPGamemode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPGamemode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPGamemode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMPGamemode(AMPGamemode&&); \
	NO_API AMPGamemode(const AMPGamemode&); \
public:


#define MajorProject_Source_MajorProject_Base_MPGamemode_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMPGamemode(AMPGamemode&&); \
	NO_API AMPGamemode(const AMPGamemode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPGamemode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPGamemode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMPGamemode)


#define MajorProject_Source_MajorProject_Base_MPGamemode_h_16_PRIVATE_PROPERTY_OFFSET
#define MajorProject_Source_MajorProject_Base_MPGamemode_h_13_PROLOG
#define MajorProject_Source_MajorProject_Base_MPGamemode_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MajorProject_Source_MajorProject_Base_MPGamemode_h_16_PRIVATE_PROPERTY_OFFSET \
	MajorProject_Source_MajorProject_Base_MPGamemode_h_16_RPC_WRAPPERS \
	MajorProject_Source_MajorProject_Base_MPGamemode_h_16_INCLASS \
	MajorProject_Source_MajorProject_Base_MPGamemode_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MajorProject_Source_MajorProject_Base_MPGamemode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MajorProject_Source_MajorProject_Base_MPGamemode_h_16_PRIVATE_PROPERTY_OFFSET \
	MajorProject_Source_MajorProject_Base_MPGamemode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MajorProject_Source_MajorProject_Base_MPGamemode_h_16_INCLASS_NO_PURE_DECLS \
	MajorProject_Source_MajorProject_Base_MPGamemode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAJORPROJECT_API UClass* StaticClass<class AMPGamemode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MajorProject_Source_MajorProject_Base_MPGamemode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
