// C++PracticeProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>


int main()
{
    /*
    int TestInt = 69;
    float TestFloat = 6.9f;
    char TestChar = 'S';
    double TestDouble = 6.9;
    unsigned TestUnsigned = 69u;
    bool TestBool = true;

    char FirstMethodString[5]; "String";

    std::string WordOne = "Sixty";
    std::string WordTwo = "Nine";
    
    std::string TestString = WordOne + " " + WordTwo;

    char firstLetter = FirstMethodString[0];

    //substr splits the string based n an initial position
    std::string letters = TestString.substr(0, 1);

    
    std::size_t spacePos = TestString.find(" ");

    //you can find the position in the string and store it in a variable f type std::size_t similar to int
    letters += TestString.substr(spacePos + 1, 1);

    //example of output
    std::cout << letters << std::endl;

    //we can use that position to find the next substring
    TestString = "Big fucking gun";

    //Prints text and variable values to the console
    std::cout << "Roses are red\n"
        << "Violets are blue\n"
        << "Whatever you do,\n"
        << "Don't look behind you\n"
        <<TestInt <<"\n" //Integer
        <<TestFloat <<"\n" //Float
        <<TestChar << "\n" // Character
        <<TestString <<"\n"; //String

    std::cout << "\n";

    /*Practice problem : Truncate text after 20 characters

    std::string originalLongText = "Did you know, that in terms of pokemon-human breeding, vaporeon is the most-";
    std::string truncatedText = originalLongText.substr(0, 20);

    std::cout << "Original text = " << originalLongText << std::endl;
    std::cout << "Truncated text = " << truncatedText << std::endl;

    std::string breakText = truncatedText + "\n";
    breakText += originalLongText.substr(20, std::string::np); */




  /*
    //Input
    std::cout << "Your address is known by the FBI.\n";
    std::string entryString = "";

    //std::cin >> is used for input
    //input is stored in the variable to the right of the string
    std::cin >> entryString;
    std::cout << "You typed " << entryString << "!\n";



    //we can also input to things that aren't strings
    int entryInt=0;
    std::cout<< "Please enter a whole number. \n";
    std::cin >> entryInt;
    std::cout << "You typed " << entryInt << "!\n";

    //NOTE: If they enter something other than an int, the input will not
    //"consume" the entry. This means it will be used again the next time
    //that cin is used - thus probably breaking your program. We should use 
    //data validation

    //We can use floats as well
    float entryFloat = 0.0f;
    std::cout <<"Please enter a whole number. \n";
    std::cin >> entryFloat;
    std::cout << "You typed " << entryFloat << "!\n";

    //By default cin only gets text up to the first space
    //You can get a whole line of text (including spaces)
    std::string lineOfText;
    std::cout << "You are on a watchlist.\n";
    std::getline(std::cin, lineOfText);
    std::cout << "You typed " << lineOfText << "!\n";
    */


    //Selection
    bool decision = true
        if (decision == true)
        {
            std::cout << "decision was true!\n";
        }
        else
        {
            std::cout << "decision was false!\n";
        }

    //Advanced if statement: Ternary
    //Written in-line with other code, such as an assignment statement.
    //It results in one or two values being based on the condition

    int TernResult = (decision ? 1 : 2);

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
