// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RecipeBase.h"

#include "CookingInterfaceV2.generated.h"

/**
 *
 */

UCLASS()
class DONJONETDELICES_API UCookingInterfaceV2 : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void FillRecipeArray();

	UFUNCTION(BlueprintCallable)
	FString GetRecipeName(int32 id);

	UFUNCTION(BlueprintCallable)
	FString GetRecipeDescription(int32 id);

	UFUNCTION(BlueprintCallable)
	TArray<int32> GetRecipeIngredients(int32 id);

	UFUNCTION(BlueprintCallable)
	int32 GetRecipeEffect(int32 id);

	UFUNCTION(BlueprintCallable)
	float GetRecipeModifier(int32 id);

	RecipeBase FindRecipe(int32 id);

	void FillIngredientMap();

	TArray<RecipeBase> Recipes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, UTexture2D *> RecipeToDisplay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UTexture2D *, int32> RecipeToDisplayReverse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, UTexture2D *> IngredientToDisplay;
};