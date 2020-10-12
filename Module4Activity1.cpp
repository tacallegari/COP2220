//Tahlia Callegari
// 2428774
// COP2220 Fall 2020

#include <iostream>
#include <string>
using namespace std;

//This function asks user for input
int getNumAccidents() {

    //Define local variables
    int numOfAccidents;
    const string inputQuestion = "How many accidents happen in this region? ";

    //Ask user for input
    cout << inputQuestion;
    cin >> numOfAccidents;

    //Validate input
    if (numOfAccidents == 0 || numOfAccidents < 0) {
        cout << "Invalid entry. Please try again." << endl;
        cout << inputQuestion;
        cin >> numOfAccidents;
    }

    //Return input 
    return numOfAccidents;
}

//This function findest lowest accident prone region
void findLowests(int n, int s, int e, int w, int c) {

    //Define local variables 
    int lowestAccidents;
    string lowestRegion;

    //Assign temp values
    lowestAccidents = n;
    lowestRegion = "North";

    //Series of if loops filters through all regions for lowest #
    if (s < lowestAccidents) {
        lowestAccidents = s;
        lowestRegion = "South";
    }
    if (lowestAccidents > e) {
        lowestAccidents = e;
        lowestRegion = "East";
    }
    if (lowestAccidents > w) {
        lowestAccidents = w;
        lowestRegion = "West";
    }
    if (lowestAccidents > c) {
        lowestAccidents = c;
        lowestRegion = "Central";
    }
                
 
    
    //Display results
    cout << "\nThe region with the lowest number of accidents is " << lowestRegion 
        << " with " << lowestAccidents << " incidents."<< endl;

}

int main()
{
    //Define local variables
    int north, south, east, west, central;
    const string inputMessage= " is number of accidents that happened in ";

    //North region 
    cout << "North" << endl;
    north = getNumAccidents();
    cout << north << inputMessage << "North" << endl;

    //South region
    cout << "South" << endl;
    south = getNumAccidents();//Call on function
    cout << south << inputMessage << "South" << endl;
   
    //East region
    cout << "East" << endl;
    east = getNumAccidents();//Call on function
    cout << east << inputMessage << "East" << endl;
    
    //West region
    cout << "West" << endl;
    west = getNumAccidents(); //Call on function
    cout << west << inputMessage << "West" << endl;

    //Central region
    cout << "Central" << endl;
    central = getNumAccidents(); //Call on function
    cout << central << inputMessage << "Central" << endl;

    //Call on function 
    findLowests(north, south, east, west, central);

    return 0;
    
}



