// Lab11-21.cpp - stores stock prices in an array
// and displays the average price

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double getAverage(double prices[], int numElements);

int main()
{
    const int SIZE = 5;
    double prices[SIZE] = {0.0};
    double averagePrice = 0.0;

    // Enter stock prices
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter stock price " << (i + 1) << ": ";
        cin >> prices[i];
    }

    // Calculate and display average price
    averagePrice = getAverage(prices, SIZE);

    cout << fixed << setprecision(2) << endl;
    cout << "Average stock price: $" << averagePrice << endl;

    return 0;
}

// Function definition
double getAverage(double prices[], int numElements)
{
    double total = 0.0;

    for (int i = 0; i < numElements; i++)
    {
        total += prices[i];
    }

    return total / numElements;
}
