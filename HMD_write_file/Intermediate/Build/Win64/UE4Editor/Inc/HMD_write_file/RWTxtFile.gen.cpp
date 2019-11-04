// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HMD_write_file/RWTxtFile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRWTxtFile() {}
// Cross Module References
	HMD_WRITE_FILE_API UClass* Z_Construct_UClass_URWTxtFile_NoRegister();
	HMD_WRITE_FILE_API UClass* Z_Construct_UClass_URWTxtFile();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HMD_write_file();
	HMD_WRITE_FILE_API UFunction* Z_Construct_UFunction_URWTxtFile_SaveArrayText();
// End Cross Module References
	void URWTxtFile::StaticRegisterNativesURWTxtFile()
	{
		UClass* Class = URWTxtFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SaveArrayText", &URWTxtFile::execSaveArrayText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics
	{
		struct RWTxtFile_eventSaveArrayText_Parms
		{
			FString SaveDirectory;
			FString Filename;
			TArray<FString> SaveText;
			bool AllowOverWriting;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_AllowOverWriting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowOverWriting;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SaveText;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveText_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveDirectory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RWTxtFile_eventSaveArrayText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RWTxtFile_eventSaveArrayText_Parms), &Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::NewProp_AllowOverWriting_SetBit(void* Obj)
	{
		((RWTxtFile_eventSaveArrayText_Parms*)Obj)->AllowOverWriting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::NewProp_AllowOverWriting = { "AllowOverWriting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RWTxtFile_eventSaveArrayText_Parms), &Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::NewProp_AllowOverWriting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::NewProp_SaveText = { "SaveText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RWTxtFile_eventSaveArrayText_Parms, SaveText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::NewProp_SaveText_Inner = { "SaveText", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RWTxtFile_eventSaveArrayText_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::NewProp_SaveDirectory = { "SaveDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RWTxtFile_eventSaveArrayText_Parms, SaveDirectory), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::NewProp_AllowOverWriting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::NewProp_SaveText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::NewProp_SaveText_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::NewProp_SaveDirectory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "Keywords", "Save" },
		{ "ModuleRelativePath", "RWTxtFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URWTxtFile, nullptr, "SaveArrayText", sizeof(RWTxtFile_eventSaveArrayText_Parms), Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URWTxtFile_SaveArrayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URWTxtFile_SaveArrayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URWTxtFile_NoRegister()
	{
		return URWTxtFile::StaticClass();
	}
	struct Z_Construct_UClass_URWTxtFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URWTxtFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HMD_write_file,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URWTxtFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URWTxtFile_SaveArrayText, "SaveArrayText" }, // 1203931602
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URWTxtFile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RWTxtFile.h" },
		{ "ModuleRelativePath", "RWTxtFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URWTxtFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URWTxtFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URWTxtFile_Statics::ClassParams = {
		&URWTxtFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URWTxtFile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URWTxtFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URWTxtFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URWTxtFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URWTxtFile, 4098597467);
	template<> HMD_WRITE_FILE_API UClass* StaticClass<URWTxtFile>()
	{
		return URWTxtFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URWTxtFile(Z_Construct_UClass_URWTxtFile, &URWTxtFile::StaticClass, TEXT("/Script/HMD_write_file"), TEXT("URWTxtFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URWTxtFile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
