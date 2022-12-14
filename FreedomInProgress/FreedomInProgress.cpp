// FreedomInProgress.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Include default 
#include <iostream>
#include <string>
#include<vector>

#include "Thing.h"
	#include "Player.h"
	#include "Monster.h"

	#include "Area.h"
#include "Item.h"
#include "Weapon.h"
#include "Armour.h"
#include "Potion.h"
#include "Feature.h"


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
	//Format: Name, Description, Maximum health, Current health, Base attack damage, Base defense, Base speed, Current held weapon, Current worn helmet, Current worn body armour, Current occupied area
	Player examplePlayer1("TestSubjectA", "The first subject tested to show the capabilities of this world.", 100.0f, 100.0f, 1.0f, 1.0f, 1.0f, nullptr, nullptr, nullptr, nullptr);
	Player examplePlayer2("TestSubjectB", "The second subject tested to show the capabilities of this world.", 100.0f, 100.0f, 1.0f, 1.0f, 1.0f, nullptr, nullptr, nullptr, nullptr);
	Player examplePlayer3("TestSubjectC", "The third subject tested to show the capabilities of this world.", 100.0f, 100.0f, 1.0f, 1.0f, 1.0f, nullptr, nullptr, nullptr, nullptr);
	std::cout << std::endl;

	//Format: Name, Description, Current contained player, Number of connected areas
	Area exampleArea1("Tutorial1", "The first tutorial area.", nullptr, 2);
	Area exampleArea2("Tutorial2", "The second tutorial area.", nullptr, 1); 
	Area exampleArea3("Tutorial3", "The third tutorial area.", nullptr, 1);
	std::cout << std::endl;

	//Format: Name, Description, Maximum health, Current health, Base attack damage, Base defense, Base speed, Type of monster
	Monster exampleMonster1("Howard", "Your first regular fight, he's quite calm about the situation.", 1000.0f, 1000.0f, 10.0f, 10.0f, 10.0f, "Light Demon");
	Monster exampleMonster2("Jennifer", "Your second regular fight, she's quite anxious about the situation.", 1000.0f, 1000.0f, 15.0f, 20.0f, 5.0f, "Heavy Demon");
	Monster exampleMonster3("Cyneck", "Your first Boss fight, they're very excited about the situation.", 20000.0f, 20000.0f, 50.0f, 100.0f, 1.0f, "Boss Demon");
	std::cout << std::endl;

	//Format: Name, Weapon type, Description, Percentage attack bonus, Percentage defense bonus, Percentage speed bonus
	Weapon exampleWeapon1("stick", "base melee", "Just a regular stick, made of hard wood", 1.01f, 1.00f, 1.00f, nullptr, nullptr);
	Weapon exampleWeapon2("rod", "base melee", "An old metal rod, scratches and burns cover it.", 1.02f, 1.01f, 0.99f, nullptr, nullptr);
	Weapon exampleWeapon3("sword","special melee","the classic rapier, given to you by your guide.", 0.05f, 0.05f, 0.95f, nullptr, nullptr);
	std::cout << std::endl;

	//Format: Name, Armour type, Description, Percentage attack bonus, Percentage defense bonus, Percentage speed bonus
	Armour exampleArmour1("hat", "helmet", "An old, ragged hat. It smells kind bad...", 1.0f, 1.0f, 1.0f);
	Armour exampleArmour2("cloth", "bodypiece", "An old, ragged cloth. It smells weird...", 1.0f, 1.0f, 1.0f);
	Armour exampleArmour3("cap", "helmet", "An old, ragged cap. It reminds you of your childhood.", 1.01f, 1.0f, 1.01f);
	std::cout << std::endl;

	//Format: Name, Description
	Feature exampleFeature1("Combat", "Combat is the basic fighting mode, it is done to clear areas of monsters.");
	Feature exampleFeature2("Lock opening", "Lock opening is a feature used to pass locked doors.");
	Feature exampleFeature3("Item grabbing", "Item grabbing is a feature used when moving physical objects from the world into the inventory as an item.");
	std::cout << std::endl;

	//Format: Name, Description, Percentage attack bonus, Percentage defense bonus, Percentage speed bonus, Health added
	Potion HealingPotion("", "", "", 1.00f, 1.00f, 1.00f, 100.00f);
	Potion DamagePotion("", "", "", 1.00f, 1.00f, 1.00f, -50.00f);
	Potion SpeedPotion("", "", "", 1.00f, 1.00f, 1.50f, 0.00f);
	std::cout << std::endl;


	//Pointer for the areas
	Area* AreaPtr1 = &exampleArea1;
	Area* AreaPtr2 = &exampleArea2;
	Area* AreaPtr3 = &exampleArea3;

	//Connect areas
	AreaPtr1->AddConnectedArea(AreaPtr2);
	AreaPtr1->AddConnectedArea(AreaPtr3);
	AreaPtr2->AddConnectedArea(AreaPtr1);
	AreaPtr3->AddConnectedArea(AreaPtr1);

	//PopulateAreas with monsters
	AreaPtr1->PopulateAreaWithMonsters(&exampleMonster1);
	AreaPtr2->PopulateAreaWithMonsters(&exampleMonster2);
	AreaPtr3->PopulateAreaWithMonsters(&exampleMonster3);


	//Activate functions
	//Check the stats of the first monster
	exampleMonster1.Look();

	//Check the stats of the second monster
	exampleMonster2.Look();

	//Check the stats of the third monster
	exampleMonster3.Look();


	//Damage the first monster
	exampleMonster1.Harmed();

	//Heal the first monster
	exampleMonster1.Heal();


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
