// Rauli_Math_practice_program.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cstdlib>
using namespace std;

void generateRandomNumber() {
    // This program will create some sequence of
   // random numbers on every program run
    int N = 100;
    int val = 10;
    for (int i = 0; i < val; i++)
        cout << rand() % N << " | ";

    cout << " = " << endl;
    for (int i = 0; i < val * 5; ++i)
        cout << "-";

    cout << endl;
}


int main()
{
    cout << "Adding numbers : " << endl;
    for(int i=0; i < 10; ++i)
        generateRandomNumber();
	return 0;
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