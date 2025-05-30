#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    string* names = new string[n];

    cout << "Enter student names:\n";
    cin.ignore(); 
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << ": ";
        getline(cin, names[i]);
    }

    string choice;
    do {
        string keyName;
        cout << "\nEnter the name to search: ";
        getline(cin, keyName);

        int count = 0;
        cout << "Searching for \"" << keyName << "\"...\n";

        for (int i = 0; i < n; i++)
        {
            if (names[i] == keyName)
            {
                cout << "  Found at position " << i + 1 << endl;
                count++;
            }
        }

        if (count == 0)
        {
            cout << "Student \"" << keyName << "\" not found in the list." << endl;
        }
        else
        {
            cout << "Total occurrences: " << count << endl;
        }

        cout << "\nDo you want to search for another student? (yes/no): ";
        cin >> choice;
        cin.ignore();
    } while (choice == "yes" || choice == "Yes");

    cout << "Exit" << endl;

    delete[] names;
    return 0;
}