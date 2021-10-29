// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttribute;
#ifdef GOW_PlayerAttributes_generated_h
#error "PlayerAttributes.generated.h already included, missing '#pragma once' in PlayerAttributes.h"
#endif
#define GOW_PlayerAttributes_generated_h

#define GOW_Source_GOW_PlayerAttributes_h_15_SPARSE_DATA
#define GOW_Source_GOW_PlayerAttributes_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDamageAttribute); \
	DECLARE_FUNCTION(execHealthAttribute); \
	DECLARE_FUNCTION(execSpeedAttribute);


#define GOW_Source_GOW_PlayerAttributes_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDamageAttribute); \
	DECLARE_FUNCTION(execHealthAttribute); \
	DECLARE_FUNCTION(execSpeedAttribute);


#define GOW_Source_GOW_PlayerAttributes_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAttributes(); \
	friend struct Z_Construct_UClass_UPlayerAttributes_Statics; \
public: \
	DECLARE_CLASS(UPlayerAttributes, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GOW"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAttributes)


#define GOW_Source_GOW_PlayerAttributes_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerAttributes(); \
	friend struct Z_Construct_UClass_UPlayerAttributes_Statics; \
public: \
	DECLARE_CLASS(UPlayerAttributes, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GOW"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAttributes)


#define GOW_Source_GOW_PlayerAttributes_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAttributes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAttributes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAttributes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAttributes(UPlayerAttributes&&); \
	NO_API UPlayerAttributes(const UPlayerAttributes&); \
public:


#define GOW_Source_GOW_PlayerAttributes_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAttributes(UPlayerAttributes&&); \
	NO_API UPlayerAttributes(const UPlayerAttributes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAttributes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAttributes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAttributes)


#define GOW_Source_GOW_PlayerAttributes_h_15_PRIVATE_PROPERTY_OFFSET
#define GOW_Source_GOW_PlayerAttributes_h_12_PROLOG
#define GOW_Source_GOW_PlayerAttributes_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GOW_Source_GOW_PlayerAttributes_h_15_PRIVATE_PROPERTY_OFFSET \
	GOW_Source_GOW_PlayerAttributes_h_15_SPARSE_DATA \
	GOW_Source_GOW_PlayerAttributes_h_15_RPC_WRAPPERS \
	GOW_Source_GOW_PlayerAttributes_h_15_INCLASS \
	GOW_Source_GOW_PlayerAttributes_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GOW_Source_GOW_PlayerAttributes_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GOW_Source_GOW_PlayerAttributes_h_15_PRIVATE_PROPERTY_OFFSET \
	GOW_Source_GOW_PlayerAttributes_h_15_SPARSE_DATA \
	GOW_Source_GOW_PlayerAttributes_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GOW_Source_GOW_PlayerAttributes_h_15_INCLASS_NO_PURE_DECLS \
	GOW_Source_GOW_PlayerAttributes_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOW_API UClass* StaticClass<class UPlayerAttributes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GOW_Source_GOW_PlayerAttributes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
