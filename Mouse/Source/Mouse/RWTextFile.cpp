// Fill out your copyright notice in the Description page of Project Settings.


#include "RWTextFile.h"
#include "Misc/FileHelper.h"
#include "Paths.h"
#include "HAL/PlatformFilemanager.h"

bool URWTextFile::ReadFile(FString& Data, FString FileName)
{
	return FFileHelper::LoadFileToString(Data, *(FPaths::GameDir() + FileName));
}


bool URWTextFile::WriteFile(FString SaveDirectory, FString FileName, TArray<FString> SaveText, bool AllowOverWriting = false)
{
	SaveDirectory += "\\";
	SaveDirectory += FileName;

	if (!AllowOverWriting)
	{
		if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*SaveDirectory))
		{
			return false;
		}
	}
	FString Result = "";
	for (FString& Each : SaveText)
	{
		Result += Each;
	}
	Result += LINE_TERMINATOR;

	return FFileHelper::SaveStringToFile(Result, *SaveDirectory);
}