#pragma once
#include <string>

using Fstring = std::string;
using int32 = int;

struct FBullCowCount
{
	int32 bulls = 0;
	int32 cows = 0;
};

enum class EGuessStatus {
	Invlaid_Status,
	Ok,
	Not_Isogram,
	No_Upper_Case_Letters,
	No_Numbers,
	Lower_Case_Letters_Only,
	To_Many_Letters,
	To_Few_Of_Letters


};



class FBullGame {
public:
	FBullGame(); //constructor

	int32 GetMaxTires() const;
	int32 GetCurrentTry() const;
	int32 GetHiddenWordLength() const;
	bool IsGameWon() const;
	EGuessStatus CheckGuessValidity(Fstring) const; //TODO Make a more rich return value.

	void Reset(); //TODO Make a more rich return value.

	//Counts bulls and cows and increasing the number of trys assuming valid guess
	FBullCowCount SubmitGuess(Fstring);

	
	
		

private:
	int32 MyCurrentTry;
	int32 MyMaxTries;
	Fstring MyHiddenWord;
};