// FreedomInProgress.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <dos.h>

#include "Player.h"
#include "Area.h"
#include "Monster.h"
#include "Weapon.h"
#include "Armour.h"
#include "Feature.h"

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
		bool Continue = true;
	

	//Introduce the world
		
		do
		{
			std::cout << "Welcome to the world of Fantasy Reality, a name given to us by our god.\nIt is a world cast over by a crimson hue of sky laying over our red medows and rumbled dwelling.\nThe glorific blood rain pours from the ascended smoke clouds and infects the world with an intoxicating iron stench.\nThe empty stretches of land is void of the melting demon population, as if they have returned to the nightmares of our beloved deity so the fleshy crimson stone can continue to sit in defening silence.\n"; //First text chunk
			std::cout << "\n";
			std::cout << "If you want to move on, type and enter 'y'"; //press a button to continue text
			std::cout << "\n";
			std::cin >> SkipButton;

			if (SkipButton == "y")
			{
				Continue = true;
				system("Cls");
			}
			else
			{
				Continue = false;
				system("Cls");
			}

		} while (Continue == false);

		//Reset the skip button
		SkipButton = "";
		Continue = false;

		//Second text chunk
		do
		{
			std::cout << "Now, who is our god? ";
			std::cout << "\n";
			std::cout << "If you want to move on, type and enter 'y'"; //press a button to continue text
			std::cout << "\n";
			std::cin >> SkipButton;

			if (SkipButton == "y")
			{
				Continue = true;
				system("Cls");
			}
			else
			{
				Continue = false;
				system("Cls");
			}
		} while (Continue == false);

		//Reset the skip button
		SkipButton = "";
		Continue = false;


	
	//Introduce the character background
		do
		{
			std::cout << "Introducing the character"; //First text chunk
			std::cout << "\n";
			std::cout << "If you want to move on, type and enter 'y'"; //press a button to continue text
			std::cout << "\n";
			std::cin >> SkipButton;

			if (SkipButton == "y")
			{
				Continue = true;
				system("Cls");
			}
			else
			{
				Continue = false;
				system("Cls");
			}

		} while (Continue == false);

		//Reset the skip button
		SkipButton = "";
		Continue = false;

	//Introduce the current situation
		
		do
		{
			std::cout << "Introducing the current situation"; //First text chunk
			std::cout << "\n";
			std::cout << "If you want to move on, type and enter 'y'"; //press a button to continue text
			std::cout << "\n";
			std::cin >> SkipButton;

			if (SkipButton == "y")
			{
				Continue = true;
				system("Cls");
			}
			else
			{
				Continue = false;
				system("Cls");
			}

		} while (Continue == false);

		//Reset the skip button
		SkipButton = "";
		Continue = false;

	//return value
		return 0;
}

int main()
{
	//Introduce the world, character and situation
	//GameIntro();

	//Example instances
	Player examplePlayer1;
	Player examplePlayer2;
	Player examplePlayer3;

	Area exampleArea1;
	Area exampleArea2;
	Area exampleArea3;

	Monster exampleMonster1;
	Monster exampleMonster2;
	Monster exampleMonster3;

	Weapon exampleWeapon1;
	Weapon exampleWeapon2;
	Weapon exampleWeapon3;

	Armour exampleArmour1;
	Armour exampleArmour2;
	Armour exampleArmour3;

	Feature exampleFeature1;
	Feature exampleFeature2;
	Feature exampleFeature3;


	//Example assignments
	//Player
	examplePlayer1.name = "TestSubjectA";
	examplePlayer1.description = "The first subject tested to show the capabilities of this world.";
	examplePlayer1.maxHealth = 100;
	examplePlayer1.baseAttack = 1;
	examplePlayer1.baseDefense = 1;
	examplePlayer1.baseSpeed = 1;
	examplePlayer1.currentWeapon = "stick";
	examplePlayer1.currentHelmet = "hat";
	examplePlayer1.currentBodyPiece = "cloth";
	examplePlayer1.inventory.push_back("stick");
	examplePlayer1.inventory.push_back("hat");
	examplePlayer1.inventory.push_back("cloth");
	examplePlayer1.currentHealth = 100;

	examplePlayer2.name = "TestSubjectB";
	examplePlayer2.description = "The second subject tested to show the capabilities of this world.";
	examplePlayer2.maxHealth = 200;
	examplePlayer2.baseAttack = 2;
	examplePlayer2.baseDefense = 2;
	examplePlayer2.baseSpeed = 2;
	examplePlayer2.currentWeapon = "rod";
	examplePlayer2.currentHelmet = "cap";
	examplePlayer2.currentBodyPiece = "scarf";
	examplePlayer2.inventory.push_back("rod");
	examplePlayer2.inventory.push_back("cap");
	examplePlayer2.inventory.push_back("scarf");
	examplePlayer2.currentHealth = 200;

	examplePlayer3.name = "TestSubjectC";
	examplePlayer3.description = "The third subject tested to show the capabilities of this world.";
	examplePlayer3.maxHealth = 300;
	examplePlayer3.baseAttack = 3;
	examplePlayer3.baseDefense = 3;
	examplePlayer3.baseSpeed = 3;
	examplePlayer3.currentWeapon = "sword";
	examplePlayer3.currentHelmet = "bucket";
	examplePlayer3.currentBodyPiece = "bodysuit";
	examplePlayer3.inventory.push_back("sword");
	examplePlayer3.inventory.push_back("bucket");
	examplePlayer3.inventory.push_back("bodysuit");
	examplePlayer3.currentHealth = 300;

	//Area
	exampleArea1.name = "Tutorial1";
	exampleArea1.description = "The first tutorial area";
	exampleArea1.startingContents.push_back("table");
	exampleArea1.exits.push_back("north exit");
	exampleArea1.currentContents.push_back("table");

	exampleArea2.name = "Tutorial2";
	exampleArea2.description = "The second tutorial area";
	exampleArea2.startingContents.push_back("chair");
	exampleArea2.exits.push_back("south exit");
	exampleArea2.currentContents.push_back("chair");

	exampleArea3.name = "Tutorial3";
	exampleArea3.description = "The third tutorial area";
	exampleArea3.startingContents.push_back("lamp");
	exampleArea3.exits.push_back("east exit");
	exampleArea3.currentContents.push_back("lamp");

	//Monster


	//Weapon


	//Armour


	//Feature


	//Make your character
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
