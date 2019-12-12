// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOUSE_RWTextFile_generated_h
#error "RWTextFile.generated.h already included, missing '#pragma once' in RWTextFile.h"
#endif
#define MOUSE_RWTextFile_generated_h

#define Mouse_Source_Mouse_RWTextFile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWriteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveDirectory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_TARRAY(FString,Z_Param_SaveText); \
		P_GET_UBOOL(Z_Param_AllowOverWriting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URWTextFile::WriteFile(Z_Param_SaveDirectory,Z_Param_FileName,Z_Param_SaveText,Z_Param_AllowOverWriting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadFile) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Data); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URWTextFile::ReadFile(Z_Param_Out_Data,Z_Param_FileName); \
		P_NATIVE_END; \
	}


#define Mouse_Source_Mouse_RWTextFile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWriteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveDirectory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_TARRAY(FString,Z_Param_SaveText); \
		P_GET_UBOOL(Z_Param_AllowOverWriting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URWTextFile::WriteFile(Z_Param_SaveDirectory,Z_Param_FileName,Z_Param_SaveText,Z_Param_AllowOverWriting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadFile) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Data); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URWTextFile::ReadFile(Z_Param_Out_Data,Z_Param_FileName); \
		P_NATIVE_END; \
	}


#define Mouse_Source_Mouse_RWTextFile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURWTextFile(); \
	friend struct Z_Construct_UClass_URWTextFile_Statics; \
public: \
	DECLARE_CLASS(URWTextFile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mouse"), NO_API) \
	DECLARE_SERIALIZER(URWTextFile)


#define Mouse_Source_Mouse_RWTextFile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURWTextFile(); \
	friend struct Z_Construct_UClass_URWTextFile_Statics; \
public: \
	DECLARE_CLASS(URWTextFile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mouse"), NO_API) \
	DECLARE_SERIALIZER(URWTextFile)


#define Mouse_Source_Mouse_RWTextFile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URWTextFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URWTextFile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URWTextFile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URWTextFile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URWTextFile(URWTextFile&&); \
	NO_API URWTextFile(const URWTextFile&); \
public:


#define Mouse_Source_Mouse_RWTextFile_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URWTextFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URWTextFile(URWTextFile&&); \
	NO_API URWTextFile(const URWTextFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URWTextFile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URWTextFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URWTextFile)


#define Mouse_Source_Mouse_RWTextFile_h_15_PRIVATE_PROPERTY_OFFSET
#define Mouse_Source_Mouse_RWTextFile_h_12_PROLOG
#define Mouse_Source_Mouse_RWTextFile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mouse_Source_Mouse_RWTextFile_h_15_PRIVATE_PROPERTY_OFFSET \
	Mouse_Source_Mouse_RWTextFile_h_15_RPC_WRAPPERS \
	Mouse_Source_Mouse_RWTextFile_h_15_INCLASS \
	Mouse_Source_Mouse_RWTextFile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mouse_Source_Mouse_RWTextFile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mouse_Source_Mouse_RWTextFile_h_15_PRIVATE_PROPERTY_OFFSET \
	Mouse_Source_Mouse_RWTextFile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Mouse_Source_Mouse_RWTextFile_h_15_INCLASS_NO_PURE_DECLS \
	Mouse_Source_Mouse_RWTextFile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUSE_API UClass* StaticClass<class URWTextFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mouse_Source_Mouse_RWTextFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
