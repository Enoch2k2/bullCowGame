#pragma once

#include <iostream>
#include <string>

using namespace std;
// pre-define functions
void PrintIntro();
string GetGuessAndPrintBack();

// program starting point
int main()
{
	PrintIntro();

	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 1; i <= NUMBER_OF_TURNS; i++)
	{
		GetGuessAndPrintBack();
	}
	
	// repeat the guess back to the player
	
	return 0;
}

// introduce the game
void PrintIntro()
{
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to Cows and Bulls\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter in the isogram that I am thinking of?\n";
	cout << endl;
	return;
}

// get the player's guess
string GetGuessAndPrintBack()
{
	// get the guess from the player
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	cout << "Your guess was " << Guess << endl;

	cout << endl;
	return Guess;
}