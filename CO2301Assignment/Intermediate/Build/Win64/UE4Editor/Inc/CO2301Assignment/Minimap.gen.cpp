// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CO2301Assignment/Minimap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinimap() {}
// Cross Module References
	CO2301ASSIGNMENT_API UClass* Z_Construct_UClass_AMinimap_NoRegister();
	CO2301ASSIGNMENT_API UClass* Z_Construct_UClass_AMinimap();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CO2301Assignment();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
// End Cross Module References
	void AMinimap::StaticRegisterNativesAMinimap()
	{
	}
	UClass* Z_Construct_UClass_AMinimap_NoRegister()
	{
		return AMinimap::StaticClass();
	}
	struct Z_Construct_UClass_AMinimap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Plane_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Plane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinimap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CO2301Assignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinimap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Minimap.h" },
		{ "ModuleRelativePath", "Minimap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinimap_Statics::NewProp_Plane_MetaData[] = {
		{ "Category", "Minimap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Minimap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinimap_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinimap, Plane), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinimap_Statics::NewProp_Plane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinimap_Statics::NewProp_Plane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinimap_Statics::NewProp_MapCamera_MetaData[] = {
		{ "Category", "Minimap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Minimap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinimap_Statics::NewProp_MapCamera = { "MapCamera", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinimap, MapCamera), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinimap_Statics::NewProp_MapCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinimap_Statics::NewProp_MapCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinimap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinimap_Statics::NewProp_Plane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinimap_Statics::NewProp_MapCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinimap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinimap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMinimap_Statics::ClassParams = {
		&AMinimap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMinimap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMinimap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMinimap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMinimap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMinimap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMinimap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMinimap, 260856993);
	template<> CO2301ASSIGNMENT_API UClass* StaticClass<AMinimap>()
	{
		return AMinimap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMinimap(Z_Construct_UClass_AMinimap, &AMinimap::StaticClass, TEXT("/Script/CO2301Assignment"), TEXT("AMinimap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinimap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
