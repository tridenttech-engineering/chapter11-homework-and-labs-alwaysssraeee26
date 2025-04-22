// Lab11-21-modified.cpp - calculates the average stock price
// and displays the result
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double getAverage(double prices[], int numElements);

int main()
{
    const int NUM_PRICES = 5; // Number of stock prices
    double prices[NUM_PRICES] = {0.0};
    double avgPrice = 0.0;

    // Input stock prices
    for (int i = 0; i < NUM_PRICES; i++)
    {
        cout << "Enter stock price " << i + 1 << ": ";
        cin >> prices[i];
    } // end for

    // Calculate average price
    avgPrice = getAverage(prices, NUM_PRICES);

    // Display average price
    cout << fixed << setprecision(2) << endl;
    cout << "Average stock price: $" << avgPrice << endl;

    return 0;
} // end of main function

// ***** Function Definitions *****

double getAverage(double prices[], int numElements)
{
    double total = 0.0;
    for (int i = 0; i < numElements; i++)
        total += prices[i];
    return total / numElements;
} // end of getAverage function

