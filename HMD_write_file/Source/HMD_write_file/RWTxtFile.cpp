// Fill out your copyright notice in the Description page of Project Settings.


#include "RWTxtFile.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"

bool URWTxtFile::SaveArrayText(FString SaveDirectory, FString FileName, TArray<FString> SaveText, bool AllowOverWriting = true)
{
	// Set compiete file path
	SaveDirectory += "\\";
	SaveDirectory += FileName;



	FString FinalString = "";
	for (FString& Each : SaveText)
	{
		FinalString += Each;
		FinalString += LINE_TERMINATOR;
	}

	return FFileHelper::SaveStringToFile(FinalString, *SaveDirectory);
}

