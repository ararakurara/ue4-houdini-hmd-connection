// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HMD_WRITE_FILE_RWTxtFile_generated_h
#error "RWTxtFile.generated.h already included, missing '#pragma once' in RWTxtFile.h"
#endif
#define HMD_WRITE_FILE_RWTxtFile_generated_h

#define HMD_write_file_Source_HMD_write_file_RWTxtFile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveArrayText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveDirectory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_GET_TARRAY(FString,Z_Param_SaveText); \
		P_GET_UBOOL(Z_Param_AllowOverWriting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URWTxtFile::SaveArrayText(Z_Param_SaveDirectory,Z_Param_Filename,Z_Param_SaveText,Z_Param_AllowOverWriting); \
		P_NATIVE_END; \
	}


#define HMD_write_file_Source_HMD_write_file_RWTxtFile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveArrayText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveDirectory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_GET_TARRAY(FString,Z_Param_SaveText); \
		P_GET_UBOOL(Z_Param_AllowOverWriting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URWTxtFile::SaveArrayText(Z_Param_SaveDirectory,Z_Param_Filename,Z_Param_SaveText,Z_Param_AllowOverWriting); \
		P_NATIVE_END; \
	}


#define HMD_write_file_Source_HMD_write_file_RWTxtFile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURWTxtFile(); \
	friend struct Z_Construct_UClass_URWTxtFile_Statics; \
public: \
	DECLARE_CLASS(URWTxtFile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HMD_write_file"), NO_API) \
	DECLARE_SERIALIZER(URWTxtFile)


#define HMD_write_file_Source_HMD_write_file_RWTxtFile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURWTxtFile(); \
	friend struct Z_Construct_UClass_URWTxtFile_Statics; \
public: \
	DECLARE_CLASS(URWTxtFile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HMD_write_file"), NO_API) \
	DECLARE_SERIALIZER(URWTxtFile)


#define HMD_write_file_Source_HMD_write_file_RWTxtFile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URWTxtFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URWTxtFile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URWTxtFile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URWTxtFile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URWTxtFile(URWTxtFile&&); \
	NO_API URWTxtFile(const URWTxtFile&); \
public:


#define HMD_write_file_Source_HMD_write_file_RWTxtFile_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URWTxtFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URWTxtFile(URWTxtFile&&); \
	NO_API URWTxtFile(const URWTxtFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URWTxtFile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URWTxtFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URWTxtFile)


#define HMD_write_file_Source_HMD_write_file_RWTxtFile_h_15_PRIVATE_PROPERTY_OFFSET
#define HMD_write_file_Source_HMD_write_file_RWTxtFile_h_12_PROLOG
#define HMD_write_file_Source_HMD_write_file_RWTxtFile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HMD_write_file_Source_HMD_write_file_RWTxtFile_h_15_PRIVATE_PROPERTY_OFFSET \
	HMD_write_file_Source_HMD_write_file_RWTxtFile_h_15_RPC_WRAPPERS \
	HMD_write_file_Source_HMD_write_file_RWTxtFile_h_15_INCLASS \
	HMD_write_file_Source_HMD_write_file_RWTxtFile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HMD_write_file_Source_HMD_write_file_RWTxtFile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HMD_write_file_Source_HMD_write_file_RWTxtFile_h_15_PRIVATE_PROPERTY_OFFSET \
	HMD_write_file_Source_HMD_write_file_RWTxtFile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HMD_write_file_Source_HMD_write_file_RWTxtFile_h_15_INCLASS_NO_PURE_DECLS \
	HMD_write_file_Source_HMD_write_file_RWTxtFile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HMD_WRITE_FILE_API UClass* StaticClass<class URWTxtFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HMD_write_file_Source_HMD_write_file_RWTxtFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
