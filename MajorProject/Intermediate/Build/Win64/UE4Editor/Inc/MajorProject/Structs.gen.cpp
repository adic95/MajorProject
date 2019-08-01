// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MajorProject/Helper/Structs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructs() {}
// Cross Module References
	MAJORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyRound();
	UPackage* Z_Construct_UPackage__Script_MajorProject();
	MAJORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyWave();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FEnemyRound::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAJORPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FEnemyRound_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyRound, Z_Construct_UPackage__Script_MajorProject(), TEXT("EnemyRound"), sizeof(FEnemyRound), Get_Z_Construct_UScriptStruct_FEnemyRound_Hash());
	}
	return Singleton;
}
template<> MAJORPROJECT_API UScriptStruct* StaticStruct<FEnemyRound>()
{
	return FEnemyRound::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnemyRound(FEnemyRound::StaticStruct, TEXT("/Script/MajorProject"), TEXT("EnemyRound"), false, nullptr, nullptr);
static struct FScriptStruct_MajorProject_StaticRegisterNativesFEnemyRound
{
	FScriptStruct_MajorProject_StaticRegisterNativesFEnemyRound()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnemyRound")),new UScriptStruct::TCppStructOps<FEnemyRound>);
	}
} ScriptStruct_MajorProject_StaticRegisterNativesFEnemyRound;
	struct Z_Construct_UScriptStruct_FEnemyRound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Waves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Waves;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Waves_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyRound_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Helper/Structs.h" },
		{ "ToolTip", "<summary>\nsingle round struct\n</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyRound_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyRound>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyRound_Statics::NewProp_Waves_MetaData[] = {
		{ "Category", "Enemy Round" },
		{ "ModuleRelativePath", "Helper/Structs.h" },
		{ "ToolTip", "<summary>\narray of enemy waves\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEnemyRound_Statics::NewProp_Waves = { "Waves", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyRound, Waves), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyRound_Statics::NewProp_Waves_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyRound_Statics::NewProp_Waves_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnemyRound_Statics::NewProp_Waves_Inner = { "Waves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEnemyWave, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyRound_Statics::NewProp_Waves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyRound_Statics::NewProp_Waves_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyRound_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MajorProject,
		nullptr,
		&NewStructOps,
		"EnemyRound",
		sizeof(FEnemyRound),
		alignof(FEnemyRound),
		Z_Construct_UScriptStruct_FEnemyRound_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyRound_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyRound_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyRound_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyRound()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnemyRound_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MajorProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnemyRound"), sizeof(FEnemyRound), Get_Z_Construct_UScriptStruct_FEnemyRound_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEnemyRound_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnemyRound_Hash() { return 1983390832U; }
class UScriptStruct* FEnemyWave::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAJORPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FEnemyWave_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyWave, Z_Construct_UPackage__Script_MajorProject(), TEXT("EnemyWave"), sizeof(FEnemyWave), Get_Z_Construct_UScriptStruct_FEnemyWave_Hash());
	}
	return Singleton;
}
template<> MAJORPROJECT_API UScriptStruct* StaticStruct<FEnemyWave>()
{
	return FEnemyWave::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnemyWave(FEnemyWave::StaticStruct, TEXT("/Script/MajorProject"), TEXT("EnemyWave"), false, nullptr, nullptr);
static struct FScriptStruct_MajorProject_StaticRegisterNativesFEnemyWave
{
	FScriptStruct_MajorProject_StaticRegisterNativesFEnemyWave()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnemyWave")),new UScriptStruct::TCppStructOps<FEnemyWave>);
	}
} ScriptStruct_MajorProject_StaticRegisterNativesFEnemyWave;
	struct Z_Construct_UScriptStruct_FEnemyWave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EnemyCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyWave_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Helper/Structs.h" },
		{ "ToolTip", "/// <summary>\n/// single enemy wave struct\n/// </summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyWave_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyWave>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_EnemyClass_MetaData[] = {
		{ "Category", "Enemy Wave Required" },
		{ "ModuleRelativePath", "Helper/Structs.h" },
		{ "ToolTip", "<summary>\nenemy class to spawn\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyWave, EnemyClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_EnemyClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_EnemyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_EnemyCount_MetaData[] = {
		{ "Category", "Enemy Wave" },
		{ "ModuleRelativePath", "Helper/Structs.h" },
		{ "ToolTip", "<summary>\nenemy count\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_EnemyCount = { "EnemyCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyWave, EnemyCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_EnemyCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_EnemyCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_WeaponTimer_MetaData[] = {
		{ "Category", "Weapon Spawn" },
		{ "ModuleRelativePath", "Helper/Structs.h" },
		{ "ToolTip", "<summary>\ntime until one enemy spawns in seconds\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_WeaponTimer = { "WeaponTimer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyWave, WeaponTimer), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_WeaponTimer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_WeaponTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_SpawnTimer_MetaData[] = {
		{ "Category", "Enemy Wave" },
		{ "ModuleRelativePath", "Helper/Structs.h" },
		{ "ToolTip", "<summary>\ntime until one enemy spawns in seconds\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_SpawnTimer = { "SpawnTimer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyWave, SpawnTimer), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_SpawnTimer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_SpawnTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "Enemy Wave" },
		{ "ModuleRelativePath", "Helper/Structs.h" },
		{ "ToolTip", "<summary>\ntime to start the wave in seconds\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyWave, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_StartTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_StartTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyWave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_EnemyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_EnemyCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_WeaponTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_SpawnTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyWave_Statics::NewProp_StartTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyWave_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MajorProject,
		nullptr,
		&NewStructOps,
		"EnemyWave",
		sizeof(FEnemyWave),
		alignof(FEnemyWave),
		Z_Construct_UScriptStruct_FEnemyWave_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyWave_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyWave_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyWave_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyWave()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnemyWave_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MajorProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnemyWave"), sizeof(FEnemyWave), Get_Z_Construct_UScriptStruct_FEnemyWave_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEnemyWave_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnemyWave_Hash() { return 876249908U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
