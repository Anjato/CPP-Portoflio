// StdDeviationTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;


float findStandardDeviation(float* array, int count);

int main() {
    int count, i;
    float inputArray[500];

    cout << "Enter number of values (always 2)\n";
    cin >> count;

    cout << "Enter min and max values\n";
    for (i = 0; i < count; i++) {
        cin >> inputArray[i];
    }

    cout << "Standard Deviation = " << findStandardDeviation(inputArray, count);

    return 0;
}
// Function to find standard deviation 
float findStandardDeviation(float* array, int count) {
    float sum = 0.0, sDeviation = 0.0, mean;
    int i;

    for (i = 0; i < count; i++) {
        sum += array[i];
    }
    // Calculating mean 
    mean = sum / count;

    for (i = 0; i < count; ++i) {
        sDeviation += pow(array[i] - mean, 2);
    }

    return sqrt(sDeviation / count);
}