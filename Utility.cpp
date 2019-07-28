#include "Utility.h"

#include <iostream>

using namespace std;

void calcHeader() {
    cout << endl << "This program is incredibly sensitive to input." << endl << endl
        << "\t First, you MUST make sure the same event is spelled the same EVERYWHERE, I will not spellcheck!" << endl
        << "\t Second, to indicate a conditional probabiltiy, use the character | (this character may not be used anywhere else)" << endl;
}

void exampleHeader() {
    cout << endl << "This requires absolutly no user interaction beyond your choice of which example you would like to see." << endl;
    cout << "\t 1: Monty Hall Problem " << endl;
}
