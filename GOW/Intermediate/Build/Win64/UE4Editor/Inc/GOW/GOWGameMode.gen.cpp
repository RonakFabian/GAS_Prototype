// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GOW/GOWGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGOWGameMode() {}
// Cross Module References
	GOW_API UClass* Z_Construct_UClass_AGOWGameMode_NoRegister();
	GOW_API UClass* Z_Construct_UClass_AGOWGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GOW();
// End Cross Module References
	void AGOWGameMode::StaticRegisterNativesAGOWGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGOWGameMode_NoRegister()
	{
		return AGOWGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGOWGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGOWGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GOW,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGOWGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GOWGameMode.h" },
		{ "ModuleRelativePath", "GOWGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGOWGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGOWGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGOWGameMode_Statics::ClassParams = {
		&AGOWGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGOWGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGOWGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGOWGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGOWGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGOWGameMode, 2550394324);
	template<> GOW_API UClass* StaticClass<AGOWGameMode>()
	{
		return AGOWGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGOWGameMode(Z_Construct_UClass_AGOWGameMode, &AGOWGameMode::StaticClass, TEXT("/Script/GOW"), TEXT("AGOWGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGOWGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
