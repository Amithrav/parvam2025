#include <iostream>
#include <fstream>
#include <string>
#include <limits> 

using namespace std;

void logError(const string& message) {
    ofstream errorFile("error_log.txt", ios::app);
    if (errorFile.is_open()) {
        errorFile << message << endl;
        errorFile.close();
    } else {
        cerr << "Failed to open error_log.txt for writing.\n";
    }
}

int main() {
    double num1, num2, result;
    char choice;

    do {
        try {
            cout << "\nEnter the first number: ";
            if (!(cin >> num1)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw string("Invalid input: First number is not a number.");
            }

            cout << "Enter the second number: ";
            if (!(cin >> num2)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw string("Invalid input: Second number is not a number.");
            }

            if (num2 == 0) {
                throw string("Math error: Division by zero is not allowed.");
            }

            result = num1 / num2;
            cout << "Result: " << result << endl;

        } catch (const string& errMsg) {
            cout << "Exception: " << errMsg << endl;
            logError(errMsg); 
        }

        cout << "\nDo you want to perform another division? (y/n): ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the division program.\n";

    return 0;
}