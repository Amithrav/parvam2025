#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    string phone;
    string college;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student* students = new Student[n];

    cout << "\nEnter student details:\n";
    cin.ignore(); 
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";

        cout << "  Name: ";
        getline(cin, students[i].name);

        cout << "  Roll Number: ";
        cin >> students[i].rollNo;
        cin.ignore();

        cout << "  Phone Number: ";
        getline(cin, students[i].phone);

        cout << "  College Name: ";
        getline(cin, students[i].college);
    }

    string choice;
    do {
        cout << "\nSearch by:\n";
        cout << "1. Name\n2. Roll Number\n3. Phone Number\n4. College Name\n";
        cout << "Enter choice (1-4): ";

        int option;
        cin >> option;
        cin.ignore();

        bool found = false;

        if (option == 1) {
            string name;
            cout << "Enter name to search: ";
            getline(cin, name);
            for (int i = 0; i < n; i++) {
                if (students[i].name == name) {
                    found = true;
                    cout << "\nStudent Found:\n";
                    cout << "  Name: " << students[i].name << "\n";
                    cout << "  Roll No: " << students[i].rollNo << "\n";
                    cout << "  Phone: " << students[i].phone << "\n";
                    cout << "  College: " << students[i].college << "\n";
                }
            }
        } else if (option == 2) {
            int roll;
            cout << "Enter roll number to search: ";
            cin >> roll;
            for (int i = 0; i < n; i++) {
                if (students[i].rollNo == roll) {
                    found = true;
                    cout << "\nStudent Found:\n";
                    cout << "  Name: " << students[i].name << "\n";
                    cout << "  Roll No: " << students[i].rollNo << "\n";
                    cout << "  Phone: " << students[i].phone << "\n";
                    cout << "  College: " << students[i].college << "\n";
                }
            }
        } else if (option == 3) {
            string phone;
            cout << "Enter phone number to search: ";
            getline(cin, phone);
            for (int i = 0; i < n; i++) {
                if (students[i].phone == phone) {
                    found = true;
                    cout << "\nStudent Found:\n";
                    cout << "  Name: " << students[i].name << "\n";
                    cout << "  Roll No: " << students[i].rollNo << "\n";
                    cout << "  Phone: " << students[i].phone << "\n";
                    cout << "  College: " << students[i].college << "\n";
                }
            }
        } else if (option == 4) {
            string college;
            cout << "Enter college name to search: ";
            getline(cin, college);
            for (int i = 0; i < n; i++) {
                if (students[i].college == college) {
                    found = true;
                    cout << "\nStudent Found:\n";
                    cout << "  Name: " << students[i].name << "\n";
                    cout << "  Roll No: " << students[i].rollNo << "\n";
                    cout << "  Phone: " << students[i].phone << "\n";
                    cout << "  College: " << students[i].college << "\n";
                }
            }
        } else {
            cout << "Invalid option.\n";
        }

        if (!found) {
            cout << "No student found matching the given detail.\n";
        }

        cout << "\nDo you want to search again? (yes/no): ";
        cin >> choice;
        cin.ignore();

    } while (choice == "yes" || choice == "Yes");

    cout << "Exit" << endl;
    delete[] students;
    return 0;
}