#include "FBullGame.h"

using int32 = int;


FBullGame::FBullGame()
{
	Reset();
}
int32 FBullGame::GetMaxTires() const { return MyMaxTries; }
int32 FBullGame::GetCurrentTry() const { return MyCurrentTry; }
int32 FBullGame::GetHiddenWordLength() const { return MyHiddenWord.length();
}
 
void FBullGame::Reset()
{
	constexpr int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;

	const Fstring HIDDEN_WORD = "eatpussy";
	MyHiddenWord = HIDDEN_WORD;

	MyCurrentTry = 1;
	
	return;
}
 
bool FBullGame::IsGameWon() const
{
	return false;
}


//receives a vaild guess incriments turn and returns valid guest.
FBullCowCount FBullGame::SubmitGuess(Fstring Guess)
{

	//incriment the turn number
	MyCurrentTry++;
	// setup a return variable
	FBullCowCount BullCowCount;


	//loop through all letters in the guess
	
	int32 HiddenWordLength = MyHiddenWord.length();
	
		for (int32 i = 0; i < HiddenWordLength; i++){
			//compaire all letters against the hidden word
			for (int32 j = 0; j < HiddenWordLength; j++) {
					//If they match then
				if (Guess[j] == MyHiddenWord[i] ) {
					// if they're in the same place
					if (i == j) {
						//incriment bulls
						BullCowCount.bulls++;
					}
					else {
						//must be a cow
						BullCowCount.cows++;

					}				
				}
			}
		}
	return BullCowCount;
}


 
EGuessStatus FBullGame::CheckGuessValidity(Fstring) const
{
	if (false)//if the guess is Not_Isogram
	{
		return EGuessStatus::Not_Isogram;
	}
	else if (false)//if the guess is No_Upper_Case_Letters
	{
		return EGuessStatus::No_Upper_Case_Letters;
	}
	else if (false)//if the guess is No_Numbers
	{
		return EGuessStatus::No_Numbers;
	}
	else if (false)//if the guess is Lower_Case_Letters_Only
	{
		return EGuessStatus::Lower_Case_Letters_Only;
	}
	else if (false)//if the guess is To_Many_Letters
	{
		return EGuessStatus::To_Many_Letters;
	}
	else if (false)//if the guess is To_Few_Of_Letters 
	{
		return EGuessStatus::To_Few_Of_Letters;
	}
	else //otherwise
	{
		return EGuessStatus::Ok;
	}
}