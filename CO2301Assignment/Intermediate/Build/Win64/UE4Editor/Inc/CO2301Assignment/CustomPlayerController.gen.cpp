// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CO2301Assignment/CustomPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomPlayerController() {}
// Cross Module References
	CO2301ASSIGNMENT_API UClass* Z_Construct_UClass_ACustomPlayerController_NoRegister();
	CO2301ASSIGNMENT_API UClass* Z_Construct_UClass_ACustomPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_CO2301Assignment();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void ACustomPlayerController::StaticRegisterNativesACustomPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ACustomPlayerController_NoRegister()
	{
		return ACustomPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACustomPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoseScreenClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LoseScreenClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CO2301Assignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CustomPlayerController.h" },
		{ "ModuleRelativePath", "CustomPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_LoseScreenClass_MetaData[] = {
		{ "Category", "CustomPlayerController" },
		{ "ModuleRelativePath", "CustomPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_LoseScreenClass = { "LoseScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPlayerController, LoseScreenClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_LoseScreenClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_LoseScreenClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_LoseScreenClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACustomPlayerController_Statics::ClassParams = {
		&ACustomPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACustomPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACustomPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACustomPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACustomPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACustomPlayerController, 2679630267);
	template<> CO2301ASSIGNMENT_API UClass* StaticClass<ACustomPlayerController>()
	{
		return ACustomPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACustomPlayerController(Z_Construct_UClass_ACustomPlayerController, &ACustomPlayerController::StaticClass, TEXT("/Script/CO2301Assignment"), TEXT("ACustomPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
