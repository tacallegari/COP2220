// Tahlia Callegari
// 2428774
//COP2220 Fall 2020

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//Declare function
void displayMonth(int month);
void displayHighestRainMonth(int highestRainMonth);

int main()
{
	//Constants
	const int NUM_MONTHS = 3, NUM_DAYS = 30;
	
	//Declare variables
	ifstream inputFile;
	string filename;
	char weatherData[NUM_MONTHS][NUM_DAYS]; // 3x30 Array will hold weather data
	int totalRain = 0, totalSun = 0, totalCloud = 0, highestRainMonth = 0;

	//Get filename from user
	cout << "Enter exact location of file: ";
	cin >> filename;

	//Open File
	inputFile.open(filename);

	//Loop checks to see if file is location is valid
	if (!inputFile) {
		cout << "Error. Can't open file.";
		return 0;
	}
	else {
		//Read data and store in array
		for (int month = 0; month < NUM_MONTHS; month++) {
			for (int day = 0; day < NUM_DAYS; day++) {
				inputFile >> weatherData[month][day];
			}
		}
	}

	//Intro display message
	cout << "Reading file\n"
	<< ".............";
	cout << "\nThree Month Weather report" << endl;
	cout << "=========================\n";


	//Read data and caculate sums for each month & totals for all three months
	for (int month = 0; month < NUM_MONTHS; month++) {
		int numOfRainDays = 0, numOfSunnyDays = 0, numOfCloudyDays = 0;

		//Switches match char data with correct variable
		for (int day = 0; day < NUM_DAYS; day++) {
			switch (weatherData[month][day]) {
			case 'S': numOfSunnyDays++; 
				break;
			case 'R': numOfRainDays++; 
				break;
			case 'C': numOfCloudyDays++; 
				break;
			}
		}

		//Display each month's stats
		displayMonth(month);

		//Displays the different sums of weathered days for each month
		cout << "Rainy Days:" << numOfRainDays << endl;
		cout << "Cloudy Days: " << numOfCloudyDays << endl;
		cout << "Sunny Days: " << numOfSunnyDays << endl;


		//The total of all weather days in 3 month period
		totalRain += numOfRainDays;
		totalCloud += numOfCloudyDays;
		totalSun += numOfSunnyDays;

		//Declare & find rainiest month
		if (highestRainMonth > numOfRainDays) {
			highestRainMonth = month;
		}

	}

	//Display stats of 3-month period
	cout << "\nStats for 3-month period:\n"
		<< "=========================" << endl;
	cout << "Rainy days: " << totalRain << endl;
	cout << "Cloudy Days: " << totalCloud << endl;
	cout << "Sunny Days: " << totalSun << endl;

	//Call on function to display rainiest month
	displayHighestRainMonth(highestRainMonth);
	

	return 0;
}
//Function displays each month
void displayMonth(int month) {
	if (month == 0) {
		cout << "\nJune stats: " << endl;
		cout << "============" << endl;
	}
	else if (month == 1) {
		cout << "\nJuly stats: " << endl;
		cout << "============" << endl;
	}
	else if (month == 2) {
		cout << "\nAugust stats: " << endl;
		cout << "============" << endl;
	}

}

//Function displays which month is the rainiest
void displayHighestRainMonth(int highestRainMonth) {

	cout << "The highest rain month is.... ";

	if (highestRainMonth == 0) {
		cout << "June\n";
	}
	else if (highestRainMonth == 1) {
		cout << "July\n";
	}
	else if (highestRainMonth == 2) {
		cout << "August\n";
	}
}
