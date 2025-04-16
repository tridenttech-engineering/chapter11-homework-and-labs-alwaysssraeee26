// Lab11-21.cpp - calculates and displays the average stock price
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double getAverage(double prices[], int size);

int main() {
    const int SIZE = 5;
    double prices[SIZE];
    double avgPrice;

    // Input stock prices
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter stock price " << (i + 1) << ": ";
        cin >> prices[i];
    }

    // Calculate average price
    avgPrice = getAverage(prices, SIZE);

    // Output result
    cout << fixed << setprecision(2);
    cout << "\nAverage stock price: $" << avgPrice << endl;

    return 0;
}

// Function to calculate average
double getAverage(double prices[], int size) {
    double total = 0.0;
    for (int i = 0; i < size; ++i) {
        total += prices[i];
    }
    return total / size;
}
