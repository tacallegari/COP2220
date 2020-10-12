// Tahlia Callegari
// 2428774
// COP2220 Fall 2020

#include <iostream>
#include <cstdlib>
using namespace std;

//Declare functions
int linearSearch(int list[], int size, int value);
int binarySearch(int list[], int size, int value);
void displayResults(int count, int value, int position);
void sortArray(int array[], int size);
void swap(int& a, int& b);


int main()
{
	//Declare constants
	const int SIZE = 300, MAX_VALUE = 1000, MIN_VALUE = 1;
	
	//Declare variables
	int randomNums[SIZE], value = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

	//Adds random numbers to array 
	for (int i = 0; i < SIZE; i++) {
		randomNums[i] = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	}

	//Display message
	cout << "Displaying array with " << SIZE << " random numbers\n"
		<< "=======================================\n";

	//Display array
	for (int NUMS : randomNums) {
		cout << NUMS << " ";
	}
	
	//Display message for linear search
	cout << " " << endl; //Blank space
	cout << "We will now conduct a search for random generated value of " << value << endl;
	cout << "\nPerforming linear search\n"
		<< "..................." << endl;

	//Call on function to conduct a linear search
	linearSearch(randomNums, SIZE, value);

	//Sort array prior to binarySearch
	sortArray(randomNums, SIZE);

	//Display sorted array
	cout << "\nArray has been sorted for binary search. Displaying below.\n"
		<< "==========================================================" << endl;
	for (int NUMS : randomNums) {
		cout << NUMS << " ";
	}

	//Blank space
	cout << " " << endl;

	//Display message for binary search
	cout << "\nPerforming binary search\n"
		<< "..................." << endl;
	//Call on function to conduct binarySearch
	binarySearch(randomNums, SIZE, value);

	return 0;
}
//Function conducts linear search on array
int linearSearch(int list[], int size, int value) {
	
	//Declare variables
	int position = -1, i = 0, count = 0;
	bool found = false;
	
	//Loop filters through array until value is found
	while (i < size && !found) {
		if (list[i] == value) {
			found = true;
			position = i;
		}
		i++; 
		count++; //Counter
	}
	//Call on function to display results
	displayResults(count, value, position);

	return position;
}

//Function conducts binary search on array
int binarySearch(int list[], int size, int value) {
	//Declare variables
	int first = 0, last = size -1, position = -1, count = 0, middle;
	bool found = false;

	//While loop filters through array and exchanges position until value is found
	while (!found && first <= last) {
		middle = (first + last) / 2;
		if (list[middle] == value) {
			found = true;
			position = middle;
		}else if (list[middle] > value) {
			last = middle - 1;
		}
		else {
			first = middle + 1;
		}
		count++; //Counter
	}

	//Display results
	displayResults(count, value, position);

	return position;
}

//Function displays results of searches 
void displayResults(int count, int value, int position) {

	//Displays a message if value isn't found
	if (position == -1) {
		cout << "After " << count << " comparison(s). We were unable to find " << value << endl;
	}
	//Displays message if value is found
	else {
		cout << "After " << count << " comparison(s). We finally found " << value
			<< " at randomNums[" << position << "]" << endl;
	}
}

//Function sorts array by accesending order
void sortArray(int array[], int size) {
	//Declare variables
	int minIndex, minValue;

	//Conduct a selection sort 
	for (int start = 0; start < (size - 1); start++) {
		minIndex = start;
		minValue = array[start];
		for (int index = start + 1; index < size; index++) {
			if (array[index] < minValue) {
				minValue = array[index];
				minIndex = index;
			}
		}
		swap(array[minIndex], array[start]);
	}
}

//Swap function for selection sort
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

