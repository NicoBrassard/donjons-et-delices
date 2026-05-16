// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 *
 */
class DONJONETDELICES_API RecipeBase
{
public:
	RecipeBase();
	~RecipeBase();

	enum EnmEffects
	{
		Health = 0,
		MaxHealth = 1,
		AttackDamage = 2,
		UltimateDamage = 3,
		UltimateChargePerHit = 4,
		CritChance = 5,
		Armor = 6,
		Speed = 7,
		DashCooldown = 8
	};

	int32 Id;
	FString Name;
	FString Description;
	TArray<int32> IngredientQuantityById;
	enum EnmEffects RecipeEffect;
	float RecipeModifier;
	UTexture2D *Texture;

	void Set(int32 id, FString name, FString description, TArray<int32> ingredientQuantityById, EnmEffects recipeEffect, float recipeModifier, UTexture2D *texture);
};
