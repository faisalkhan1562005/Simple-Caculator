#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    float num1, num2, result;

    do
    {
        // Display menu
        cout << "\n** Calculator Menu **\n";
        cout << "*********" << endl;
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus (Remainder)\n";
        cout << "6. Exponentiation (Power)\n";
        cout << "7. Exit\n";
        cout << "Enter your choice (1-7): ";

        cin >> choice;

        // Check for invalid input
        if (cin.fail())
        {
            cin.clear(); // Clear the error flag
            cin.ignore(10000, '\n'); // Ignore invalid input until newline
            cout << "Invalid input. Please enter a number from 1 to 7." << endl;
            continue; // Skip the rest of the loop and prompt again
        }



        switch (choice)
        {
        case 1: // Addition
            cout << "Enter 1st number: ";
            cin >> num1;
            cout << "Enter 2nd number: ";
            cin >> num2;
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;



        case 2: // Subtraction
            cout << "Enter 1st number: ";
            cin >> num1;
            cout << "Enter 2nd number: ";
            cin >> num2;
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;

        case 3: // Multiplication
            cout << "Enter 1st number: ";
            cin >> num1;
            cout << "Enter 2nd number: ";
            cin >> num2;
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;



        case 4: // Division
            cout << "Enter 1st number: ";
            cin >> num1;
            cout << "Enter 2nd number: ";
            cin >> num2;
            if (num2 != 0)
            {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            }
            else
            {
                cout << "Error: Division by zero." << endl;
            }
            break;



        case 5: // Modulus
        {
            int intNum1, intNum2;
            cout << "Enter 1st integer: ";
            cin >> intNum1;
            cout << "Enter 2nd integer: ";
            cin >> intNum2;
            if (intNum2 != 0)
            {
                result = intNum1 % intNum2;
                cout << "Remainder: " << result << endl;
            }
            else
            {
                cout << "Error: Division by zero." << endl;
            }
            break;
        }



        case 6: // Exponentiation (Power)
            cout << "Enter base: ";
            cin >> num1;
            cout << "Enter exponent: ";
            cin >> num2;
            result = pow(num1, num2);
            cout << "Result: " << result << endl;
            break;



        case 7: // Exit
            cout << "\n** Thank you for using the Calculator Program. Goodbye **" << endl;
            break;


        default:
            cout << "Invalid choice. Please enter a number from 1 to 7." << endl;
            break;
        }

    } while (choice != 7);

    return 0;
}