// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RWTextFile.generated.h"

/**
 *
 */
UCLASS()
class MOUSE_API URWTextFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "ReadFile"))
		static bool ReadFile(FString& Data, FString FileName);


	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "WriteFile"))
		static bool WriteFile(FString SaveDirectory, FString FileName, TArray<FString> SaveText, bool AllowOverWriting);
};
