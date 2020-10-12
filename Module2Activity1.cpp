//Tahlia Callegari
//2428774
//COP2220 Fall 2020

#include <iostream>
using namespace std;

int main()
{
    //Coin constants
    double penny, nickle, dime, quarter, dollar;

    penny = 0.01;
    nickle = 0.05;
    dime = 0.10;
    quarter = 0.25;
    dollar = 1;

    //Coin variables
    int numOfPennies, numOfNickles, numOfDimes, numOfQuarters;

    //Display Welcome message 
    cout << "Welcome to the coin game.\n"
        << "Goal of the game is to guess how many pennies, nickles, dimes and quarters will equal a dollar.\n";

    //Get number of each coin
    cout << "Enter number of each coin:" << endl;
    cout << "Pennies: ";
    cin >> numOfPennies;
    cout << "Nickle(s): ";
    cin >> numOfNickles;
    cout << "Dime(s): ";
    cin >> numOfDimes;
    cout << "Quarter(s): ";
    cin >> numOfQuarters;

    //Calculate and display coin total 
    double total = (numOfPennies * penny) + (numOfNickles * nickle) + (numOfDimes * dime) + (numOfQuarters * quarter);

    if (total > dollar) {
        cout << "\nSorry that's incorrect. You guessed too much.\n"
            << "Total is $" << total << endl;
    }
    else if (total < dollar) {
        cout << "\nSorry that's incorrect. You guessed too low.\n"
            << "Total is $" << total << endl;
    }
    else {
        cout << "\nRight on the money!\n"
            << "Total is $" << total << endl;
    }
    return 0;
}

