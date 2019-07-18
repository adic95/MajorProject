// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAJORPROJECT_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define MAJORPROJECT_Enemy_generated_h

#define MajorProject_Source_MajorProject_Enemy_Enemy_h_17_RPC_WRAPPERS
#define MajorProject_Source_MajorProject_Enemy_Enemy_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define MajorProject_Source_MajorProject_Enemy_Enemy_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MajorProject"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define MajorProject_Source_MajorProject_Enemy_Enemy_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MajorProject"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define MajorProject_Source_MajorProject_Enemy_Enemy_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define MajorProject_Source_MajorProject_Enemy_Enemy_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define MajorProject_Source_MajorProject_Enemy_Enemy_h_17_PRIVATE_PROPERTY_OFFSET
#define MajorProject_Source_MajorProject_Enemy_Enemy_h_14_PROLOG
#define MajorProject_Source_MajorProject_Enemy_Enemy_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MajorProject_Source_MajorProject_Enemy_Enemy_h_17_PRIVATE_PROPERTY_OFFSET \
	MajorProject_Source_MajorProject_Enemy_Enemy_h_17_RPC_WRAPPERS \
	MajorProject_Source_MajorProject_Enemy_Enemy_h_17_INCLASS \
	MajorProject_Source_MajorProject_Enemy_Enemy_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MajorProject_Source_MajorProject_Enemy_Enemy_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MajorProject_Source_MajorProject_Enemy_Enemy_h_17_PRIVATE_PROPERTY_OFFSET \
	MajorProject_Source_MajorProject_Enemy_Enemy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MajorProject_Source_MajorProject_Enemy_Enemy_h_17_INCLASS_NO_PURE_DECLS \
	MajorProject_Source_MajorProject_Enemy_Enemy_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAJORPROJECT_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MajorProject_Source_MajorProject_Enemy_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
