// Lab11-21.cpp - stores stock prices in an array
// and displays the average price
// Created/revised by <Your Name> on <Current Date>

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double getAverage(double prices[], int numElements);

// Function to calculate the average of stock prices
double getAverage(double prices[], int numElements)
{
    double total = 0.0;

    // Sum all the stock prices
    for (int x = 0; x < numElements; x++)
    {
        total += prices[x];
    }

    // Return the average
    return total / numElements;
} // end of getAverage function

int main()
{
    double prices[5] = {0.0};  // Array to store 5 stock prices
    double avgPrice = 0.0;

    // Enter stock prices
    for (int x = 0; x < 5; x++)  // Loop to enter 5 prices
    {
        cout << "Enter price " << (x + 1) << ": ";
        cin >> prices[x];
    }

    // Calculate average price using the getAverage function
    avgPrice = getAverage(prices, 5);

    // Display the average stock price with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Average stock price: $" << avgPrice << endl;

    return 0;
} // end of main function
