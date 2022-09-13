// CPlusPlusHomework2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h> //to use rand()
#include <time.h> //used for time
#include <vector> 

int RectangleAreaFunction(int RectangleHeight, int RectangleWidth)
{
	int RectangleArea = RectangleHeight* RectangleWidth;

	return RectangleArea;
}

int RandomNumberFunction(int fakePlayerScore, int MinScore, int MaxScore, int range)
{
	//Generate random number
	fakePlayerScore = std::rand() % range+MinScore;
	std::cout << "The player's score is: " << fakePlayerScore << "\n";
	return 0;
}

int main()
{
//1 - Functions: Rectangle Area - Mark II. Write a function to calculate the area of a rectangle, based on parameters passed in for width and height. It should return the value back to the calling code.
//Call this function in main, and print the result.
	
//Declare and assign variables
	int RectangleWidth = 2;
	int RectangleHeight = 3;

//Print value
	std::cout << "The rectangle's area is " << RectangleAreaFunction(RectangleHeight, RectangleWidth) << "\n";




//2 - Randomisation : Random Score. Write a function to create a random score for a fake player. The function should accept a minimum and maximum score, and return the resulting random score. 
// The calling code should then call this function five times, printing the result each time. Every time this program is run, these scores should be different.

//Declare and assign variables
	int fakePlayerScore = 0; 
	int MinScore = 10;
	int MaxScore = 100;
	int range = MaxScore - MinScore;
	std::srand(time(NULL));


//Call function five times
	RandomNumberFunction(fakePlayerScore, MinScore, MaxScore, range);
	RandomNumberFunction(fakePlayerScore, MinScore, MaxScore, range);
	RandomNumberFunction(fakePlayerScore, MinScore, MaxScore, range);
	RandomNumberFunction(fakePlayerScore, MinScore, MaxScore, range);
	RandomNumberFunction(fakePlayerScore, MinScore, MaxScore, range);


//3 - Vectors : Who’s In Your Party. Write a program to read in the names for a player’s adventuring party, which can have any number of party members. Each party member’s name should be stored separately in an array or vector.
//Print them out when the player is done entering the names.
	//Declare vector

	//Declare and assign variables
	int PartySize = 0;
	std::string PartyMemberName = "";

	//Get party size
	std::cout << "How many members are there in your party?" << std::endl;
	std::cin >> PartySize;

	std::vector <std::string> PartyMembers;

	//Get each member
	for (int i = 0; i < PartySize; ++i)
	{
		std::cout << "Who is party member number " << i + 1 << "?" << std::endl;
		std::cin >> PartyMemberName;
		PartyMembers.push_back(PartyMemberName);
		//PartyMembers[i] = PartyMemberName;
		PartyMemberName = "";
	}

	for (int j = 0; j < PartyMembers.size(); ++j)
	{
		std::string MemberName = PartyMembers[j];
		std::cout << "Party member number " << j + 1 << " is " << PartyMembers[j] << std::endl;



	}

}


