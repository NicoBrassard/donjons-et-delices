// Fill out your copyright notice in the Description page of Project Settings.

#include "CookingInterfaceV2.h"

void UCookingInterfaceV2::FillRecipeArray()
{
    Recipes.Empty();
    RecipeToDisplay.Empty();
    RecipeToDisplayReverse.Empty();
    /*
    To fill array, put the number of the item at the index as described below. if none, must insert 0.
    IngById: AVODADO, BANANA, COCONUT, LEMON, MANDARIN, APPLE
    */

    // Pizza //
    RecipeBase currentRecipe = RecipeBase();
    enum RecipeBase::EnmEffects RecipeEffect = RecipeBase::Health;
    TArray<int32> IngById = {1, 1, 1, 1, 1, 1, 0, 0, 0};
    TSoftObjectPtr<UTexture2D> pizzaAsset = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TEXT("Texture2D'/Game/Pictures/pizza.pizza'")));
    UTexture2D *texturePizza = pizzaAsset.LoadSynchronous();
    currentRecipe.Set(0, TEXT("Pizza"), TEXT("+50 Health"), IngById, RecipeEffect, 50, texturePizza);
    Recipes.Add(currentRecipe);
    RecipeToDisplay.Add(0, texturePizza);
    RecipeToDisplayReverse.Add(texturePizza, 0);

    // Lasagna //
    currentRecipe = RecipeBase();
    RecipeEffect = RecipeBase::MaxHealth;
    IngById = {2, 0, 1, 0, 1, 0, 1, 0, 1};
    TSoftObjectPtr<UTexture2D> lasagnaAsset = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TEXT("Texture2D'/Game/Pictures/lasagna.lasagna'")));
    UTexture2D *textureLasagna = lasagnaAsset.LoadSynchronous();
    currentRecipe.Set(1, TEXT("Lasagna"), TEXT("+20 Maximum Health"), IngById, RecipeEffect, 20, textureLasagna);
    Recipes.Add(currentRecipe);
    RecipeToDisplay.Add(1, textureLasagna);
    RecipeToDisplayReverse.Add(textureLasagna, 1);

    // Hamburger //
    currentRecipe = RecipeBase();
    RecipeEffect = RecipeBase::AttackDamage;
    IngById = {0, 1, 2, 1, 0, 0, 0, 2, 0};
    TSoftObjectPtr<UTexture2D> hamburgerAsset = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TEXT("Texture2D'/Game/Pictures/hamburger.hamburger'")));
    UTexture2D *textureHamburger = hamburgerAsset.LoadSynchronous();
    currentRecipe.Set(2, TEXT("Hamburger"), TEXT("+10 Attack Damage"), IngById, RecipeEffect, 10, textureHamburger);
    Recipes.Add(currentRecipe);
    RecipeToDisplay.Add(2, textureHamburger);
    RecipeToDisplayReverse.Add(textureHamburger, 2);

    // Submarine //
    currentRecipe = RecipeBase();
    RecipeEffect = RecipeBase::UltimateDamage;
    IngById = {0, 1, 0, 0, 0, 3, 0, 1, 1};
    TSoftObjectPtr<UTexture2D> submarineAsset = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TEXT("Texture2D'/Game/Pictures/submarine.submarine'")));
    UTexture2D *textureSubmarine = submarineAsset.LoadSynchronous();
    currentRecipe.Set(3, TEXT("Submarine"), TEXT("+5 Ultimate Damage"), IngById, RecipeEffect, 5, textureSubmarine);
    Recipes.Add(currentRecipe);
    RecipeToDisplay.Add(3, textureSubmarine);
    RecipeToDisplayReverse.Add(textureSubmarine, 3);

    // Hotdog //
    currentRecipe = RecipeBase();
    RecipeEffect = RecipeBase::UltimateChargePerHit;
    IngById = {0, 2, 0, 2, 1, 0, 2, 0, 0};
    TSoftObjectPtr<UTexture2D> hotdogAsset = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TEXT("Texture2D'/Game/Pictures/hotdog.hotdog'")));
    UTexture2D *textureHotdog = hotdogAsset.LoadSynchronous();
    currentRecipe.Set(4, TEXT("Hotdog"), TEXT("+5 Ultimate Charge per Hit"), IngById, RecipeEffect, 5, textureHotdog);
    Recipes.Add(currentRecipe);
    RecipeToDisplay.Add(4, textureHotdog);
    RecipeToDisplayReverse.Add(textureHotdog, 4);

    // Pasta //
    currentRecipe = RecipeBase();
    RecipeEffect = RecipeBase::CritChance;
    IngById = {3, 0, 0, 1, 0, 2, 1, 1, 0};
    TSoftObjectPtr<UTexture2D> pastaAsset = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TEXT("Texture2D'/Game/Pictures/pasta.pasta'")));
    UTexture2D *texturePasta = pastaAsset.LoadSynchronous();
    currentRecipe.Set(5, TEXT("Pasta"), TEXT("+10 Critical Strike Chance"), IngById, RecipeEffect, 10, texturePasta);
    Recipes.Add(currentRecipe);
    RecipeToDisplay.Add(5, texturePasta);
    RecipeToDisplayReverse.Add(texturePasta, 5);

    // Poutine //
    currentRecipe = RecipeBase();
    RecipeEffect = RecipeBase::Armor;
    IngById = {0, 1, 4, 0, 0, 0, 0, 0, 2};
    TSoftObjectPtr<UTexture2D> poutineAsset = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TEXT("Texture2D'/Game/Pictures/poutine.poutine'")));
    UTexture2D *texturePoutine = poutineAsset.LoadSynchronous();
    currentRecipe.Set(6, TEXT("Poutine"), TEXT("+5 Armor"), IngById, RecipeEffect, 5, texturePoutine);
    Recipes.Add(currentRecipe);
    RecipeToDisplay.Add(6, texturePoutine);
    RecipeToDisplayReverse.Add(texturePoutine, 6);

    // Brownie //
    currentRecipe = RecipeBase();
    RecipeEffect = RecipeBase::Speed;
    IngById = {1, 0, 0, 2, 2, 0, 0, 1, 1};
    TSoftObjectPtr<UTexture2D> brownieAsset = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TEXT("Texture2D'/Game/Pictures/brownie.brownie'")));
    UTexture2D *textureBrownie = brownieAsset.LoadSynchronous();
    currentRecipe.Set(7, TEXT("Brownie"), TEXT("+50 Movement Speed"), IngById, RecipeEffect, 50, textureBrownie);
    Recipes.Add(currentRecipe);
    RecipeToDisplay.Add(7, textureBrownie);
    RecipeToDisplayReverse.Add(textureBrownie, 7);

    // Icecream //
    currentRecipe = RecipeBase();
    RecipeEffect = RecipeBase::DashCooldown;
    IngById = {0, 0, 0, 3, 0, 2, 1, 1, 1};
    TSoftObjectPtr<UTexture2D> icecreamAsset = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TEXT("Texture2D'/Game/Pictures/icecream.icecream'")));
    UTexture2D *textureIcecream = icecreamAsset.LoadSynchronous();
    currentRecipe.Set(8, TEXT("Icecream"), TEXT("-0.1s Dash Cooldown"), IngById, RecipeEffect, -0.1, textureIcecream);
    Recipes.Add(currentRecipe);
    RecipeToDisplay.Add(8, textureIcecream);
    RecipeToDisplayReverse.Add(textureIcecream, 8);


    FillIngredientMap();

    // int32 arrayLon = Recipes.Num();
    // GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::FromInt(arrayLon));

    // for (size_t i = 0; i < Recipes.Num(); i++)
    // {
    //     GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, Recipes[i].Name);
    // }
}
FString UCookingInterfaceV2::GetRecipeName(int32 id)
{
    RecipeBase currentRecipe = UCookingInterfaceV2::FindRecipe(id);
    if (currentRecipe.Id == -1)
    {
        return TEXT("NULL");
    }
    return currentRecipe.Name;
}
FString UCookingInterfaceV2::GetRecipeDescription(int32 id)
{
    RecipeBase currentRecipe = UCookingInterfaceV2::FindRecipe(id);
    if (currentRecipe.Id == -1)
    {
        return TEXT("NULL");
    }
    return currentRecipe.Description;
}
TArray<int32> UCookingInterfaceV2::GetRecipeIngredients(int32 id)
{
    RecipeBase currentRecipe = UCookingInterfaceV2::FindRecipe(id);
    if (currentRecipe.Id == -1)
    {
        TArray<int32> nullArray = {-1};
        return nullArray;
    }
    return currentRecipe.IngredientQuantityById;
}
int32 UCookingInterfaceV2::GetRecipeEffect(int32 id)
{
    RecipeBase currentRecipe = UCookingInterfaceV2::FindRecipe(id);
    if (currentRecipe.Id == -1)
    {
        return -1;
    }
    return currentRecipe.RecipeEffect;
}
float UCookingInterfaceV2::GetRecipeModifier(int32 id)
{
    RecipeBase currentRecipe = UCookingInterfaceV2::FindRecipe(id);
    if (currentRecipe.Id == -1)
    {
        return -1;
    }
    return currentRecipe.RecipeModifier;
}
RecipeBase UCookingInterfaceV2::FindRecipe(int32 id)
{
    RecipeBase nullrecipe = RecipeBase();
    nullrecipe.Id = -1;

    if (!Recipes.IsValidIndex(id))
    {
        return nullrecipe;
    }

    for (size_t i = 0; i < Recipes.Num(); i++)
    {
        if (Recipes[i].Id == id)
        {
            return Recipes[i];
        }
    }
    return nullrecipe;
}
void UCookingInterfaceV2::FillIngredientMap()
{
    // IngById: AVODADO, BANANA, COCONUT, LEMON, MANDARIN, APPLE
    TSoftObjectPtr<UTexture2D> avocadoAsset = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TEXT("Texture2D'/Game/Pictures/avocado.avocado'")));
    UTexture2D *textureAvocado = avocadoAsset.LoadSynchronous();
    IngredientToDisplay.Add(0, textureAvocado);

    TSoftObjectPtr<UTexture2D> bananaAsset = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TEXT("Texture2D'/Game/Pictures/banana.banana'")));
    UTexture2D *textureBanana = bananaAsset.LoadSynchronous();
    IngredientToDisplay.Add(1, textureBanana);

    TSoftObjectPtr<UTexture2D> coconutAsset = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TEXT("Texture2D'/Game/Pictures/coconut.coconut'")));
    UTexture2D *textureCoconut = coconutAsset.LoadSynchronous();
    IngredientToDisplay.Add(2, textureCoconut);

    TSoftObjectPtr<UTexture2D> lemonAsset = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TEXT("Texture2D'/Game/Pictures/lemon.lemon'")));
    UTexture2D *textureLemon = lemonAsset.LoadSynchronous();
    IngredientToDisplay.Add(3, textureLemon);

    TSoftObjectPtr<UTexture2D> mandarinAsset = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TEXT("Texture2D'/Game/Pictures/mandarin.mandarin'")));
    UTexture2D *textureMandarin = mandarinAsset.LoadSynchronous();
    IngredientToDisplay.Add(4, textureMandarin);

    TSoftObjectPtr<UTexture2D> appleAsset = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TEXT("Texture2D'/Game/Pictures/apple.apple'")));
    UTexture2D *textureApple = appleAsset.LoadSynchronous();
    IngredientToDisplay.Add(5, textureApple);

    TSoftObjectPtr<UTexture2D> watermelonAsset = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TEXT("Texture2D'/Game/Pictures/watermelon.watermelon'")));
    UTexture2D *textureWatermelon = watermelonAsset.LoadSynchronous();
    IngredientToDisplay.Add(6, textureWatermelon);
    
    TSoftObjectPtr<UTexture2D> brocoliAsset = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TEXT("Texture2D'/Game/Pictures/brocoli.brocoli'")));
    UTexture2D *textureBrocoli = brocoliAsset.LoadSynchronous();
    IngredientToDisplay.Add(7, textureBrocoli);

    TSoftObjectPtr<UTexture2D> pineappleAsset = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TEXT("Texture2D'/Game/Pictures/pineapple.pineapple'")));
    UTexture2D *texturePineapple = pineappleAsset.LoadSynchronous();
    IngredientToDisplay.Add(8, texturePineapple);
}