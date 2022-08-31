// CPlusPlusHomework1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>


int main()
{
    
    //Q1: Variables: Rectangle Info.  Find the perimeter and area of a rectangle, given the length and width. Store each value as a variable, and print the results to the console.
    //Variables
    int Length = 2;
    int Width = 1;
    int Perimeter = 0;

    //Calculations
    Perimeter = (2 * Length) + (2 * Width);

    //Output
    std::cout << "The length of the rectangle is "; 
    std::cout << Length;
    std::cout <<"!\n";
    std::cout << "The width of the rectangle is "; 
    std::cout<< Width;
    std::cout << "!\n";
    std::cout << "The perimeter of the rectangle is ";
    std::cout << Perimeter;
    std::cout << "!\n";


    //Q2:Strings: Code Word Locater. Store a codeword as a string variable. Create a longer string variable that contains the codeword. Search for the codeword in the string, 
    //and print out it's position in the string.


    //Q3:Input: Date of Birth. Ask the player for their Year, Month, and Day of birth. Store each in an appropriate variable, then print them out together.


    //Q4:Selection: Swear Bleeper. Store a "bad" word (it could be anything) in a string variable. Ask the player to enter a single word. Compare if the word they entered is the 
    //same as the bad word, and if it is, print out the word "BLEEP". If it is NOT the same, print out the word the player entered.


    //Q5:Iteration: Bottles of Beer on the Wall. Read an input for a number of bottles of beer to have on the wall. Ask the user if they would like to drink a bottle. 
    //If they do, print the corresponding lyrics to “99 bottles of beer on the wall”, but with the input number of beers on the wall, which is then decreased by 1. 
    //Repeat until they stop drinking or run out of beer.


}
