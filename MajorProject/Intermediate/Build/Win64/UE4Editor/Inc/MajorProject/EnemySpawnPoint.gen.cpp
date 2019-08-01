// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MajorProject/Spawnpoints/EnemySpawnPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawnPoint() {}
// Cross Module References
	MAJORPROJECT_API UClass* Z_Construct_UClass_AEnemySpawnPoint_NoRegister();
	MAJORPROJECT_API UClass* Z_Construct_UClass_AEnemySpawnPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MajorProject();
// End Cross Module References
	void AEnemySpawnPoint::StaticRegisterNativesAEnemySpawnPoint()
	{
	}
	UClass* Z_Construct_UClass_AEnemySpawnPoint_NoRegister()
	{
		return AEnemySpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_AEnemySpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemySpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MajorProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Spawnpoints/EnemySpawnPoint.h" },
		{ "ModuleRelativePath", "Spawnpoints/EnemySpawnPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemySpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpawnPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpawnPoint_Statics::ClassParams = {
		&AEnemySpawnPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemySpawnPoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEnemySpawnPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemySpawnPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemySpawnPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemySpawnPoint, 783722459);
	template<> MAJORPROJECT_API UClass* StaticClass<AEnemySpawnPoint>()
	{
		return AEnemySpawnPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemySpawnPoint(Z_Construct_UClass_AEnemySpawnPoint, &AEnemySpawnPoint::StaticClass, TEXT("/Script/MajorProject"), TEXT("AEnemySpawnPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpawnPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
