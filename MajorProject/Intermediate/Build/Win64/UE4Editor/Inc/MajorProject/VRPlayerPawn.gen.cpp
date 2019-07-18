// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MajorProject/Player/VRPlayerPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPlayerPawn() {}
// Cross Module References
	MAJORPROJECT_API UClass* Z_Construct_UClass_AVRPlayerPawn_NoRegister();
	MAJORPROJECT_API UClass* Z_Construct_UClass_AVRPlayerPawn();
	MAJORPROJECT_API UClass* Z_Construct_UClass_AFPSPlayerPawn();
	UPackage* Z_Construct_UPackage__Script_MajorProject();
	MAJORPROJECT_API UFunction* Z_Construct_UFunction_AVRPlayerPawn_ParentWeapon();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	MAJORPROJECT_API UFunction* Z_Construct_UFunction_AVRPlayerPawn_SetWeaponTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void AVRPlayerPawn::StaticRegisterNativesAVRPlayerPawn()
	{
		UClass* Class = AVRPlayerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ParentWeapon", &AVRPlayerPawn::execParentWeapon },
			{ "SetWeaponTransform", &AVRPlayerPawn::execSetWeaponTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVRPlayerPawn_ParentWeapon_Statics
	{
		struct VRPlayerPawn_eventParentWeapon_Parms
		{
			USceneComponent* Parent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRPlayerPawn_ParentWeapon_Statics::NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRPlayerPawn_ParentWeapon_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRPlayerPawn_eventParentWeapon_Parms, Parent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AVRPlayerPawn_ParentWeapon_Statics::NewProp_Parent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AVRPlayerPawn_ParentWeapon_Statics::NewProp_Parent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRPlayerPawn_ParentWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRPlayerPawn_ParentWeapon_Statics::NewProp_Parent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRPlayerPawn_ParentWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR Player" },
		{ "ModuleRelativePath", "Player/VRPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRPlayerPawn_ParentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPlayerPawn, nullptr, "ParentWeapon", sizeof(VRPlayerPawn_eventParentWeapon_Parms), Z_Construct_UFunction_AVRPlayerPawn_ParentWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVRPlayerPawn_ParentWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRPlayerPawn_ParentWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVRPlayerPawn_ParentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRPlayerPawn_ParentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVRPlayerPawn_ParentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRPlayerPawn_SetWeaponTransform_Statics
	{
		struct VRPlayerPawn_eventSetWeaponTransform_Parms
		{
			FTransform Transform;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRPlayerPawn_SetWeaponTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRPlayerPawn_eventSetWeaponTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRPlayerPawn_SetWeaponTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRPlayerPawn_SetWeaponTransform_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRPlayerPawn_SetWeaponTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR Player" },
		{ "ModuleRelativePath", "Player/VRPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRPlayerPawn_SetWeaponTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPlayerPawn, nullptr, "SetWeaponTransform", sizeof(VRPlayerPawn_eventSetWeaponTransform_Parms), Z_Construct_UFunction_AVRPlayerPawn_SetWeaponTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVRPlayerPawn_SetWeaponTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRPlayerPawn_SetWeaponTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVRPlayerPawn_SetWeaponTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRPlayerPawn_SetWeaponTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVRPlayerPawn_SetWeaponTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRPlayerPawn_NoRegister()
	{
		return AVRPlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_AVRPlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRPlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFPSPlayerPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MajorProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVRPlayerPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRPlayerPawn_ParentWeapon, "ParentWeapon" }, // 3878885013
		{ &Z_Construct_UFunction_AVRPlayerPawn_SetWeaponTransform, "SetWeaponTransform" }, // 1242166343
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/VRPlayerPawn.h" },
		{ "ModuleRelativePath", "Player/VRPlayerPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRPlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRPlayerPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRPlayerPawn_Statics::ClassParams = {
		&AVRPlayerPawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AVRPlayerPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRPlayerPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRPlayerPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRPlayerPawn, 1142276385);
	template<> MAJORPROJECT_API UClass* StaticClass<AVRPlayerPawn>()
	{
		return AVRPlayerPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRPlayerPawn(Z_Construct_UClass_AVRPlayerPawn, &AVRPlayerPawn::StaticClass, TEXT("/Script/MajorProject"), TEXT("AVRPlayerPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRPlayerPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
