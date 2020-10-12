// Tahlia Callegari
//2428774
//COP2220 Fall 2020

#include <iostream>
#include <string>
using namespace std;

//Declare functions
double getRainfall();
double findLowest(string arrayX[], double arrayY[12]);
double findHighest(string arrayX[], double arrayY[12]);
void calcTotal(double array[12]);
void display(string arrayX[12], double arrayY[12]);

int main()
{
    //Constant
    const int SIZE = 12;//12 months

    //Declare arrays
    double rainfall[SIZE], lowest, highest;
    string months[SIZE] = { "January", "Feburary", "March", "April", "May", "June", "July",
        "August", "September", "October", "November", "December" };

    //Call on function & add to array
    for (int count = 0; count < SIZE; count++) {
        cout << months[count] << ": ";
        rainfall[count] = getRainfall();
    }

    //Call on function to display
    display(months, rainfall);

    //Display message
    cout << "\nRainfall stastics" << endl;
    cout << "===============" << endl;

    //Call on function to calculate sum & avg
    calcTotal(rainfall);

    //Find lowest and highest months of rainfall
    lowest = findLowest(months,rainfall);
    highest = findHighest(months, rainfall);
    
    return 0;
}

//Function ask's user for rainfall data
double getRainfall() {
    double rainFall; //Declare variable

    //Display input question
    cout << "Please enter rainfall in inches for this month? ";
    cin >> rainFall;

    //Validate rainfall input
    if (rainFall < 0) {
        cout << "Invalid entry. Please enter again: ";
        cin >> rainFall;
    }

    //Return data
    return rainFall;
}

//Function finds the lowest month in rainfall
double findLowest(string arrayX[12], double arrayY[12]) {
    //Define variables
    double lowestRainfall = arrayY[0];
    string lowestMonth = arrayX[0];

    //For loop filters through array
    for (int i = 0; i < 12; i++) {
        if (arrayY[i] < lowestRainfall) {
            lowestRainfall = arrayY[i];
            lowestMonth = arrayX[i];
        }
    }
    //Displays results
    cout << "The lowest month is " << lowestMonth << " with " 
        << lowestRainfall << " inches." << endl;

    //Returns data
    return lowestRainfall;
}

//Find the highest month of rainfall
double findHighest(string arrayX[12], double arrayY[12]) {
    //Define variables
    double highestRainfall = arrayY[0];
    string highestMonth = arrayX[0];

    //For loop filters through array
    for (int i = 0; i < 12; i++) {
        if (arrayY[i] > highestRainfall) {
            highestRainfall = arrayY[i];
            highestMonth = arrayX[i];
        }
    }
    //Display results
    cout << "The highest month is " << highestMonth << " with "
        << highestRainfall << " inches." << endl;

    //Return data
    return highestRainfall;
}
//Function caculates sum and average rainfall in a year
void calcTotal(double array[12]) {
    //Declare variables
    double sumTotal, average;
    sumTotal = 0;

    //Calculate sum
    for (int i = 0; i < 12; i++) {
        sumTotal += array[i];
    }

    //Calculate average
    average = sumTotal / 12;

    //Display results
    cout << "The annual total of rainfall is " << sumTotal << " inches." << endl;
    cout << "The average rainfall is " << average << " inches." << endl;
}

//Function display's both arrays
void display(string arrayX[12], double arrayY[12]) {

    //Display message
    cout << "\nRainfall for the year" <<endl;
    cout << "=====================" << endl;

    //Loop print's out each element in both array's 
    for (int i = 0; i < 12; i++) {
        cout << arrayX[i] << ": " << arrayY[i] << " inches." <<endl;
    }
}