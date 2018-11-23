#include "Example.h"
#include "Utility.h"

#include <iostream>

using namespace std;

void exampleCalcBase() {
    int userChoice;
    exampleHeader();
    cin >> userChoice;
    if (userChoice == 1) {
        montyHallProblem();
    }
}

void montyHallProblem() {
    int doorActual;
    int doorSelect;
    int numCorrect = 0;
    int numTrials;
    double percentCorrect;
    // Number of times to run the test
    cout << "Please input how many times would like to run the test: ";
    cin >> numTrials;

    // Run test with no switch over
    for (int i = 0; i < numTrials; i++) {
        doorActual = rand() % 3;
        doorSelect = rand() % 3;
        if (doorActual == doorSelect) {
            numCorrect++;
        }
    }
    // Calculate percentCorrect and output results
    percentCorrect = numCorrect * 1.0 / numTrials * 100; // Type Case Properly

    cout << endl << "Without any switching, you got " << numCorrect << " of " << numTrials << " correct. " << endl;
    cout << "That is " << percentCorrect << " percent. " << endl;

    numCorrect = 0;

    // Run Test with Switching
    for (int i = 0; i < numTrials; i++) {
        doorActual = rand() % 3;
        doorSelect = rand() % 3;

        // Count Number Correct
        // This works becasue, if you always switch after he opens the door, then your intial pick must be wrong for you to be right.
        if (doorActual != doorSelect) {
            numCorrect++;
        }
    }
    percentCorrect = numCorrect * 1.0 / numTrials * 100; // Type Case Properly

    cout << endl << "With switching, you got " << numCorrect << " of " << numTrials << " correct. " << endl;
    cout << "That is " << percentCorrect << " percent. " << endl;
    cout << endl << endl << "These trials were independant of each other (completelty different random sets). ";
}
