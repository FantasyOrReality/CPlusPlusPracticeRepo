// CPlusPlusHomework2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int RectangleAreaFunction(int RectangleHeight, int RectangleWidth)
{
	int RectangleArea = RectangleHeight* RectangleWidth;

	return RectangleArea;
}

int RandomNumberFunction()
{
	//Generate random number
	std::srand(time(NULL));

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
	int MinScore = 0;
	int MaxScore = 0;

//Call function



//3 - Vectors : Who’s In Your Party. Write a program to read in the names for a player’s adventuring party, which can have any number of party members.Each party member’s name should be stored separately in an array or vector.
//Print them out when the player is done entering the names.



}


