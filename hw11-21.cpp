// Lab11-21.cpp - stores stock prices in an array
// and displays the average price
// Created/revised by RaeLynn Chattman on 04/22/2025

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
double getAverage(double prices[], int numElements);
double getLowest(double prices[], int numElements);

int main()
{
    double prices[5] = {0.0};  // Array to store stock prices (or race times)
    double avgPrice = 0.0;
    double lowestPrice = 0.0;

    // Prompt the user to enter stock prices
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter stock price " << (i + 1) << ": ";
        cin >> prices[i];  // User inputs prices into the array
    }

    // Call functions to calculate average and lowest price
    avgPrice = getAverage(prices, 5);
    lowestPrice = getLowest(prices, 5);

    // Display the calculated average and lowest price
    cout << fixed << setprecision(2);  // Format output to 2 decimal places
    cout << "Average stock price: $" << avgPrice << endl;
    cout << "Lowest stock price: $" << lowestPrice << endl;

    return 0;
} // end of main function

// ***** Function Definitions *****

// Function to calculate average price
double getAverage(double prices[], int numElements)
{
    double total = 0.0;
    for (int i = 0; i < numElements; i++)
    {
        total += prices[i];  // Accumulate total sum of prices
    }
    return total / numElements;  // Return average
} // end of getAverage function

// Function to calculate the lowest price
double getLowest(double prices[], int numElements)
{
    double lowest = prices[0];  // Initialize lowest with the first price
    for (int i = 1; i < numElements; i++)
    {
        if (prices[i] < lowest)  // Compare with each price in the array
        {
            lowest = prices[i];  // Update lowest if a smaller price is found
        }
    }
    return lowest;  // Return the lowest price found
} // end of getLowest function

