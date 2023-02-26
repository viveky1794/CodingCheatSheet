// Leetcode-test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

using namespace std;

#define BC 1
#define BL 2
#define FC 3

int findCheckmode(const char* str) {
    int i = 0;
    int j = strlen(str)-1;

    if (isupper(str[i]) && isupper(str[j])) return BC;
    if (isupper(str[i]) && islower(str[j])) return FC;
    if (islower(str[i]) && islower(str[j])) return BL;
    return 0;
}

bool detectCapitalUse(const char* word) {
    int checkMode;
    for (int i = 0, j = strlen(word); i <= j; ++i, --j) {
        if (i == 0) {
            checkMode = findCheckmode(word);
        }
        else {
            switch (checkMode) {
            case BC: if (islower(word[i]) || islower(word[j]))
                return false;
                break;
            case FC:
            case BL: if (isupper(word[i]) || isupper(word[j]))
                return false;
                break;
            }//end-switch
        }//end-else
    }//end-for

    return true;
}

int main()
{
    cout << detectCapitalUse("USA") << endl;
    cout << detectCapitalUse("FlaG") << endl;
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
