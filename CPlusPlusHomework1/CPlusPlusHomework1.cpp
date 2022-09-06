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
    std::cout << "!\n" << "\n";
    

    //Q2:Strings: Code Word Locater. Store a codeword as a string variable. Create a longer string variable that contains the codeword. Search for the codeword in the string, 
    //and print out it's position in the string.
    //Declare and assign variables
    std::string CodeWord = "poggers";
    std::string Camouflage = "This meal is super good, I would almost call it poggers if not for the human eyeballs.";

    //Split the string into a substring and find the position of the code
    //word
    std::string Letters = Camouflage.substr(0, 1);

    std::size_t spacePos = Camouflage.find(CodeWord);

    //Output the position
    Letters += Camouflage.substr(spacePos + 1);
    std::cout<<"The position of the codeword in the text is: " << spacePos << "\n";


    //Q3:Input: Date of Birth. Ask the player for their Year, Month, and Day of birth. Store each in an appropriate variable, then print them out together.
    //Declare variables
    int BirthYear;
    int BirthMonth;
    int BirthDay;

    
    //Ask for year of birth
    std::cout << "Please enter the year you were born as a whole number."<< "\n";
    std::cin >> BirthYear;

    //Ask for month of birth
    std::cout << "Please enter the month you were born as a whole number." << "\n";
    std::cin >> BirthMonth;


    //Ask for day of birth
    std::cout << "Please enter the day you were born as a whole number." << "\n";
    std::cin >> BirthDay;

    //Print together
    std::cout << "Your date of birth is: " << BirthDay << "/" << BirthMonth << "/" << BirthYear << std::endl;




    //Q4:Selection: Swear Bleeper. Store a "bad" word (it could be anything) in a string variable. Ask the player to enter a single word. Compare if the word they entered is the 
    //same as the bad word, and if it is, print out the word "BLEEP". If it is NOT the same, print out the word the player entered.


    //Q5:Iteration: Bottles of Beer on the Wall. Read an input for a number of bottles of beer to have on the wall. Ask the user if they would like to drink a bottle. 
    //If they do, print the corresponding lyrics to “99 bottles of beer on the wall”, but with the input number of beers on the wall, which is then decreased by 1. 
    //Repeat until they stop drinking or run out of beer.


}
