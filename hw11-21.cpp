// StockPriceAverage.cpp - calculates and displays the average stock price
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Function prototype
double calculateAverage(const vector<double>& prices);

int main()
{
    const size_t NUM_PRICES = 5;   // Number of stock prices
    vector<double> prices(NUM_PRICES); // Vector to store stock prices
    double averagePrice = 0.0;         // Variable to store the average price

    // Input stock prices
    cout << "Enter " << NUM_PRICES << " stock prices:\n";
    for (size_t i = 0; i < NUM_PRICES; ++i)
    {
        cout << "Price " << i + 1 << ": ";
        cin >> prices[i];

        // Validate input
        while (cin.fail() || prices[i] <= 0.0)
        {
            cin.clear(); // Clear input error
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a positive value: ";
            cin >> prices[i];
        }
    }

    // Calculate the average price
    averagePrice = calculateAverage(prices);

    // Display the average price
    cout << fixed << setprecision(2);
    cout << "\nThe average stock price is: $" << averagePrice << endl;

    return 0;
}

// Function to calculate the average stock price
double calculateAverage(const vector<double>& prices)
{
    double total = 0.0;
    for (double price : prices)
    {
        total += price;
    }
    return total / prices.size();
}
