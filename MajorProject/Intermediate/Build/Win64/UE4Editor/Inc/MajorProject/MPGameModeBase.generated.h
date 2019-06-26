// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAJORPROJECT_MPGameModeBase_generated_h
#error "MPGameModeBase.generated.h already included, missing '#pragma once' in MPGameModeBase.h"
#endif
#define MAJORPROJECT_MPGameModeBase_generated_h

#define MajorProject_Source_MajorProject_Base_MPGameModeBase_h_18_RPC_WRAPPERS
#define MajorProject_Source_MajorProject_Base_MPGameModeBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define MajorProject_Source_MajorProject_Base_MPGameModeBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMPGameModeBase(); \
	friend struct Z_Construct_UClass_AMPGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMPGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MajorProject"), NO_API) \
	DECLARE_SERIALIZER(AMPGameModeBase)


#define MajorProject_Source_MajorProject_Base_MPGameModeBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMPGameModeBase(); \
	friend struct Z_Construct_UClass_AMPGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMPGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MajorProject"), NO_API) \
	DECLARE_SERIALIZER(AMPGameModeBase)


#define MajorProject_Source_MajorProject_Base_MPGameModeBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMPGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMPGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMPGameModeBase(AMPGameModeBase&&); \
	NO_API AMPGameModeBase(const AMPGameModeBase&); \
public:


#define MajorProject_Source_MajorProject_Base_MPGameModeBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMPGameModeBase(AMPGameModeBase&&); \
	NO_API AMPGameModeBase(const AMPGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMPGameModeBase)


#define MajorProject_Source_MajorProject_Base_MPGameModeBase_h_18_PRIVATE_PROPERTY_OFFSET
#define MajorProject_Source_MajorProject_Base_MPGameModeBase_h_15_PROLOG
#define MajorProject_Source_MajorProject_Base_MPGameModeBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MajorProject_Source_MajorProject_Base_MPGameModeBase_h_18_PRIVATE_PROPERTY_OFFSET \
	MajorProject_Source_MajorProject_Base_MPGameModeBase_h_18_RPC_WRAPPERS \
	MajorProject_Source_MajorProject_Base_MPGameModeBase_h_18_INCLASS \
	MajorProject_Source_MajorProject_Base_MPGameModeBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MajorProject_Source_MajorProject_Base_MPGameModeBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MajorProject_Source_MajorProject_Base_MPGameModeBase_h_18_PRIVATE_PROPERTY_OFFSET \
	MajorProject_Source_MajorProject_Base_MPGameModeBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	MajorProject_Source_MajorProject_Base_MPGameModeBase_h_18_INCLASS_NO_PURE_DECLS \
	MajorProject_Source_MajorProject_Base_MPGameModeBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAJORPROJECT_API UClass* StaticClass<class AMPGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MajorProject_Source_MajorProject_Base_MPGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
