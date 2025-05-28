#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    string shift;
};

int main() {
    int n;
    cout << "Enter number of employees checked in today: ";
    cin >> n;


    Employee* employees = new Employee[n];

    int morningCount = 0, afternoonCount = 0, nightCount = 0;


    for (int i = 0; i < n; ++i) {
        cout << "\nEnter name of employee " << (i + 1) << ": ";
        cin >> employees[i].name;

        cout << "Enter shift (Morning / Afternoon / Night): ";
        cin >> employees[i].shift;

        
        if (employees[i].shift == "Morning") morningCount++;
        else if (employees[i].shift == "Afternoon") afternoonCount++;
        else if (employees[i].shift == "Night") nightCount++;
    }


    cout << "\n--- Employee List ---\n";
    for (int i = 0; i < n; ++i) {
        cout << (i + 1) << ". " << employees[i].name << " - " << employees[i].shift << endl;
    }


    cout << "\n--- Shift Summary ---\n";
    cout << "Morning: " << morningCount << endl;
    cout << "Afternoon: " << afternoonCount << endl;
    cout << "Night: " << nightCount << endl;

    delete[] employees;

    return 0;
}