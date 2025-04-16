// Lab11-21.cpp - stores stock prices in an array
// and displays the average price
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double getAverage(const double prices[], int numElements);

int main()
{
    const int NUM_PRICES = 5;       // Number of stock prices
    double prices[NUM_PRICES] = {0.0}; // Array to store stock prices
    double avgPrice = 0.0;            // Variable to store the average price

    // Input stock prices
    cout << "Enter " << NUM_PRICES << " stock prices:\n";
    for (int i = 0; i < NUM_PRICES; ++i)
    {
        cout << "Price " << i + 1 << ": ";
        cin >> prices[i];

        // Validate input
        while (cin.fail() || prices[i] <= 0.0)
        {
            cin.clear(); // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a positive value: ";
            cin >> prices[i];
        }
    }

    // Calculate the average price
    avgPrice = getAverage(prices, NUM_PRICES);

    // Display the average price
    cout << fixed << setprecision(2) << endl;
    cout << "The average stock price is: $" << avgPrice << endl;

    return 0;
} // end of main function

// ***** Function Definitions *****

double getAverage(const double prices[], int numElements)
{
    double total = 0.0;
    for (int i = 0; i < numElements; ++i)
    {
        total += prices[i];
    }
    return total / numElements;
} // end of getAverage function
