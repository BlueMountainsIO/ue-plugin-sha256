// Copyright 2023 Blue Mountains GmbH. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SHA256Hash.generated.h"

USTRUCT(BlueprintType)
struct FSHA256Hash
{
	GENERATED_BODY()

public:
	FSHA256Hash();

	static FString HashStringHelper(const FString& Str);

	void FromString(const FString& Str);
	void FromArray(const TArray<uint8>& Arr);
	void FromArray64(const TArray64<uint8>& Arr);
	bool FromFile(const FString& File);

	FString GetHash();

private:
	FString Hash;
};
