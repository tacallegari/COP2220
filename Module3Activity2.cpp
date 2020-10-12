// Tahlia Callegari
//2428774
// COP2220 Fall 2020

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//Define variables
	ifstream rfile;
	int number, count, sum, average;

	//Accumlators
	count = 0;
	sum = 0;

	//Open file
	rfile.open("Random.txt"); // MUST -->> Change to absolute path of file

	//Read file & display content
	if (rfile) {
		while (rfile >> number) {
			cout << number << endl;
			count++; 
			sum += number; 
		}
	}
	else {
		cout << "Error. Can't open file.\n";
	}

	//Calculate average
	average = sum / count;

	//Display accumulators & average
	cout << "Total numbers in file: " << count << endl;
	cout << "Sum of numbers in file: " << sum << endl;
	cout << "Average of numbers in file: " << average << endl;

	//Close file
	rfile.close();

	return 0;
}


