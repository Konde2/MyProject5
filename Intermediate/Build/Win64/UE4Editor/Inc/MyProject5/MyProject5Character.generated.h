// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT5_MyProject5Character_generated_h
#error "MyProject5Character.generated.h already included, missing '#pragma once' in MyProject5Character.h"
#endif
#define MYPROJECT5_MyProject5Character_generated_h

#define MyProject5_Source_MyProject5_MyProject5Character_h_12_SPARSE_DATA
#define MyProject5_Source_MyProject5_MyProject5Character_h_12_RPC_WRAPPERS
#define MyProject5_Source_MyProject5_MyProject5Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject5_Source_MyProject5_MyProject5Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProject5Character(); \
	friend struct Z_Construct_UClass_AMyProject5Character_Statics; \
public: \
	DECLARE_CLASS(AMyProject5Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject5"), NO_API) \
	DECLARE_SERIALIZER(AMyProject5Character)


#define MyProject5_Source_MyProject5_MyProject5Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyProject5Character(); \
	friend struct Z_Construct_UClass_AMyProject5Character_Statics; \
public: \
	DECLARE_CLASS(AMyProject5Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject5"), NO_API) \
	DECLARE_SERIALIZER(AMyProject5Character)


#define MyProject5_Source_MyProject5_MyProject5Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProject5Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject5Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject5Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject5Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject5Character(AMyProject5Character&&); \
	NO_API AMyProject5Character(const AMyProject5Character&); \
public:


#define MyProject5_Source_MyProject5_MyProject5Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject5Character(AMyProject5Character&&); \
	NO_API AMyProject5Character(const AMyProject5Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject5Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject5Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject5Character)


#define MyProject5_Source_MyProject5_MyProject5Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMyProject5Character, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMyProject5Character, FollowCamera); }


#define MyProject5_Source_MyProject5_MyProject5Character_h_9_PROLOG
#define MyProject5_Source_MyProject5_MyProject5Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject5_Source_MyProject5_MyProject5Character_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject5_Source_MyProject5_MyProject5Character_h_12_SPARSE_DATA \
	MyProject5_Source_MyProject5_MyProject5Character_h_12_RPC_WRAPPERS \
	MyProject5_Source_MyProject5_MyProject5Character_h_12_INCLASS \
	MyProject5_Source_MyProject5_MyProject5Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject5_Source_MyProject5_MyProject5Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject5_Source_MyProject5_MyProject5Character_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject5_Source_MyProject5_MyProject5Character_h_12_SPARSE_DATA \
	MyProject5_Source_MyProject5_MyProject5Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject5_Source_MyProject5_MyProject5Character_h_12_INCLASS_NO_PURE_DECLS \
	MyProject5_Source_MyProject5_MyProject5Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT5_API UClass* StaticClass<class AMyProject5Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject5_Source_MyProject5_MyProject5Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
