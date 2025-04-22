// Lab11-21.cpp - stores stock prices in an array
// and displays the average and lowest prices
// Created/revised by RaeLynn Chattman on 04/22/2025

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
double getAverage(double prices[], int numElements);
double getLowest(double prices[], int numElements);

int main()
{
    double stockPrices[5] = {0.0};
    double avgPrice = 0.0;
    double lowestPrice = 0.0;

    // Enter stock prices
    for (int x = 0; x < 5; x += 1)
    {
        cout << "Enter stock price " << x + 1 << ": ";
        cin >> stockPrices[x];
    }

    // Let's say we apply a 10% discount to all prices (modifying the array)
    for (int x = 0; x < 5; x += 1)
    {
        stockPrices[x] *= 0.90; // apply 10% discount
    }

    avgPrice = getAverage(stockPrices, 5);
    lowestPrice = getLowest(stockPrices, 5);

    cout << fixed << setprecision(2) << endl;
    cout << "Average stock price (after discount): $" << avgPrice << endl;
    cout << "Lowest stock price (after discount): $" << lowestPrice << endl;

    return 0;
}

// Function to calculate average price
double getAverage(double prices[], int numElements)
{
    double total = 0.0;
    for (int x = 0; x < numElements; x += 1)
        total += prices[x];
    return total / numElements;
}

// Function to find lowest price
double getLowest(double prices[], int numElements)
{
    double lowest = prices[0];
    for (int x = 1; x < numElements; x += 1)
    {
        if (prices[x] < lowest)
            lowest = prices[x];
    }
    return lowest;
}
