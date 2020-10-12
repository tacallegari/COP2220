// Tahlia Callegari 
// 2428774
// COP2220 Fall 2020

#include <iostream>

using namespace std;

int main()
{
    //Define variables
    int numInput, sentinel, numLarge, numSmall;
    sentinel= -99;

    //Ask user for input
    cout << "Welcome to the integer loop. Enter -99 if you'd like to exit" << endl;
    cout << "Please enter any integer to start the series: ";
    cin >> numInput;

    //Assign variables
    numLarge = numInput;
    numSmall = numInput;

    //Nested loop that continues to ask user for input
    while (numInput != -99){
        cout << "Please enter another integer: ";
        cin >> numInput;

        //If loops find smallest and largest number in series 
        if (numInput < numSmall) {
            numSmall = numInput;
        }
        if (numInput > numLarge) {
            numLarge = numInput;
        }
    }


    //Exit loop that displays largest & smallest number in series
    if (numInput == sentinel) {
        cout << "End of series." << endl;
        cout << "Largest number: " << numLarge << endl;
        cout << "Smallest number: " << numSmall << endl;
        }


        return 0;
    }


    



