/*******************************************************************************************************************************************************                                                                                                                    
					#  #  # ###### #       ####   ####  #    # ######    #####  ####        
					#  #  # #      #      #    # #    # ##  ## #           #   #    #         
					#  #  # #####  #      #      #    # # ## # #####       #   #    #        
					#  #  # #      #      #      #    # #    # #           #   #    #         
					#  #  # #      #      #    # #    # #    # #           #   #    #        
					 ## ##  ###### ######  ####   ####  #    # ######      #    ####          

							  #######                  ######           
							  #     # #      #####     #     # #  ####  
							  #     # #      #    #    #     # # #    # 
							  #     # #      #    #    ######  # #       
							  #     # #      #    #    #       # #  ###             
							  #     # #      #    #    #       # #    # 
							  ####### ###### #####     #       #  ####  

									#####
									#     #   ##   #    # ######
									#        #  #  ##  ## #
									#  #### #    # # ## # #####
									#     # ###### #    # #
									#     # #    # #    # #
									 #####  #    # #    # ######
                
                      `````````````````````````                                                     
                  ```````````.`...........```````````             .-.`                    `         
              `````````````````................````````````      `--::-.               `..`         
            `````````.```.......................`````````````````.--::::-`          `.----.         
         ````........`.............................``````.........-::/+/-.```     `..--:--.         
         .-........................................```...........--:/oo:--.````````.--:::-.         
        .:......................-................................-::+y/--..``````````-:::-`         
        --......................-................................--:::--..```````````.---`          
        --.....................-...................................---------.```````````            
        .:.....................-.--...............................------:++--.`..```+:              
         -...................--...----.............-....................-::-........-:              
         `-..................-----.-----..........--...................`....-------...              
          - `......---......---------------......---.......................----------.              
          .` `........-...``...---------------...---..........-............-------::-.              
          `. `..-------.`           ``````....------.........----..........----:o/:/+:`             
           `....------.                          ``....-.....---:-...........-:://///-              
          `....---.--`                              .........---      `````````...`                 
          `.....---.`                                `..--..----`                                   
           ..------                                   `.....-----`                                  
           `-..---.                                    ---.------.                                  
           `..---:`                                    ::-.-------.                                 
           ..--..:.                                   -//::-.----::`                                
          `-----.:-                                  `////: `.------.                               
          --:---:::                                  /+///-    .----::.                             
          --:---/+/.                                 ` +++/     `-::::::.                           
            /////+++.                                  `-::-     `-++:/++:`                      
            `.-::.```                 

*******************************************************************************************************************************************************/

///* This is the console excutable that makes use of the bullcow class that acts as the view in the MVC pattern and is responsible for all the user interaction for the game logic to see FBullGame Class */

#include <iostream>
#include <string>
#include "FBullGame.h"
//#pragma once

using FText = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();


FText GetValidGuess();

bool AskToPlayAgain();

FBullGame BCGame; //instantiate a new game

//the entry point32 of the game 
int main()
{
	
	bool bWantsToPlayAgain = false;
	do
		{
		PrintIntro();
		PlayGame();
		bWantsToPlayAgain = AskToPlayAgain();
		
		}while (bWantsToPlayAgain);
	return 0;
}
//introduce the game
void PrintIntro() {
	
	std::cout << "				#######                  ######               #####									  " << std::endl;
	std::cout << "				#     # #      #####     #     # #  ####     #     #   ##   #    # ######			  " << std::endl;
	std::cout << "				#     # #      #    #    #     # # #    #    #        #  #  ##  ## #				  " << std::endl;
	std::cout << "				#     # #      #    #    ######  # #         #  #### #    # # ## # #####		      " << std::endl;
	std::cout << "				#     # #      #    #    #       # #  ###    #     # ###### #    # #				  " << std::endl;
	std::cout << "				#     # #      #    #    #       # #    #    #     # #    # #    # #				  " << std::endl;
	std::cout << "				####### ###### #####     #       #  ####      #####  #    # #    # ######			  " << std::endl;
	std::cout << "																									  " << std::endl;
	std::cout << "																									  " << std::endl;
	std::cout << "                                                                                                    " << std::endl;
	std::cout << "                     `````````````````````````                                                      " << std::endl;
	std::cout << "                 ```````````.`...........```````````             .-.`                    `          " << std::endl;
	std::cout << "             `````````````````................````````````      `--::-.               `..`          " << std::endl;
	std::cout << "           `````````.```.......................`````````````````.--::::-`          `.----.          " << std::endl;
	std::cout << "        ````........`.............................``````.........-::/+/-.```     `..--:--.          " << std::endl;
	std::cout << "        .-........................................```...........--:/oo:--.````````.--:::-.          " << std::endl;
	std::cout << "       .:......................-................................-::+y/--..``````````-:::-`          " << std::endl;
	std::cout << "       --......................-................................--:::--..```````````.---`           " << std::endl;
	std::cout << "      --.....................-...................................---------.```````````              " << std::endl;
	std::cout << "       .:.....................-.--...............................------:++--.`..```+:               " << std::endl;
	std::cout << "        -...................--...----.............-....................-::-........-:               " << std::endl;
	std::cout << "        `-..................-----.-----..........--...................`....-------...               " << std::endl;
	std::cout << "         - `......---......---------------......---.......................----------.               " << std::endl;
	std::cout << "         .` `........-...``...---------------...---..........-............-------::-.               " << std::endl;
	std::cout << "         `. `..-------.`           ``````....------.........----..........----:o/:/+:`              " << std::endl;
	std::cout << "          `....---.--`                              .........---      `````````...`                 " << std::endl;
	std::cout << "          `.....---.`                                `..--..----`                                   " << std::endl;
	std::cout << "           ..------                                   `.....-----`                                  " << std::endl;
	std::cout << "           `-..---.                                    ---.------.                                  " << std::endl;
	std::cout << "           `..---:`                                    ::-.-------.                                 " << std::endl;
	std::cout << "           ..--..:.                                   -//::-.----::`                                " << std::endl;
	std::cout << "           ..--..:.                                   -//::-.----::`                                " << std::endl;
	std::cout << "          `-----.:-                                  `////: `.------.                               " << std::endl;
	std::cout << "          --:---:::                                  /+///-    .----::.                             " << std::endl;
	std::cout << "          --:---/+/.                                 ` +++/     `-::::::.                           " << std::endl;
	std::cout << "            /////+++.                                  `-::-     `-++:/++:`                         " << std::endl;
	std::cout << "            `.-::.```"																				<< std::endl;

	//Welcomes the guest and asks if you can guess an insogram
	std::cout << " Welcome to the Old Pig Game, a fun word game. " << std::endl;
	std::cout << " Can you guess the " << BCGame.GetHiddenWordLength() << " Letter insogram I'm thinking of? " << std::endl;
	return;
}

