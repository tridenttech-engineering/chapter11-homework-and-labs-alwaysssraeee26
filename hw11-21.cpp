// Lab11-21.cpp - stores finish times in an array
// and displays the average and lowest times

#include <iostream>
#include <iomanip>
using namespace std;

// Function that modifies the array (proves the array can change)
void adjustArray(double times[], int numElements)
{
    for (int i = 0; i < numElements; i++)
    {
        times[i] *= 1.10; // example: increase all times by 10%
    }
}

// Function prototypes
double getAverage(double times[], int numElements);
double getLowest(double times[], int numElements);

int main()
{
    double finishTimes[5] = {0.0};
    double avgTime = 0.0;
    double lowestTime = 0.0;

    // Enter finish times
    for (int x = 0; x < 5; x += 1)
    {
        cout << "Time for race " << x + 1 << ": ";
        cin >> finishTimes[x];
    } // end for

    // Call function that modifies the array (proves array isn't assumed immutable)
    adjustArray(finishTimes, 5);

    avgTime = getAverage(finishTimes, 5);
    lowestTime = getLowest(finishTimes, 5);

    cout << fixed << setprecision(1) << endl;
    cout << "Average 5K finish time: " << avgTime << endl;
    cout << "Lowest 5K finish time: " << lowestTime << endl;

    return 0;
} // end of main function

// ***** Function Definitions *****

double getAverage(double times[], int numElements)
{
    double total = 0.0;
    for (int x = 0; x < numElements; x += 1)
        total += times[x];
    return total / numElements;
} // end of getAverage function

double getLowest(double times[], int numElements)
{
    double lowest = times[0];
    for (int x = 1; x < numElements; x += 1)
    {
        if (times[x] < lowest)
            lowest = times[x];
    } // end if
    return lowest;
} // end of getLowest function
