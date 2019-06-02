// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Welcome to Bulls & Cows!"));
    PrintLine(TEXT("Try guess the 4 letter hidden word..."));
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    FString HiddenWord = TEXT("Cake");
    if (Input.Len() == HiddenWord.Len())
    {
        PrintLine(TEXT("Correct amount of letters!"));
    }
    else
    {
        PrintLine(TEXT("You need to enter a 4 letter word!"));
    }
    
}