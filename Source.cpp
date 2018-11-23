/*
 * Name: Evan Colony
 * Date: 10/31/2018
 * Description: The purpose of this is to calculate various probabilties given other specefic values
 */

// Including header files
#include "Utility.h"
#include "Example.h"
#include "Calculator.h"

// including libraries
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int userChoice;
    char junk;
    cout << "Please press 1 to use the probabiltiy calculator, press 2 to see examples of statisitc theories and idenetities. ";
    cin >> userChoice;
    while (cin.fail() || (userChoice != 1 && userChoice != 2)) {
        cout << endl << "You input bad data! enter a 1 or a 2";
        if (cin.fail()) {
            cin.clear();
            string s;
            getline(cin, s);
        }
        cin >> userChoice;
    }
    if (userChoice == 1) {
        calculatorBase();
    } else {
        exampleCalcBase();
    }

    cin >> junk;
    return 0;
}