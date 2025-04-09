// StockPriceAverage.cpp - calculates and displays the average stock price
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_PRICES = 5;       // Number of stock prices
    double prices[NUM_PRICES] = {0.0}; // Array to store stock prices
    double total = 0.0;               // Variable to hold the total of stock prices
    double average = 0.0;             // Variable to hold the average stock price

    // Input stock prices
    cout << "Enter " << NUM_PRICES << " stock prices:" << endl;
    for (int i = 0; i < NUM_PRICES; i++) 
    {
        cout << "Price " << i + 1 << ": ";
        cin >> prices[i];
        while (cin.fail() || prices[i] <= 0) 
        {
            cin.clear(); // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a positive numeric value: ";
            cin >> prices[i];
        }
    }

    // Calculate total using a for loop
    for (int i = 0; i < NUM_PRICES; i++) 
    {
        total += prices[i];
    }

    // Calculate average
    average = total / NUM_PRICES;

    // Display the average price
    cout << fixed << setprecision(2);
    cout << "\nThe average stock price is: $" << average << endl;

    return 0;
}
