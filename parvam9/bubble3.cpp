#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int marks;
};

void bubbleSort(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                swap(students[j], students[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void displayStudents(Student students[], int n) {
    cout << "\nRanked List:\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " - " << students[i].name << " - " << students[i].marks << " marks\n";
    }
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore(); 

    Student* students = new Student[n];

    
    for (int i = 0; i < n; i++) {
        cout << "\nEnter name of student " << i + 1 << ": ";
        getline(cin, students[i].name);
        cout << "Enter marks: ";
        cin >> students[i].marks;
        cin.ignore(); 
    }

    bubbleSort(students, n);

    displayStudents(students, n);

    delete[] students;
    return 0;
}