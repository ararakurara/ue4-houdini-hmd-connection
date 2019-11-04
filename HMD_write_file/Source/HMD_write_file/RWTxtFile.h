// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RWTxtFile.generated.h"

/**
 * 
 */
UCLASS()
class HMD_WRITE_FILE_API URWTxtFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "Save"))
		static bool SaveArrayText(FString SaveDirectory, FString Filename, TArray<FString> SaveText, bool AllowOverWriting);
	
};
