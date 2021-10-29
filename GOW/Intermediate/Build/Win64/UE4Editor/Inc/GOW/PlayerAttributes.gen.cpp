// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GOW/PlayerAttributes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAttributes() {}
// Cross Module References
	GOW_API UClass* Z_Construct_UClass_UPlayerAttributes_NoRegister();
	GOW_API UClass* Z_Construct_UClass_UPlayerAttributes();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_GOW();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerAttributes::execDamageAttribute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayAttribute*)Z_Param__Result=P_THIS->DamageAttribute();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAttributes::execHealthAttribute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayAttribute*)Z_Param__Result=P_THIS->HealthAttribute();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAttributes::execSpeedAttribute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayAttribute*)Z_Param__Result=P_THIS->SpeedAttribute();
		P_NATIVE_END;
	}
	void UPlayerAttributes::StaticRegisterNativesUPlayerAttributes()
	{
		UClass* Class = UPlayerAttributes::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageAttribute", &UPlayerAttributes::execDamageAttribute },
			{ "HealthAttribute", &UPlayerAttributes::execHealthAttribute },
			{ "SpeedAttribute", &UPlayerAttributes::execSpeedAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerAttributes_DamageAttribute_Statics
	{
		struct PlayerAttributes_eventDamageAttribute_Parms
		{
			FGameplayAttribute ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAttributes_DamageAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAttributes_eventDamageAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttributes_DamageAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttributes_DamageAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAttributes_DamageAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilites Functions" },
		{ "ModuleRelativePath", "PlayerAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttributes_DamageAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttributes, nullptr, "DamageAttribute", nullptr, nullptr, sizeof(PlayerAttributes_eventDamageAttribute_Parms), Z_Construct_UFunction_UPlayerAttributes_DamageAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributes_DamageAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAttributes_DamageAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributes_DamageAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAttributes_DamageAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAttributes_DamageAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAttributes_HealthAttribute_Statics
	{
		struct PlayerAttributes_eventHealthAttribute_Parms
		{
			FGameplayAttribute ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAttributes_HealthAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAttributes_eventHealthAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttributes_HealthAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttributes_HealthAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAttributes_HealthAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilites Functions" },
		{ "ModuleRelativePath", "PlayerAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttributes_HealthAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttributes, nullptr, "HealthAttribute", nullptr, nullptr, sizeof(PlayerAttributes_eventHealthAttribute_Parms), Z_Construct_UFunction_UPlayerAttributes_HealthAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributes_HealthAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAttributes_HealthAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributes_HealthAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAttributes_HealthAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAttributes_HealthAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAttributes_SpeedAttribute_Statics
	{
		struct PlayerAttributes_eventSpeedAttribute_Parms
		{
			FGameplayAttribute ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAttributes_SpeedAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAttributes_eventSpeedAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttributes_SpeedAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttributes_SpeedAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAttributes_SpeedAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilites Functions" },
		{ "ModuleRelativePath", "PlayerAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttributes_SpeedAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttributes, nullptr, "SpeedAttribute", nullptr, nullptr, sizeof(PlayerAttributes_eventSpeedAttribute_Parms), Z_Construct_UFunction_UPlayerAttributes_SpeedAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributes_SpeedAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAttributes_SpeedAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttributes_SpeedAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAttributes_SpeedAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAttributes_SpeedAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerAttributes_NoRegister()
	{
		return UPlayerAttributes::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAttributes_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAttributes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_GOW,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerAttributes_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerAttributes_DamageAttribute, "DamageAttribute" }, // 4127565772
		{ &Z_Construct_UFunction_UPlayerAttributes_HealthAttribute, "HealthAttribute" }, // 1345710593
		{ &Z_Construct_UFunction_UPlayerAttributes_SpeedAttribute, "SpeedAttribute" }, // 514146725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAttributes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlayerAttributes.h" },
		{ "ModuleRelativePath", "PlayerAttributes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Abilites | Stats" },
		{ "ModuleRelativePath", "PlayerAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAttributes, Speed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Abilites | Stats" },
		{ "ModuleRelativePath", "PlayerAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAttributes, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Abilites | Stats" },
		{ "ModuleRelativePath", "PlayerAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAttributes, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_Damage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributes_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAttributes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAttributes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAttributes_Statics::ClassParams = {
		&UPlayerAttributes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerAttributes_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributes_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerAttributes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerAttributes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerAttributes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerAttributes, 2672632161);
	template<> GOW_API UClass* StaticClass<UPlayerAttributes>()
	{
		return UPlayerAttributes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerAttributes(Z_Construct_UClass_UPlayerAttributes, &UPlayerAttributes::StaticClass, TEXT("/Script/GOW"), TEXT("UPlayerAttributes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAttributes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
