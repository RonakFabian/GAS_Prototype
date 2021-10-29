// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOW_GOWGameMode_generated_h
#error "GOWGameMode.generated.h already included, missing '#pragma once' in GOWGameMode.h"
#endif
#define GOW_GOWGameMode_generated_h

#define GOW_Source_GOW_GOWGameMode_h_12_SPARSE_DATA
#define GOW_Source_GOW_GOWGameMode_h_12_RPC_WRAPPERS
#define GOW_Source_GOW_GOWGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GOW_Source_GOW_GOWGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGOWGameMode(); \
	friend struct Z_Construct_UClass_AGOWGameMode_Statics; \
public: \
	DECLARE_CLASS(AGOWGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GOW"), GOW_API) \
	DECLARE_SERIALIZER(AGOWGameMode)


#define GOW_Source_GOW_GOWGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGOWGameMode(); \
	friend struct Z_Construct_UClass_AGOWGameMode_Statics; \
public: \
	DECLARE_CLASS(AGOWGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GOW"), GOW_API) \
	DECLARE_SERIALIZER(AGOWGameMode)


#define GOW_Source_GOW_GOWGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GOW_API AGOWGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGOWGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GOW_API, AGOWGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGOWGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GOW_API AGOWGameMode(AGOWGameMode&&); \
	GOW_API AGOWGameMode(const AGOWGameMode&); \
public:


#define GOW_Source_GOW_GOWGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GOW_API AGOWGameMode(AGOWGameMode&&); \
	GOW_API AGOWGameMode(const AGOWGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GOW_API, AGOWGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGOWGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGOWGameMode)


#define GOW_Source_GOW_GOWGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define GOW_Source_GOW_GOWGameMode_h_9_PROLOG
#define GOW_Source_GOW_GOWGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GOW_Source_GOW_GOWGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	GOW_Source_GOW_GOWGameMode_h_12_SPARSE_DATA \
	GOW_Source_GOW_GOWGameMode_h_12_RPC_WRAPPERS \
	GOW_Source_GOW_GOWGameMode_h_12_INCLASS \
	GOW_Source_GOW_GOWGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GOW_Source_GOW_GOWGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GOW_Source_GOW_GOWGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	GOW_Source_GOW_GOWGameMode_h_12_SPARSE_DATA \
	GOW_Source_GOW_GOWGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GOW_Source_GOW_GOWGameMode_h_12_INCLASS_NO_PURE_DECLS \
	GOW_Source_GOW_GOWGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOW_API UClass* StaticClass<class AGOWGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GOW_Source_GOW_GOWGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
