// Tahlia Callegari
// 2428774
// COP2220 Fall 2020

#include <iostream>
#include <string>

using namespace std;

//Declare functions
string getCourseName();
int getNumOfTests();
int getTestScore();
void sortTests(int array[], int size);
void swap(int& a, int& b);
void calculateAverage(int array[], int size, string course);


int main()
{
	//Declare variables
	string course = getCourseName();
	int numOfTests = getNumOfTests();

	//Declare pointer
	int* tests;
	tests = new int[numOfTests];

	//Display user input message
	cout << "Enter " << numOfTests << " test scores (%) for " << course << "." << endl;

	//Add test scores to array
	for (int i = 0; i < numOfTests; i++) {
		tests[i] = getTestScore();
	}

	//Call on function to sort array
	sortTests(tests, numOfTests);

	//Call on function to calculate average
	calculateAverage(tests, numOfTests, course);

	cout << " " << endl;

	return 0;
}


//Function ask's user for course name
string getCourseName() {
	//Declare variable
	string courseName;

	//Display user input message
	cout << "Please enter name of course: ";
	cin >> courseName;

	//Return string
	return courseName;

}
// Function ask's user for # of tests
int getNumOfTests() {
	//Declare variable
	int tests;

	//Display user input message
	cout << "\nPlease enter number of tests: ";
	cin >> tests;

	//Return int
	return tests;

}
//Function ask's user for test scores
int getTestScore() {
	//Declare variable
	int score;

	cout << "Test score: ";
	cin >> score;

	//Input validation
	if (score < 0) {
		cout << "Invalid input...Please try again: ";
		cin >> score;
	}

	//Return int
	return score;
}
//Function sorts array via sort selection method
void sortTests(int array[], int size) {
	//Declare variables
	int minIndex, minValue;

	//Nested for loops sort though array
	for (int start = 0; start < (size - 1); start++) {
		minIndex = start;
		minValue = array[start];
		for (int index = start + 1; index < size; index++) {
			if (array[index] < minValue) {
				minValue = array[index];
				minIndex = index;
			}
		}
		//Call on swap function
		swap(array[minIndex], array[start]);
	}
	//Display sorted array & dropped score
	cout << "\nDropping lowest test score " << array[0] << "%" << endl;
	cout << "\nTests sorted in ascending order\n";
	for (int i = 1; i < size; i++) {
		cout << array[i] << " ";
	}


}

//Swap function
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
//Function calculates average and displays it
void calculateAverage(int array[], int size, string course) {
	//Declare varibles
	int total = 0;

	//For loop total's scores
	for (int i = 1; i < size; i++) {
		total += array[i];
	}

	//Calucate average
	int average = total / (size -1);

	//Display results
	cout << "\nThe average test score for " << course << " is : " << average << "%";
}