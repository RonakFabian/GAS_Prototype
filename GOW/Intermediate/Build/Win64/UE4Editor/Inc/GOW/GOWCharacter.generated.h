// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOW_GOWCharacter_generated_h
#error "GOWCharacter.generated.h already included, missing '#pragma once' in GOWCharacter.h"
#endif
#define GOW_GOWCharacter_generated_h

#define GOW_Source_GOW_GOWCharacter_h_14_SPARSE_DATA
#define GOW_Source_GOW_GOWCharacter_h_14_RPC_WRAPPERS
#define GOW_Source_GOW_GOWCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define GOW_Source_GOW_GOWCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGOWCharacter(); \
	friend struct Z_Construct_UClass_AGOWCharacter_Statics; \
public: \
	DECLARE_CLASS(AGOWCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GOW"), NO_API) \
	DECLARE_SERIALIZER(AGOWCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AGOWCharacter*>(this); }


#define GOW_Source_GOW_GOWCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGOWCharacter(); \
	friend struct Z_Construct_UClass_AGOWCharacter_Statics; \
public: \
	DECLARE_CLASS(AGOWCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GOW"), NO_API) \
	DECLARE_SERIALIZER(AGOWCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AGOWCharacter*>(this); }


#define GOW_Source_GOW_GOWCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGOWCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGOWCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGOWCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGOWCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGOWCharacter(AGOWCharacter&&); \
	NO_API AGOWCharacter(const AGOWCharacter&); \
public:


#define GOW_Source_GOW_GOWCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGOWCharacter(AGOWCharacter&&); \
	NO_API AGOWCharacter(const AGOWCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGOWCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGOWCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGOWCharacter)


#define GOW_Source_GOW_GOWCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AGOWCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AGOWCharacter, FollowCamera); }


#define GOW_Source_GOW_GOWCharacter_h_11_PROLOG
#define GOW_Source_GOW_GOWCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GOW_Source_GOW_GOWCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	GOW_Source_GOW_GOWCharacter_h_14_SPARSE_DATA \
	GOW_Source_GOW_GOWCharacter_h_14_RPC_WRAPPERS \
	GOW_Source_GOW_GOWCharacter_h_14_INCLASS \
	GOW_Source_GOW_GOWCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GOW_Source_GOW_GOWCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GOW_Source_GOW_GOWCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	GOW_Source_GOW_GOWCharacter_h_14_SPARSE_DATA \
	GOW_Source_GOW_GOWCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GOW_Source_GOW_GOWCharacter_h_14_INCLASS_NO_PURE_DECLS \
	GOW_Source_GOW_GOWCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOW_API UClass* StaticClass<class AGOWCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GOW_Source_GOW_GOWCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
