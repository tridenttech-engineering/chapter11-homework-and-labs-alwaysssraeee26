// Lab11-2.cpp - stores stock prices in an array
// and displays the average price
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double getAverage(double prices[], int numElements);

int main()
{
    double prices[5] = {0.0};  // Array to store 5 stock prices
    double avgPrice = 0.0;

    // Enter stock prices
    for (int x = 0; x < 5; x++) // Using a for loop to enter 5 prices
    {
        cout << "Price " << x + 1 << ": ";
        cin >> prices[x];  // User enters each stock price
    }

    // Calculate average price using the getAverage function
    avgPrice = getAverage(prices, 5);

    // Display average price with 2 decimal places
    cout << fixed << setprecision(2) << endl;
    cout << "Average stock price: $" << avgPrice << endl;

    return 0;
} // end of main function

// Function to calculate the average of stock prices
double getAverage(double prices[], int numElements)
{
    double total = 0.0;

    // Use a for loop to sum all the stock prices
    for (int x = 0; x < numElements; x++)
    {
        total += prices[x];  // Add each stock price to total
    }

    // Return the average price
    return total / numElements;
} // end of getAverage function
