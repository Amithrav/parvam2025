#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int marks;
};


void bubbleSort(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].marks > arr[j + 1].marks) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) 
            break;
    }
}


int linearSearchByName(Student arr[], int n, const string &target) {
    for (int i = 0; i < n; i++) {
        if (arr[i].name == target)
            return i;  
    }
    return -1;  
}


int binarySearchByMarks(Student arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid].marks == target)
            return mid;
        else if (arr[mid].marks < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;  
}


void displayStudents(Student arr[], int n) {
    cout << "\nStudents List:\n";
    for (int i = 0; i < n; i++) {
        cout << (i + 1) << ". " 
             << arr[i].name 
             << " — " 
             << arr[i].marks 
             << " marks\n";
    }
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();  

    
    Student *students = new Student[n];

    
    for (int i = 0; i < n; i++) {
        cout << "Enter name of student " << (i + 1) << ": ";
        getline(cin, students[i].name);
        cout << "Enter marks of student " << (i + 1) << ": ";
        cin >> students[i].marks;
        cin.ignore();
    }

    
    cout << "\nOriginal student list:";
    displayStudents(students, n);

    
    bubbleSort(students, n);
    cout << "\nStudents sorted by marks (ascending):";
    displayStudents(students, n);

    string searchName;
    cout << "\nEnter student name to search (Linear Search): ";
    getline(cin, searchName);
    int idxName = linearSearchByName(students, n, searchName);
    if (idxName != -1) {
        cout << "Found " << students[idxName].name 
             << " with marks: " << students[idxName].marks << "\n";
    } else {
        cout << "Student with name \"" << searchName 
             << "\" not found.\n";
    }

    
    int searchMarks;
    cout << "\nEnter marks to search (Binary Search): ";
    cin >> searchMarks;
    int idxMarks = binarySearchByMarks(students, n, searchMarks);
    if (idxMarks != -1) {
        cout << "Found student " << students[idxMarks].name 
             << " with marks: " << students[idxMarks].marks << "\n";
    } else {
        cout << "No student found with marks " 
             << searchMarks << ".\n";
    }

    delete[] students;
    return 0;
}