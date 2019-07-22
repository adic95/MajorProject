// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MajorProject/Base/MPGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPGameModeBase() {}
// Cross Module References
	MAJORPROJECT_API UClass* Z_Construct_UClass_AMPGameModeBase_NoRegister();
	MAJORPROJECT_API UClass* Z_Construct_UClass_AMPGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MajorProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MAJORPROJECT_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	MAJORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyRound();
// End Cross Module References
	void AMPGameModeBase::StaticRegisterNativesAMPGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMPGameModeBase_NoRegister()
	{
		return AMPGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMPGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponClass_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiftActive_MetaData[];
#endif
		static void NewProp_RiftActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RiftActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Rounds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rounds_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMPGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MajorProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Base/MPGameModeBase.h" },
		{ "ModuleRelativePath", "Base/MPGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Base/MPGameModeBase.h" },
		{ "ToolTip", "declare Array of Subclasses of Weapons for weapon stash" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPGameModeBase, WeaponClass), METADATA_PARAMS(Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_WeaponClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_WeaponClass_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_WeaponClass_Inner = { "WeaponClass", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_RiftActive_MetaData[] = {
		{ "Category", "Device Check" },
		{ "ModuleRelativePath", "Base/MPGameModeBase.h" },
		{ "ToolTip", "<summary>\nBool for checking if rift is active\n</summary>" },
	};
#endif
	void Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_RiftActive_SetBit(void* Obj)
	{
		((AMPGameModeBase*)Obj)->RiftActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_RiftActive = { "RiftActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMPGameModeBase), &Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_RiftActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_RiftActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_RiftActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_Rounds_MetaData[] = {
		{ "Category", "Enemy Rounds" },
		{ "ModuleRelativePath", "Base/MPGameModeBase.h" },
		{ "ToolTip", "<summary>\nall enemy rounds\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_Rounds = { "Rounds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPGameModeBase, Rounds), METADATA_PARAMS(Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_Rounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_Rounds_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_Rounds_Inner = { "Rounds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEnemyRound, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMPGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_WeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_WeaponClass_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_RiftActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_Rounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPGameModeBase_Statics::NewProp_Rounds_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMPGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMPGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMPGameModeBase_Statics::ClassParams = {
		&AMPGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMPGameModeBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AMPGameModeBase_Statics::PropPointers),
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AMPGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMPGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMPGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMPGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMPGameModeBase, 3586555206);
	template<> MAJORPROJECT_API UClass* StaticClass<AMPGameModeBase>()
	{
		return AMPGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMPGameModeBase(Z_Construct_UClass_AMPGameModeBase, &AMPGameModeBase::StaticClass, TEXT("/Script/MajorProject"), TEXT("AMPGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMPGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
