//============================================================================
// Name        : Lab11-2.cpp
// Author      : <Your Name>
// Date        : <Current Date>
// Description : C++ program that stores stock prices in an array,
//               calculates the average, and displays the result.
//============================================================================

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

// Constants
const size_t NUM_PRICES = 5;

// Function prototype
double getAverage(const array<double, NUM_PRICES>& prices);

int main() {
    array<double, NUM_PRICES> prices{};
    double avgPrice = 0.0;

    // Enter stock prices with input validation
    for (size_t i = 0; i < NUM_PRICES; ++i) {
        double input = 0.0;
        cout << "Enter price " << (i + 1) << ": ";
        while (!(cin >> input) || input < 0.0) {
            cin.clear(); // clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input. Enter a non-negative number: ";
        }
        prices[i] = input;
    }

    // Calculate and display average price
    avgPrice = getAverage(prices);
    cout << fixed << setprecision(2);
    cout << "Average stock price: $" << avgPrice << endl;

    return 0;
}

// Function to calculate the average of stock prices
double getAverage(const array<double, NUM_PRICES>& prices) {
    double total = 0.0;
    for (double price : prices) {
        total += price;
    }
    return total / NUM_PRICES;
}
