#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    string* employees = new string[n]; 

    for (int i = 0; i < n; i++) {
        cout << "Enter employee " << (i + 1) << " name: ";
        cin >> employees[i];
    }

    cout << "\nEmployee List:\n";
    for (int i = 0; i < n; i++) {
        cout << (i + 1) << ". " << employees[i] << endl;
    }

    delete[] employees; 
    return 0;
}