//Asks to guess the word 5 times in a for loop
void PlayGame() {
	BCGame.Reset();
	int32 MaxTries = BCGame.GetMaxTires();
				//TODO change FOR to WHILE loop once
				for (int32 var = 1; var <= MaxTries; var++)
				{
					FText Guess = GetValidGuess();// TODO make loop checking valid
					

					//submit valid guess to the game, and recive counts
					FBullCowCount BullCowCount =  BCGame.SubmitGuess(Guess);
					//print numbers of bulls and cows
					std::cout << "Bulls = " << BullCowCount.bulls;
					std::cout << ". Cows = " << BullCowCount.cows << std::endl;
					//std::cout << "Your guess was: " << Guess << std::endl;
					std::cout << std::endl;
				}
				//TODO summerise the game
}

//loop conintunly until the user gives a vaid guess.
FText GetValidGuess()  
{
	EGuessStatus Status = EGuessStatus::Invlaid_Status;
	do{ 
		int32 CurrentTry = BCGame.GetCurrentTry();
		
		std::cout << "Try " << CurrentTry << ". Enter your guess : ";
		FText Guess = "";
		std::getline(std::cin, Guess);

		//check status and give feedback
		Status = BCGame.CheckGuessValidity(Guess);
		switch (Status)
		{
		case EGuessStatus::To_Few_Of_Letters:
			std::cout << "Please enter a " << BCGame.GetHiddenWordLength() << "letter word. \n";
			break;
		case EGuessStatus::Not_Isogram:
			std::cout << "Please enter a word without repeating letters \n";
			break;
		case EGuessStatus::Lower_Case_Letters_Only:
			std::cout << "Please enter lowercase letters \n";
			break;
		default:
			return Guess;
		}
	} while (Status != EGuessStatus::Ok);//keep looping until we get no erros. 
}

bool AskToPlayAgain(){

	std::cout << "Would you like to play again? (Yes / No) ";
	FText Responce = "";
	getline(std::cin, Responce);	
	std::cout << std::endl;
	
	return (Responce[0] == 'y' || Responce[0] == 'Y');
}




/*
	//stats 1.0

	//variables
	int score;
	double distance, engineTemp;
	char playAgain;
	bool shieldsUp;
	short lives, aliensKilled;

	//modifiers
	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	lives = 3;
	aliensKilled = 10;
	engineTemp = 6572.89;

	//text output
	std::cout << "\nScore : " << score << std::endl;
	std::cout << "Distance : " << distance << std::endl;
	std::cout << "Play Again? : " << playAgain << std::endl;
	std::cout << "Lives : " << lives << std::endl;
	std::cout << "Aliens Killed : " << aliensKilled << std::endl;
	std::cout << "Engine Temp : " << engineTemp << std::endl;

	//asks how much fuel you need
	int fuel;
	std::cout << "\nHow much fuel?  ";
	std::cin >> fuel;
	std::cout << "Fuel : " << fuel << std::endl;

	//shows the bounus you are getting
	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\nbounus: " << bonus << endl;


	//stats 2.0

	//variables
	int score;

	score = 5000;
	std::cout << "\nScore : " << score << std::endl;
	score = score + 100;
	std::cout << "Score : " << score << std::endl;
	score += 100;
	std::cout << "Score : " << score  << std::endl;

	int lives = 3;
	++lives;
	std::cout << "Lives : " << lives << std::endl;

	lives = 3;
	lives++;
	std::cout << "Lives : " << lives << std::endl;

	lives = 3;
	int bonus = ++lives * 10;
	std::cout << "Lives, Bonus = " << lives << "," << bonus << std::endl;

	lives = 3;
	bonus = lives++ * 10;
	std::cout << "Lives, Bonus = " << lives << "," << bonus << std::endl;

	score = 4294967295;
	std::cout << "\nscore: " << score << std::endl;
	++score;
	std::cout << "score: " << score << std::endl;
	*/