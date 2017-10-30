#pragma once
#include <iostream>
#include <string>
#include "FBullCowGame.h"


// pre-define functions
void PrintIntro();
void PlayGame();
void EndGame();
std::string GetGuess();
bool AskToPlayAgain();

int main()
{
	PrintIntro();
	do
	{
		PlayGame();
	} while (AskToPlayAgain());
	EndGame();
	return 0;
}

// introduce the game
void PrintIntro()
{
	constexpr int WORD_LENGTH = 9;
	std::cout << "Welcome to Cows and Bulls\n";
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter in the isogram that I am thinking of?\n";
	std::cout << std::endl;
	return;
}

void PlayGame()
{
	FBullCowGame BCGame;

	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 1; i <= NUMBER_OF_TURNS; i++)
	{
		std::string Guess = GetGuess();

		std::cout << "Your guess was " << Guess << std::endl;
		std::cout << std::endl;
	}
}

void EndGame()
{
	std::cout << "Goodbye!\n\n";
}

std::string GetGuess()
{
	std::cout << "Enter your guess: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again? (y/n): ";
	std::string input;
	std::getline(std::cin, input);
	std::cout << std::endl;
	return (input[0] == 'y' || input[0] == 'Y');
}
