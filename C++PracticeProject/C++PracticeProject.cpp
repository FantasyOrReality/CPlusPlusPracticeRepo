// C++PracticeProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

void BasicFunction()
{
    std::cout << "Basic function ran.\n";

}

//This EarlyDeclare function exists 
//This is called a Forward Declaration
void EarlyDeclare();

void ParameterFunction(int parameterInt)
{
    ++parameterInt;
    std::cout << "ParameterFunction ran - parameterInt = " << parameterInt << ".\n";

}

int ReturnFunction()
{
    return 42;
}

int main()
{
    //First set of examples
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

    //substr splits the string based on an initial position
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
    breakText += originalLongText.substr(20, std::string::np); 




  
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
    


    //Selection
    int decision = 0;
        if (decision == 0)
        {
            std::cout << "decision was 0!\n";
        }
        else if (decision == 1)
        {
            std::cout << "decision was 1!\n";

        }
        else
        {
            std::cout << "decision was not 0 or 1!\n";
        }


        int errorCode = 2;

        switch (errorCode)
        {
        case 0:
        {
            std::cout << "error was 0\n";
            break;
        }

        case 1 :
        {
            std::cout << "error was 1\n";

            break;
        }

        case 2:
        {
            std::cout << "error was 2\n";

            break;
        }
        default:
        {
            std::cout << "error was unrecognised\n";
            break;
        }
        }


    //Advanced if statement: Ternary
    //Written in-line with other code, such as an assignment statement.
    //It results in one or two values being based on the condition

    int TernResult = (decision ? 1 : 2);
        



    std::cout << "You come across a forked path in the middle of your journey, a centre field of lush floral boundaries and regenerative energy spiralling around the new, almost immortal wooden sign." << "\n"<< "\n";
    std::cout << "(1) To the north resides FrostSpine, a frozen castle towering above the hills of rolling snow." << "\n" << "It looks to be quite far." << "\n" << "\n";
    std::cout << "(2) To the south shows a wavey, warm mirage similar to that of a bubbled town." << "\n" << "Curiously, you almost see lively streetsand bustling people running in circles behind the field." << "\n" << "\n";
    std::cout << "(3) To the east is a broken mirror of air, blue light slithering from the gaps and hissing an alluring tune."<< "\n" <<"It almost seems like the work of an interdimensional needle, why not thread it ? " << "\n" << "\n";
    std::cout << "(4) To the weast is the empty path that you came from, is it really worth going back?" << "\n" << "\n";
    std::cout << "(Choose a direction by entering the number next to the similar prompt.)" << "\n" << "\n";





    int direction = 0;

    std::cin >> direction;
    std::cout << "\n";

    switch (direction)
    {
    case 1:
    {
        std::cout << "Trudging through the thick, pale sheet laid infront of you, you begin to get cold, your hair spinning ice scythes over your face and slowing your pace." << "\n" << "After just a few minutes, you topple to the floor. Out. Cold." << "\n";

        break;
    }

    case 2:
    {
        std::cout << "Kicking your way over to the mirage, you are soon enveloped in warmth, a silent glub of entrance presenting you with the hidden town of Illusia!" << "\n" <<"Shall we have a look around? " << "\n";

        break;
    }

    case 3:
    {
        std::cout << "Each step you take is followed by an echo, almost as if you were stepping on the same spot, over and over, infinitely." << "\n" << "You reach your hand closer... closer... Cl - ERROR" << "\n";

        break;
    }

    case 4:
    {
        std::cout << "You turn around, deciding that trekking farther was an empty promsise, are you right?" << "\n" << "Who knows, all that's certain is; You're safe." << "\n";

        break;
    }
    default:
    {
        std::cout << "To defy the rules set out for you, you sit in place, not moving while surrounded by a spire of spacetime." << "\n" << "Time passes almost like a speed up, your body wearing downand meeting it's end in the dirt below." << "\n" << "You have joined this plate of vegetation and a wonderful tree may grow here." << "\n";

        break;
    }
    }

    //While loops are the same in C++ and C#
    bool whileB = true;

    //To enter this loop, this condition must be true
    while (whileB == true)
    {
        //Do the body of the loop
        whileB = false;
        //At the end, we check the condition, if it is still true, loop again.
    }
    

    //gooooooogle - 
    //store a variable for the number of pages of search results. 
    
    int pages = 2;
    std::cout << "How many pages are there?\n";
    std::cin >> pages;

    //Create a string of the word "Google", 
    std::string o = "o";


    //but where there are a number of o equal to the number of pages of search results. 
    std::cout << "G";

    while (pages > 0)
    {
        std::cout << o;
        pages = pages - 1;

    }

    std::cout << "gle";

    //Print the resulting string
    */ 
//Second set of examples
/*
    // Function examples
    BasicFunction();

    EarlyDeclare();

    int TestInt = 4;
    //Like saying parameterInt = TestInt
    ParameterFunction(TestInt);
    std::cout << "Testint = " << TestInt << ".\n";

    //Catch the value
    int ReturnValue = ReturnFunction();
    std::cout << "ReturnValue = " << ReturnValue << ".\n";
    */

    //Arrays
    //Static arrays
    int intArray[] = { 0, 1, 2 };
    const /*constant*/ int ArraySize = 3;
    int intArray2[ArraySize];

}

//Implementation for EarlyDeclare that was declared at the top
//Name must match exactly
void EarlyDeclare()
{
    std::cout << "Early Declare function run!\n";

}




