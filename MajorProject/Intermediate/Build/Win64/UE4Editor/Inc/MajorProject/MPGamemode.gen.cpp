// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MajorProject/Base/MPGamemode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPGamemode() {}
// Cross Module References
	MAJORPROJECT_API UClass* Z_Construct_UClass_AMPGamemode_NoRegister();
	MAJORPROJECT_API UClass* Z_Construct_UClass_AMPGamemode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MajorProject();
	MAJORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyRound();
// End Cross Module References
	void AMPGamemode::StaticRegisterNativesAMPGamemode()
	{
	}
	UClass* Z_Construct_UClass_AMPGamemode_NoRegister()
	{
		return AMPGamemode::StaticClass();
	}
	struct Z_Construct_UClass_AMPGamemode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Rounds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rounds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rift_Active_MetaData[];
#endif
		static void NewProp_Rift_Active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Rift_Active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMPGamemode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MajorProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPGamemode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Base/MPGamemode.h" },
		{ "ModuleRelativePath", "Base/MPGamemode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPGamemode_Statics::NewProp_Rounds_MetaData[] = {
		{ "Category", "Enemy Rounds" },
		{ "ModuleRelativePath", "Base/MPGamemode.h" },
		{ "ToolTip", "<summary>\nAll Rounds\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMPGamemode_Statics::NewProp_Rounds = { "Rounds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPGamemode, Rounds), METADATA_PARAMS(Z_Construct_UClass_AMPGamemode_Statics::NewProp_Rounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMPGamemode_Statics::NewProp_Rounds_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMPGamemode_Statics::NewProp_Rounds_Inner = { "Rounds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEnemyRound, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPGamemode_Statics::NewProp_Rift_Active_MetaData[] = {
		{ "Category", "Device Check" },
		{ "ModuleRelativePath", "Base/MPGamemode.h" },
	};
#endif
	void Z_Construct_UClass_AMPGamemode_Statics::NewProp_Rift_Active_SetBit(void* Obj)
	{
		((AMPGamemode*)Obj)->Rift_Active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMPGamemode_Statics::NewProp_Rift_Active = { "Rift_Active", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMPGamemode), &Z_Construct_UClass_AMPGamemode_Statics::NewProp_Rift_Active_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMPGamemode_Statics::NewProp_Rift_Active_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMPGamemode_Statics::NewProp_Rift_Active_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMPGamemode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPGamemode_Statics::NewProp_Rounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPGamemode_Statics::NewProp_Rounds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPGamemode_Statics::NewProp_Rift_Active,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMPGamemode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMPGamemode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMPGamemode_Statics::ClassParams = {
		&AMPGamemode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMPGamemode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AMPGamemode_Statics::PropPointers),
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AMPGamemode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMPGamemode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMPGamemode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMPGamemode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMPGamemode, 2389288691);
	template<> MAJORPROJECT_API UClass* StaticClass<AMPGamemode>()
	{
		return AMPGamemode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMPGamemode(Z_Construct_UClass_AMPGamemode, &AMPGamemode::StaticClass, TEXT("/Script/MajorProject"), TEXT("AMPGamemode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMPGamemode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
