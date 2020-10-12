// Tahlia Callegari
// 2428774
//COP2220 Fall 2020

#include <iostream>
#include <string>
using namespace std;

//Declare functions
int getRandomNums(int array[], int SIZE);
void displaySort(int count, int array[], int SIZE);
void bubbleSort(int array[], int SIZE);
void swap(int& a, int& b);
void selectionSort(int array[], int SIZE);


int main()
{
    //Declare variables & arrays
    const int SIZE = 100;
    int array1[SIZE], array2[SIZE];


    //Call on function to fill array with elements
    getRandomNums(array1, SIZE);

    //Copy first array elements to second
    for (int i = 0; i < SIZE; i++) {
        array2[i] = array1[i];
    }
    
    //Display array
    cout << "Generated two identical arrays with random numbers shown below." << endl;
    cout << "==============================================================" << endl;;
    for (int val : array1) {
        cout << val << " ";
    }

    //Call on bubbleSort function and display results
    cout << " " << endl;
    cout << "\nConducting a Bubble Sort on first array." << endl;
    cout << "=========================================" << endl;
    bubbleSort(array1, SIZE);

    //Call on selectionSort function and display results
    cout << " " << endl;
    cout << "\nConducting a Selection Sort on second array." << endl;
    cout << "===========================================" << endl;
    selectionSort(array2, SIZE);


    //Space
    cout << " " << endl;
    
    return 0;
}

//Function adds random num element to an array
int getRandomNums(int array[], int SIZE) {

    for (int i = 0; i < SIZE; i++) {
        array[i] = rand();
    }

    return array[SIZE];
}

//Function displays counter and sorted array
void displaySort(int count, int array[], int SIZE) {
    cout << "Sort is completed. It took " << count << " exchanges..." << endl;
    
    for (int i = 0; i < SIZE; i++) {
        cout << array[i] << " ";
    }
}

//Function sorts array via bubble sort method
void bubbleSort(int array[], int SIZE) {

    //Declare variables
    int maxElement, index, count = 0;

    //Loop filters through array and sorts by ascending order
    for (maxElement = SIZE - 1; maxElement > 0; maxElement--) {
        for (index = 0; index < maxElement; index++) {
            if (array[index] > array[index + 1]) {
                /// Calls swap function
                swap(array[index], array[index + 1]);
            }
        }
        count++; //Counter
    }
    //Call on display function
    displaySort(count, array, SIZE);
}

//Swap function
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

//Function sorts array via selection sort method
void selectionSort(int array[], int SIZE) {

    //Declare variables
    int minIndex, minValue, count = 0;

    //Loop filters through array and sorts by ascending order
    for (int start = 0; start < (SIZE - 1); start++) {
        minIndex = start;
        minValue = array[start];
            for (int index = start + 1; index < SIZE; index++) {
                if (array[index] < minValue) {
                    minValue = array[index];
                    minIndex = index;
                }
        }
            //Call on swap function
            swap(array[minIndex], array[start]);
            count++; //Couner
    }
    //Call on display function
    displaySort(count, array, SIZE);
}