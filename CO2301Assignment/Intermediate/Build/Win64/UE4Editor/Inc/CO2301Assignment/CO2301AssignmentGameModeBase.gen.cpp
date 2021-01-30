// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CO2301Assignment/CO2301AssignmentGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCO2301AssignmentGameModeBase() {}
// Cross Module References
	CO2301ASSIGNMENT_API UClass* Z_Construct_UClass_ACO2301AssignmentGameModeBase_NoRegister();
	CO2301ASSIGNMENT_API UClass* Z_Construct_UClass_ACO2301AssignmentGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CO2301Assignment();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACO2301AssignmentGameModeBase::execEndGame)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_UBOOL(Z_Param_bHasWon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndGame(Z_Param_PlayerController,Z_Param_bHasWon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACO2301AssignmentGameModeBase::execStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGame();
		P_NATIVE_END;
	}
	void ACO2301AssignmentGameModeBase::StaticRegisterNativesACO2301AssignmentGameModeBase()
	{
		UClass* Class = ACO2301AssignmentGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndGame", &ACO2301AssignmentGameModeBase::execEndGame },
			{ "StartGame", &ACO2301AssignmentGameModeBase::execStartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACO2301AssignmentGameModeBase_EndGame_Statics
	{
		struct CO2301AssignmentGameModeBase_eventEndGame_Parms
		{
			APlayerController* PlayerController;
			bool bHasWon;
		};
		static void NewProp_bHasWon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasWon;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACO2301AssignmentGameModeBase_EndGame_Statics::NewProp_bHasWon_SetBit(void* Obj)
	{
		((CO2301AssignmentGameModeBase_eventEndGame_Parms*)Obj)->bHasWon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACO2301AssignmentGameModeBase_EndGame_Statics::NewProp_bHasWon = { "bHasWon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CO2301AssignmentGameModeBase_eventEndGame_Parms), &Z_Construct_UFunction_ACO2301AssignmentGameModeBase_EndGame_Statics::NewProp_bHasWon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACO2301AssignmentGameModeBase_EndGame_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CO2301AssignmentGameModeBase_eventEndGame_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACO2301AssignmentGameModeBase_EndGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACO2301AssignmentGameModeBase_EndGame_Statics::NewProp_bHasWon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACO2301AssignmentGameModeBase_EndGame_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACO2301AssignmentGameModeBase_EndGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CO2301AssignmentGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACO2301AssignmentGameModeBase_EndGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACO2301AssignmentGameModeBase, nullptr, "EndGame", nullptr, nullptr, sizeof(CO2301AssignmentGameModeBase_eventEndGame_Parms), Z_Construct_UFunction_ACO2301AssignmentGameModeBase_EndGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACO2301AssignmentGameModeBase_EndGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACO2301AssignmentGameModeBase_EndGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACO2301AssignmentGameModeBase_EndGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACO2301AssignmentGameModeBase_EndGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACO2301AssignmentGameModeBase_EndGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACO2301AssignmentGameModeBase_StartGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACO2301AssignmentGameModeBase_StartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CO2301AssignmentGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACO2301AssignmentGameModeBase_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACO2301AssignmentGameModeBase, nullptr, "StartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACO2301AssignmentGameModeBase_StartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACO2301AssignmentGameModeBase_StartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACO2301AssignmentGameModeBase_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACO2301AssignmentGameModeBase_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACO2301AssignmentGameModeBase_NoRegister()
	{
		return ACO2301AssignmentGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACO2301AssignmentGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACO2301AssignmentGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CO2301Assignment,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACO2301AssignmentGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACO2301AssignmentGameModeBase_EndGame, "EndGame" }, // 1282510216
		{ &Z_Construct_UFunction_ACO2301AssignmentGameModeBase_StartGame, "StartGame" }, // 3314410808
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACO2301AssignmentGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CO2301AssignmentGameModeBase.h" },
		{ "ModuleRelativePath", "CO2301AssignmentGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACO2301AssignmentGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACO2301AssignmentGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACO2301AssignmentGameModeBase_Statics::ClassParams = {
		&ACO2301AssignmentGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACO2301AssignmentGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACO2301AssignmentGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACO2301AssignmentGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACO2301AssignmentGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACO2301AssignmentGameModeBase, 4205549754);
	template<> CO2301ASSIGNMENT_API UClass* StaticClass<ACO2301AssignmentGameModeBase>()
	{
		return ACO2301AssignmentGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACO2301AssignmentGameModeBase(Z_Construct_UClass_ACO2301AssignmentGameModeBase, &ACO2301AssignmentGameModeBase::StaticClass, TEXT("/Script/CO2301Assignment"), TEXT("ACO2301AssignmentGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACO2301AssignmentGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
