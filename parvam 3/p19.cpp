#include <iostream>
using namespace std;

class Student {
private:
    int* marks;
    int size;

public:
    // Constructor
    Student(int s) {
        size = s;
        marks = new int[size];
        for (int i = 0; i < size; ++i) {
            marks[i] = 0; // Initialize all marks to 0
        }
    }

    // Copy Constructor (deep copy)
    Student(const Student& other) {
        size = other.size;
        marks = new int[size];
        for (int i = 0; i < size; ++i) {
            marks[i] = other.marks[i];
        }
        cout << "Copy constructor called!" << endl;
    }

    // Destructor
    ~Student() {
        delete[] marks;
        cout << "Destructor called!" << endl;
    }

    // Set a mark
    void setMark(int index, int value) {
        if (index >= 0 && index < size) {
            marks[index] = value;
        }
    }

    // Print marks
    void printMarks() const {
        for (int i = 0; i < size; ++i) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Student s1(5);      // Create a student with 5 marks
    s1.setMark(0, 95);
    s1.setMark(1, 88);

    cout << "s1 marks: ";
    s1.printMarks();

    Student s2 = s1;    // Copy constructor is called
    cout << "s2 marks: ";
    s2.printMarks();

    s1.setMark(0, 70);  // Change s1, should not affect s2
    cout << "After modifying s1:" << endl;
    cout << "s1 marks: ";
    s1.printMarks();
    cout << "s2 marks: ";
    s2.printMarks();

    return 0;
}