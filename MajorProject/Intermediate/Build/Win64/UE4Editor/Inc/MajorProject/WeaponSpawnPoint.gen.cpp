// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MajorProject/Spawnpoints/WeaponSpawnPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponSpawnPoint() {}
// Cross Module References
	MAJORPROJECT_API UClass* Z_Construct_UClass_AWeaponSpawnPoint_NoRegister();
	MAJORPROJECT_API UClass* Z_Construct_UClass_AWeaponSpawnPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MajorProject();
// End Cross Module References
	void AWeaponSpawnPoint::StaticRegisterNativesAWeaponSpawnPoint()
	{
	}
	UClass* Z_Construct_UClass_AWeaponSpawnPoint_NoRegister()
	{
		return AWeaponSpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponSpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponSpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MajorProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponSpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Spawnpoints/WeaponSpawnPoint.h" },
		{ "ModuleRelativePath", "Spawnpoints/WeaponSpawnPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponSpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponSpawnPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponSpawnPoint_Statics::ClassParams = {
		&AWeaponSpawnPoint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWeaponSpawnPoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWeaponSpawnPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponSpawnPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponSpawnPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponSpawnPoint, 1703411977);
	template<> MAJORPROJECT_API UClass* StaticClass<AWeaponSpawnPoint>()
	{
		return AWeaponSpawnPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponSpawnPoint(Z_Construct_UClass_AWeaponSpawnPoint, &AWeaponSpawnPoint::StaticClass, TEXT("/Script/MajorProject"), TEXT("AWeaponSpawnPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponSpawnPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
