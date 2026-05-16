// Fill out your copyright notice in the Description page of Project Settings.

#include "RecipeBase.h"

RecipeBase::RecipeBase()
{
}

RecipeBase::~RecipeBase()
{
}

void RecipeBase::Set(int32 id, FString name, FString description, TArray<int32> ingredientQuantityById, EnmEffects recipeEffect, float recipeModifier, UTexture2D *texture)
{
    this->Id = id;
    this->Name = name;
    this->Description = description;
    this->IngredientQuantityById = ingredientQuantityById;
    this->RecipeEffect = recipeEffect;
    this->RecipeModifier = recipeModifier;
    this->Texture = texture;
}