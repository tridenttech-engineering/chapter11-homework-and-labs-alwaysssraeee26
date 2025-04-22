// Lab11-21-modified.cpp - calculates the average stock price
// and displays the result
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double getAverage(const double prices[], int numElements);

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

        // Validate input
        while (cin.fail() || prices[i] < 0)
        {
            cin.clear(); // Clear the error flag
            cin.ignore(1000, '\n'); // Ignore invalid input
            cout << "Invalid input. Please enter a positive number: ";
            cin >> prices[i];
        }
    }

    // Calculate the average price
    avgPrice = getAverage(prices, NUM_PRICES);

    // Display all prices entered
    cout << "Prices entered: ";
    for (int i = 0; i < NUM_PRICES; i++)
    {
        cout << prices[i] << " ";
    }
    cout << endl;

    // Display average price
    cout << fixed << setprecision(2);
    cout << "Average stock price: $" << avgPrice << endl;

    return 0;
}

// ***** Function Definitions *****

double getAverage(const double prices[], int numElements)
{
    double total = 0.0;
    for (int i = 0; i < numElements; i++)
    {
        total += prices[i];
    }
    return total / numElements;
}
