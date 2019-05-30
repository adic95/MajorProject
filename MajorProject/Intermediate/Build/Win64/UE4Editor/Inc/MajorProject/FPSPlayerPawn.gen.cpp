// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MajorProject/Player/FPSPlayerPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSPlayerPawn() {}
// Cross Module References
	MAJORPROJECT_API UClass* Z_Construct_UClass_AFPSPlayerPawn_NoRegister();
	MAJORPROJECT_API UClass* Z_Construct_UClass_AFPSPlayerPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MajorProject();
	MAJORPROJECT_API UFunction* Z_Construct_UFunction_AFPSPlayerPawn_Move();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	MAJORPROJECT_API UFunction* Z_Construct_UFunction_AFPSPlayerPawn_ShootCamera();
	MAJORPROJECT_API UFunction* Z_Construct_UFunction_AFPSPlayerPawn_ShootWeapon();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AFPSPlayerPawn::StaticRegisterNativesAFPSPlayerPawn()
	{
		UClass* Class = AFPSPlayerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Move", &AFPSPlayerPawn::execMove },
			{ "ShootCamera", &AFPSPlayerPawn::execShootCamera },
			{ "ShootWeapon", &AFPSPlayerPawn::execShootWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSPlayerPawn_Move_Statics
	{
		struct FPSPlayerPawn_eventMove_Parms
		{
			FVector2D Movement;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Movement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSPlayerPawn_Move_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerPawn_eventMove_Parms, Movement), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerPawn_Move_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerPawn_Move_Statics::NewProp_Movement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerPawn_Move_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\nmove player\n</summary>\n<param name=\"Movement\">movement value (x = left / right)</param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerPawn_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerPawn, nullptr, "Move", sizeof(FPSPlayerPawn_eventMove_Parms), Z_Construct_UFunction_AFPSPlayerPawn_Move_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerPawn_Move_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerPawn_Move_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerPawn_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerPawn_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerPawn_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerPawn_ShootCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerPawn_ShootCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\nshoot in camera direction\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerPawn_ShootCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerPawn, nullptr, "ShootCamera", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerPawn_ShootCamera_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerPawn_ShootCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerPawn_ShootCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerPawn_ShootCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerPawn_ShootWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerPawn_ShootWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\nshoot bullet in weapon direction\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerPawn_ShootWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerPawn, nullptr, "ShootWeapon", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerPawn_ShootWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerPawn_ShootWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerPawn_ShootWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerPawn_ShootWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSPlayerPawn_NoRegister()
	{
		return AFPSPlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_AFPSPlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraRotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraRotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSPlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MajorProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSPlayerPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSPlayerPawn_Move, "Move" }, // 510654517
		{ &Z_Construct_UFunction_AFPSPlayerPawn_ShootCamera, "ShootCamera" }, // 2284864003
		{ &Z_Construct_UFunction_AFPSPlayerPawn_ShootWeapon, "ShootWeapon" }, // 3628987176
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/FPSPlayerPawn.h" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\nskeletal mesh component\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerPawn, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Collision_MetaData[] = {
		{ "Category", "Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\ncollision capsule component\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerPawn, Collision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Collision_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Collision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\ncamera component\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\ngravity value in m/s^2\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerPawn, Gravity), METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Gravity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Gravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_CameraRotationSpeed_MetaData[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\ncamera rotation speed in angle/s\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_CameraRotationSpeed = { "CameraRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerPawn, CameraRotationSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_CameraRotationSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_CameraRotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\nmovement speed in cm/s\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerPawn, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_MovementSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_MovementSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSPlayerPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Gravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_CameraRotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_MovementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSPlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSPlayerPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSPlayerPawn_Statics::ClassParams = {
		&AFPSPlayerPawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSPlayerPawn_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSPlayerPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSPlayerPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSPlayerPawn, 119359945);
	template<> MAJORPROJECT_API UClass* StaticClass<AFPSPlayerPawn>()
	{
		return AFPSPlayerPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSPlayerPawn(Z_Construct_UClass_AFPSPlayerPawn, &AFPSPlayerPawn::StaticClass, TEXT("/Script/MajorProject"), TEXT("AFPSPlayerPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSPlayerPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
