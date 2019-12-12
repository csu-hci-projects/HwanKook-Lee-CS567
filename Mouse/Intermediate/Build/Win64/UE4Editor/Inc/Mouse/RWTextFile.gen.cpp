// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mouse/RWTextFile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRWTextFile() {}
// Cross Module References
	MOUSE_API UClass* Z_Construct_UClass_URWTextFile_NoRegister();
	MOUSE_API UClass* Z_Construct_UClass_URWTextFile();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Mouse();
	MOUSE_API UFunction* Z_Construct_UFunction_URWTextFile_ReadFile();
	MOUSE_API UFunction* Z_Construct_UFunction_URWTextFile_WriteFile();
// End Cross Module References
	void URWTextFile::StaticRegisterNativesURWTextFile()
	{
		UClass* Class = URWTextFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadFile", &URWTextFile::execReadFile },
			{ "WriteFile", &URWTextFile::execWriteFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URWTextFile_ReadFile_Statics
	{
		struct RWTextFile_eventReadFile_Parms
		{
			FString Data;
			FString FileName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URWTextFile_ReadFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RWTextFile_eventReadFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URWTextFile_ReadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RWTextFile_eventReadFile_Parms), &Z_Construct_UFunction_URWTextFile_ReadFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URWTextFile_ReadFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RWTextFile_eventReadFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URWTextFile_ReadFile_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RWTextFile_eventReadFile_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URWTextFile_ReadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTextFile_ReadFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTextFile_ReadFile_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTextFile_ReadFile_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URWTextFile_ReadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "Keywords", "ReadFile" },
		{ "ModuleRelativePath", "RWTextFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URWTextFile_ReadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URWTextFile, nullptr, "ReadFile", nullptr, nullptr, sizeof(RWTextFile_eventReadFile_Parms), Z_Construct_UFunction_URWTextFile_ReadFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URWTextFile_ReadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URWTextFile_ReadFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URWTextFile_ReadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URWTextFile_ReadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URWTextFile_ReadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URWTextFile_WriteFile_Statics
	{
		struct RWTextFile_eventWriteFile_Parms
		{
			FString SaveDirectory;
			FString FileName;
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
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveDirectory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URWTextFile_WriteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RWTextFile_eventWriteFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URWTextFile_WriteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RWTextFile_eventWriteFile_Parms), &Z_Construct_UFunction_URWTextFile_WriteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URWTextFile_WriteFile_Statics::NewProp_AllowOverWriting_SetBit(void* Obj)
	{
		((RWTextFile_eventWriteFile_Parms*)Obj)->AllowOverWriting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URWTextFile_WriteFile_Statics::NewProp_AllowOverWriting = { "AllowOverWriting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RWTextFile_eventWriteFile_Parms), &Z_Construct_UFunction_URWTextFile_WriteFile_Statics::NewProp_AllowOverWriting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URWTextFile_WriteFile_Statics::NewProp_SaveText = { "SaveText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RWTextFile_eventWriteFile_Parms, SaveText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URWTextFile_WriteFile_Statics::NewProp_SaveText_Inner = { "SaveText", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URWTextFile_WriteFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RWTextFile_eventWriteFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URWTextFile_WriteFile_Statics::NewProp_SaveDirectory = { "SaveDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RWTextFile_eventWriteFile_Parms, SaveDirectory), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URWTextFile_WriteFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTextFile_WriteFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTextFile_WriteFile_Statics::NewProp_AllowOverWriting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTextFile_WriteFile_Statics::NewProp_SaveText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTextFile_WriteFile_Statics::NewProp_SaveText_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTextFile_WriteFile_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTextFile_WriteFile_Statics::NewProp_SaveDirectory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URWTextFile_WriteFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "Keywords", "WriteFile" },
		{ "ModuleRelativePath", "RWTextFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URWTextFile_WriteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URWTextFile, nullptr, "WriteFile", nullptr, nullptr, sizeof(RWTextFile_eventWriteFile_Parms), Z_Construct_UFunction_URWTextFile_WriteFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URWTextFile_WriteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URWTextFile_WriteFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URWTextFile_WriteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URWTextFile_WriteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URWTextFile_WriteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URWTextFile_NoRegister()
	{
		return URWTextFile::StaticClass();
	}
	struct Z_Construct_UClass_URWTextFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URWTextFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Mouse,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URWTextFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URWTextFile_ReadFile, "ReadFile" }, // 1317607373
		{ &Z_Construct_UFunction_URWTextFile_WriteFile, "WriteFile" }, // 1857009305
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URWTextFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "RWTextFile.h" },
		{ "ModuleRelativePath", "RWTextFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URWTextFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URWTextFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URWTextFile_Statics::ClassParams = {
		&URWTextFile::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URWTextFile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URWTextFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URWTextFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URWTextFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URWTextFile, 1238662379);
	template<> MOUSE_API UClass* StaticClass<URWTextFile>()
	{
		return URWTextFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URWTextFile(Z_Construct_UClass_URWTextFile, &URWTextFile::StaticClass, TEXT("/Script/Mouse"), TEXT("URWTextFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URWTextFile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
