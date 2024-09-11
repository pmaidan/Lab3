// Polina Maidanova
// Programming Fundamentals
// CS 1436
// 005
// Due Date: 09/11/2024
// Date Completed: 09/05/2024
// Date Submitted: 09/05/2024


// This program calculates the employee's total annual pay.
#include <iostream> // Header file that allows to use input/output objects.
#include <iomanip>  // Header file that allows to format the output.
using namespace std;    // Use names for the objects and variables from the std library.                                   

int main()  // The starting point of the program execution.
{   // Beginning of the main function's body.
    const int PAY_PERIODS = 26; // Initialize the constant number of pay periods.
    double payAmount, annualPay;    // Declare the variables for the amount paid each pay period and annual pay.

    // Get the amount of pay for each pay period.
    cout << "Enter the amount of pay for each pay period: ";    // Display the request for input.
    cin >> payAmount;   // Get input and store it in payAmount.

    // Calculate the annual pay.
    annualPay = payAmount * PAY_PERIODS;    // Multiply the amount paid each period by the number of pay periods.

    // Display the annual pay with two decimal places.
    cout << fixed << setprecision(2);   //Format the output to be displayed to two decimal places.
    cout << "Annual pay: $" << annualPay << endl;   // Display the calculated annual pay.

    return 0;   // Return 0 to indicate that the program ended successfully.

}   // End of the main function.
