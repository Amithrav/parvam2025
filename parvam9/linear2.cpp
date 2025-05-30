#include <iostream>
#include <string> 

using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    string* names = new string[n]; 

    for (int i = 0; i < n; i++) {
        cout << "Enter student name[" << i << "]: ";
        cin >> names[i];
    }

    string key;
    cout << "Enter the name to search: ";
    cin >> key;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (names[i] == key) {
            cout << "Student " << key << " found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student " << key << " not found in the list." << endl;
    }

    delete[] names; 
    return 0;
}