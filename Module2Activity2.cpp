// Tahlia Callegari
// 2428774
//COP2220 Fall 2020

#include <iostream>
using namespace std;

//          VEG    VEGAN   GLUTEN
//Joe's :   N       N         N
//Main  :   Y       N         Y
//Corner:   Y       Y         Y
//Mama's:   Y       N         N
//Chef's:   Y       Y         Y    

int main()
{
    //Create Resturant flags
    bool joesFlag = true;
    bool mainFlag = true;
    bool cornerFlag = true;
    bool mamasFlag = true;
    bool chefsFlag = true;

    //Get user dietary input
    string isVegeterian, isVegan, isGlutenFree;
    
    cout << "Please answer the following questions: 'y' or 'n'" <<endl;
    cout << "Is anyone in your party a vegeterian? ";
    cin >> isVegeterian;
    cout << "Is anyone in your party a vegan? ";
    cin >> isVegan;
    cout << "Is anyone in your party gluten intolerant? ";
    cin >> isGlutenFree;

    //Check each input and turn off restuarant flags
    if (isVegeterian == "y") {
        joesFlag = false;
    }
    if (isVegan == "y") {
        joesFlag = false;
        mainFlag = false;
        mamasFlag = false;
    }
    if (isGlutenFree == "y") {
        joesFlag = false;
        mamasFlag = false;
    }

    //Output resturants flags if true

    cout << ".....................\n"
        <<"Here are your choices: " << endl;

    if (joesFlag) {
        cout << "Joe's Gourment Burgers\n";
    }
    if (mainFlag) {
        cout << "Main Street Pizza Company\n";
    }
    if (cornerFlag) {
        cout << "Corner Cafe\n";
    }
    if (mamasFlag) {
        cout << "Mama's Fine Italian\n";
    }
    if (chefsFlag) {
        cout << "The Chef's Kitchen";
    }
    cout << ".....................\n";
}

