// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "AndroidVibrationEffectBPLibrary.generated.h"



UCLASS()
class UAndroidVibrationEffectBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "AndroidVibrationEffect sample test testing"), Category = "AndroidVibrationEffectTesting")
	static void AndroidVibrationEffectSampleFunction(float Param);
};
