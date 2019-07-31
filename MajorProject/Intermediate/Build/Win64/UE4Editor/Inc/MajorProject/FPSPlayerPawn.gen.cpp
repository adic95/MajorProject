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
	MAJORPROJECT_API UFunction* Z_Construct_UFunction_AFPSPlayerPawn_ChangeLevelOnPress();
	MAJORPROJECT_API UFunction* Z_Construct_UFunction_AFPSPlayerPawn_Collide();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	MAJORPROJECT_API UFunction* Z_Construct_UFunction_AFPSPlayerPawn_GrabFromDistance();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	MAJORPROJECT_API UFunction* Z_Construct_UFunction_AFPSPlayerPawn_Move();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	MAJORPROJECT_API UFunction* Z_Construct_UFunction_AFPSPlayerPawn_RecordPositions();
	MAJORPROJECT_API UFunction* Z_Construct_UFunction_AFPSPlayerPawn_RotateCamera();
	MAJORPROJECT_API UFunction* Z_Construct_UFunction_AFPSPlayerPawn_ShootCamera();
	MAJORPROJECT_API UFunction* Z_Construct_UFunction_AFPSPlayerPawn_ShootWeapon();
	MAJORPROJECT_API UFunction* Z_Construct_UFunction_AFPSPlayerPawn_ThrowWeapon();
	MAJORPROJECT_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AFPSPlayerPawn::StaticRegisterNativesAFPSPlayerPawn()
	{
		UClass* Class = AFPSPlayerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeLevelOnPress", &AFPSPlayerPawn::execChangeLevelOnPress },
			{ "Collide", &AFPSPlayerPawn::execCollide },
			{ "GrabFromDistance", &AFPSPlayerPawn::execGrabFromDistance },
			{ "Move", &AFPSPlayerPawn::execMove },
			{ "RecordPositions", &AFPSPlayerPawn::execRecordPositions },
			{ "RotateCamera", &AFPSPlayerPawn::execRotateCamera },
			{ "ShootCamera", &AFPSPlayerPawn::execShootCamera },
			{ "ShootWeapon", &AFPSPlayerPawn::execShootWeapon },
			{ "ThrowWeapon", &AFPSPlayerPawn::execThrowWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSPlayerPawn_ChangeLevelOnPress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerPawn_ChangeLevelOnPress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerPawn_ChangeLevelOnPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerPawn, nullptr, "ChangeLevelOnPress", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerPawn_ChangeLevelOnPress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerPawn_ChangeLevelOnPress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerPawn_ChangeLevelOnPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerPawn_ChangeLevelOnPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerPawn_Collide_Statics
	{
		struct FPSPlayerPawn_eventCollide_Parms
		{
			UActorComponent* OtherComp;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerPawn_Collide_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSPlayerPawn_Collide_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerPawn_eventCollide_Parms, OtherComp), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerPawn_Collide_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerPawn_Collide_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerPawn_Collide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerPawn_Collide_Statics::NewProp_OtherComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerPawn_Collide_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\ncollide with other component\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerPawn_Collide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerPawn, nullptr, "Collide", sizeof(FPSPlayerPawn_eventCollide_Parms), Z_Construct_UFunction_AFPSPlayerPawn_Collide_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerPawn_Collide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerPawn_Collide_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerPawn_Collide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerPawn_Collide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerPawn_Collide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerPawn_GrabFromDistance_Statics
	{
		struct FPSPlayerPawn_eventGrabFromDistance_Parms
		{
			USceneComponent* Origin;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerPawn_GrabFromDistance_Statics::NewProp_Origin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSPlayerPawn_GrabFromDistance_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerPawn_eventGrabFromDistance_Parms, Origin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerPawn_GrabFromDistance_Statics::NewProp_Origin_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerPawn_GrabFromDistance_Statics::NewProp_Origin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerPawn_GrabFromDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerPawn_GrabFromDistance_Statics::NewProp_Origin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerPawn_GrabFromDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerPawn_GrabFromDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerPawn, nullptr, "GrabFromDistance", sizeof(FPSPlayerPawn_eventGrabFromDistance_Parms), Z_Construct_UFunction_AFPSPlayerPawn_GrabFromDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerPawn_GrabFromDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerPawn_GrabFromDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerPawn_GrabFromDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerPawn_GrabFromDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerPawn_GrabFromDistance_Statics::FuncParams);
		}
		return ReturnFunction;
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerPawn_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerPawn, nullptr, "Move", sizeof(FPSPlayerPawn_eventMove_Parms), Z_Construct_UFunction_AFPSPlayerPawn_Move_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerPawn_Move_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerPawn_Move_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerPawn_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerPawn_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerPawn_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerPawn_RecordPositions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerPawn_RecordPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerPawn_RecordPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerPawn, nullptr, "RecordPositions", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerPawn_RecordPositions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerPawn_RecordPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerPawn_RecordPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerPawn_RecordPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerPawn_RotateCamera_Statics
	{
		struct FPSPlayerPawn_eventRotateCamera_Parms
		{
			FVector2D Rotate;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSPlayerPawn_RotateCamera_Statics::NewProp_Rotate = { "Rotate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerPawn_eventRotateCamera_Parms, Rotate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerPawn_RotateCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerPawn_RotateCamera_Statics::NewProp_Rotate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerPawn_RotateCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\nrotate camera\n</summary>\n<param name=\"Rotate\">rotation value (x = yaw, y = pitch)</param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerPawn_RotateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerPawn, nullptr, "RotateCamera", sizeof(FPSPlayerPawn_eventRotateCamera_Parms), Z_Construct_UFunction_AFPSPlayerPawn_RotateCamera_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerPawn_RotateCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerPawn_RotateCamera_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerPawn_RotateCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerPawn_RotateCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerPawn_RotateCamera_Statics::FuncParams);
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerPawn_ShootCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerPawn, nullptr, "ShootCamera", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerPawn_ShootCamera_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerPawn_ShootCamera_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerPawn_ShootWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerPawn, nullptr, "ShootWeapon", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerPawn_ShootWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerPawn_ShootWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerPawn_ShootWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerPawn_ShootWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerPawn_ThrowWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerPawn_ThrowWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerPawn_ThrowWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerPawn, nullptr, "ThrowWeapon", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerPawn_ThrowWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerPawn_ThrowWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerPawn_ThrowWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerPawn_ThrowWeapon_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pcurrentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pcurrentWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGrabbed_MetaData[];
#endif
		static void NewProp_bGrabbed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGrabbed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHitPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerHitPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShootRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrabSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxGrabDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxGrabDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSys_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightHandMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftHandMesh;
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
		{ &Z_Construct_UFunction_AFPSPlayerPawn_ChangeLevelOnPress, "ChangeLevelOnPress" }, // 3562976657
		{ &Z_Construct_UFunction_AFPSPlayerPawn_Collide, "Collide" }, // 1168161109
		{ &Z_Construct_UFunction_AFPSPlayerPawn_GrabFromDistance, "GrabFromDistance" }, // 1015442491
		{ &Z_Construct_UFunction_AFPSPlayerPawn_Move, "Move" }, // 2716425102
		{ &Z_Construct_UFunction_AFPSPlayerPawn_RecordPositions, "RecordPositions" }, // 3137330028
		{ &Z_Construct_UFunction_AFPSPlayerPawn_RotateCamera, "RotateCamera" }, // 279592260
		{ &Z_Construct_UFunction_AFPSPlayerPawn_ShootCamera, "ShootCamera" }, // 1248422468
		{ &Z_Construct_UFunction_AFPSPlayerPawn_ShootWeapon, "ShootWeapon" }, // 2527182762
		{ &Z_Construct_UFunction_AFPSPlayerPawn_ThrowWeapon, "ThrowWeapon" }, // 2067615361
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/FPSPlayerPawn.h" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_pcurrentWeapon_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_pcurrentWeapon = { "pcurrentWeapon", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerPawn, pcurrentWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_pcurrentWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_pcurrentWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_bGrabbed_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_bGrabbed_SetBit(void* Obj)
	{
		((AFPSPlayerPawn*)Obj)->bGrabbed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_bGrabbed = { "bGrabbed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSPlayerPawn), &Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_bGrabbed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_bGrabbed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_bGrabbed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_PlayerHitPoints_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\n\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_PlayerHitPoints = { "PlayerHitPoints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerPawn, PlayerHitPoints), METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_PlayerHitPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_PlayerHitPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_ShootRange_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\n\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_ShootRange = { "ShootRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerPawn, ShootRange), METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_ShootRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_ShootRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_ThrowForce_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\n\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_ThrowForce = { "ThrowForce", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerPawn, ThrowForce), METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_ThrowForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_ThrowForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_GrabSpeed_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\n\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_GrabSpeed = { "GrabSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerPawn, GrabSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_GrabSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_GrabSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_MaxGrabDistance_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\n\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_MaxGrabDistance = { "MaxGrabDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerPawn, MaxGrabDistance), METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_MaxGrabDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_MaxGrabDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_ParticleSys_MetaData[] = {
		{ "Category", "VR_Player_Particles" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\nParticle System\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_ParticleSys = { "ParticleSys", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerPawn, ParticleSys), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_ParticleSys_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_ParticleSys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_RightController_MetaData[] = {
		{ "Category", "VR_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\nRight Motion Controller component\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_RightController = { "RightController", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerPawn, RightController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_RightController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_RightController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_LeftController_MetaData[] = {
		{ "Category", "VR_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\nLeft Motion Controller  component\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_LeftController = { "LeftController", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerPawn, LeftController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_LeftController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_LeftController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_RightHandMesh_MetaData[] = {
		{ "Category", "VR_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\nRight skeletal Hand mesh component\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_RightHandMesh = { "RightHandMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerPawn, RightHandMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_RightHandMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_RightHandMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_LeftHandMesh_MetaData[] = {
		{ "Category", "VR_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\nLeft skeletal Hand mesh component\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_LeftHandMesh = { "LeftHandMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerPawn, LeftHandMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_LeftHandMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_LeftHandMesh_MetaData)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerPawn, Collision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Collision_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Collision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/FPSPlayerPawn.h" },
		{ "ToolTip", "<summary>\ncamera component\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_Camera_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_pcurrentWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_bGrabbed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_PlayerHitPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_ShootRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_ThrowForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_GrabSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_MaxGrabDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_ParticleSys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_RightController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_LeftController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_RightHandMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerPawn_Statics::NewProp_LeftHandMesh,
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
	IMPLEMENT_CLASS(AFPSPlayerPawn, 3756201980);
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
