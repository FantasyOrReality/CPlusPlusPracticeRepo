// C++PracticeProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

int main()
{
    int FunnyNumber = 69;
    float FunnyNumberButNot = 6.9f;
    char AlmostAFunnyNumber = 'S';
    double LargeFunnyNumberButNot = 6.9;
    unsigned UnsignedFunnyNumber = 69u;
    bool FunnyNumbertf = true;

    std::string FunnyNumberWord = "Sixty Nine";


    //Prints text and variable values to the console
    std::cout << "Roses are red\n"
        << "Violets are blue\n"
        << "Whatever you do,\n"
        << "Don't look behind you\n"
        << FunnyNumber <<"\n" //Integer
        <<FunnyNumberButNot <<"\n" //Float
        <<AlmostAFunnyNumber << "\n" // Character
        <<FunnyNumberWord <<"\n"; //String



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
