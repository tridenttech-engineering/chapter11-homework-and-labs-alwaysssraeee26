// Lab11-21.cpp - stores stock prices in an array
// and displays the average price
// Created/revised by RaeLynn Chattman on 04/22/2025

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double getAverage(double prices[], int numElements);

int main()
{
    double stockPrices[5] = {0.0};
    double avgPrice = 0.0;

    // Enter stock prices
    for (int x = 0; x < 5; x += 1)
    {
        cout << "Enter stock price " << x + 1 << ": ";
        cin >> stockPrices[x];
    } // end for

    // Function call to get the average stock price
    avgPrice = getAverage(stockPrices, 5);

    // Display the average stock price
    cout << fixed << setprecision(2) << endl;
    cout << "Average stock price: $" << avgPrice << endl;

    return 0;
} // end of main function

// ***** Function Definitions *****

double getAverage(double prices[], int numElements)
{
    double total = 0.0;
    for (int x = 0; x < numElements; x += 1)
    {
        total += prices[x];
    }
    return total / numElements;
} // end of getAverage function
