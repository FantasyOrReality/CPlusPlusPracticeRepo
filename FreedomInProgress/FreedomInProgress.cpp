// FreedomInProgress.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
using namespace std;


//Mechanics functions
//Colour list
int ColourTest()
{
	/*
	//0 for background Colour(Black)
	//1 for text Colour(Blue)
	system("Color 06");

	//Print any message
	std::cout << "Colour test, background is black and text is Yellow.";
	return 0;
	*/

	//All colours
	system("Color 01");
	std::cout << "Blue";
	std::cout << "\n";

	system("Color 02");
	std::cout << "Green";
	std::cout << "\n";

	system("Color 03");
	std::cout << "Aqua";
	std::cout << "\n";

	system("Color 04");
	std::cout << "Red";
	std::cout << "\n";

	system("Color 05");
	std::cout << "Purple";
	std::cout << "\n";

	system("Color 06");
	std::cout << "Yellow";
	std::cout << "\n";

	system("Color 07");
	std::cout << "White";
	std::cout << "\n";

	system("Color 08");
	std::cout << "Gray";
	std::cout << "\n";

	system("Color 09");
	std::cout << "Light Blue";
	std::cout << "\n";

	system("Color 70");
	std::cout << "Black";
	std::cout << "\n";

	system("Color 0A");
	std::cout << "Light Green";
	std::cout << "\n";

	system("Color 0B");
	std::cout << "Light Aqua";
	std::cout << "\n";

	system("Color 0C");
	std::cout << "Light Red";
	std::cout << "\n";

	system("Color 0D");
	std::cout << "Light Purple";
	std::cout << "\n";

	system("Color 0E");
	std::cout << "Light Yellow";
	std::cout << "\n";

	system("Color 0F");
	std::cout << "Bright White";

	return 0;


}



//Character creation
int CharacterCreate()
{
	//Declare variables
	char UserEyeColour[] = "White";
	char UserFavouriteColour[] = "Black";
	char LowerUserEyeColour = 'w';
	char LowerUserFavouriteColour = 'w';
	char TextColour = '7';
	char BackgroundColour = '0';

	//Get the character's eye colour (Text colour)
	//Get input from player
	std::cout << "Welcome, to begin the game, you must create a character. \n This will be done in two simple steps; Your eye colour and your favourite colour." << std:: endl;
	std::cout << "Out of these options, which is your eye colour?\n" << "Blue\nAqua\nGreen\nLight Blue\nLight Aqua\nLight Red\nLight Green\n";
	



	/*
	for (int i = 0; i < strlen(UserEyeColour); i++)
	{
		//Convert UserEyeColour[i] to lowercase
		LowerUserEyeColour = tolower(UserEyeColour[i]);
		std::cout << LowerUserEyeColour;
	}*/
	//Translate User input to correct character
	

	//Get the character's favourite colour (Background colour)

	return 0;
}
	


//Start the game
int GameIntro()
{
	//variables
	std::string SkipButton = "";
	bool Continue= true;
	//Introduce the world
	do
	{
		std::cout << "This is the first text chunk"; //First text chunk
		std::cout << "\n";
		std::cout << "If you want to move on, type and enter 'y'"; //press a button to continue text
		std::cout << "\n";
		std::cin >> SkipButton;

		if (SkipButton == "y")
		{
			Continue = true;
		}
		else
		{
			Continue = false;
		}

	} while (Continue == false);
	
	//Reset the skip button
	SkipButton = "";
	Continue = false;

	//Second text chunk
	do
	{
	std::cout << "This is the second text chunk"; 
	std::cout << "\n";
	std::cout << "If you want to move on, type and enter 'y'"; //press a button to continue text
	std::cout << "\n";
	std::cin >> SkipButton;

	if (SkipButton == "y")
	{
		Continue = true;
	}
	else
	{
		Continue = false;
	}
	} while (Continue == false);

	//Reset the skip button
	SkipButton = "";
	Continue = false;

	//Introduce the character background

	//Introduce the current situation

	//return value
	return 0;
}

int main()
{
	GameIntro();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
