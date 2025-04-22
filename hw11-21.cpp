#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double getAverage(double prices[], int numElements);

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

        // Debugging: Check if input is valid
        if (cin.fail() || prices[i] < 0)
        {
            cin.clear(); // Clear input stream
            cin.ignore(1000, '\n'); // Ignore remaining input
            cout << "Invalid input. Please enter a positive number." << endl;
            i--; // Retry the current index
        }
    }

    // Calculate average price
    avgPrice = getAverage(prices, NUM_PRICES);

    // Debugging: Output all prices entered
    cout << "Prices entered: ";
    for (int i = 0; i < NUM_PRICES; i++)
    {
        cout << prices[i] << " ";
    }
    cout << endl;

    // Display average price
    cout << fixed << setprecision(2) << endl;
    cout << "Average stock price: $" << avgPrice << endl;

    return 0;
} // end of main function

// ***** Function Definitions *****

double getAverage(double prices[], int numElements)
{
    double total = 0.0;
    for (int i = 0; i < numElements; i++)
    {
        total += prices[i];
    }

    // Debugging: Check the total
    cout << "Debug: Total of prices = " << total << endl;

    return total / numElements;
} // end of getAverage function
