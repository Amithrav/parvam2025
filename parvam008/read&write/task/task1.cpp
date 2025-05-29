#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>


struct Student {
    std::string name;
    int age;
    std::string grade; 
};



void addStudent() {
    Student s;
    std::cout << "Enter student name: ";
    std::cin.ignore(); 
    std::getline(std::cin, s.name);
    std::cout << "Enter student age: ";
    std::cin >> s.age;
    std::cout << "Enter student grade: ";
    std::cin >> s.grade;

    std::ofstream outFile("students.txt", std::ios::app);
    if (outFile.is_open()) {
        outFile << s.name << " " << s.age << " " << s.grade << std::endl;
        outFile.close();
        std::cout << "Student added successfully!\n";
    } else {
        std::cout << "Unable to open file.\n";
    }
}

void displayStudents() {
    std::ifstream inFile("students.txt");
    if (inFile.is_open()) {
        std::string line;
        if (inFile.peek() == EOF) { 
            std::cout << "No students to display. File is empty.\n";
            inFile.close();
            return;
        }
        std::cout << "\n========== All Students ==========\n";
        while (std::getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        std::cout << "==================================\n";
        inFile.close();
    } else {
        std::cout << "Unable to open file.\n";
    }
}


void searchStudentByName() {
    std::string searchName;
    std::cout << "Enter student name to search: ";
    std::cin.ignore();
    std::getline(std::cin, searchName);

    std::ifstream inFile("students.txt");
    bool found = false;
    if (inFile.is_open()) {
        std::string line;
        while (std::getline(inFile, line)) {
            std::istringstream iss(line);
            std::string n;
            int age;
            std::string grade;
            iss >> n >> age >> grade; 

            if (n == searchName) {
                std::cout << "Student Found: " << line << std::endl;
                found = true;
                break;
            }
        }
        inFile.close();
        if (!found) {
            std::cout << "Student not found.\n";
        }
    } else {
        std::cout << "Unable to open file.\n";
    }
}


void updateStudentGrade() {
    std::string name;
    std::string newGrade;
    std::cout << "Enter student name to update grade: ";
    std::cin.ignore();
    std::getline(std::cin, name);
    std::cout << "Enter new grade: ";
    std::getline(std::cin, newGrade);

    std::vector<Student> students;
    std::ifstream inFile("students.txt");
    std::string line;
    bool updated = false;

    
    if (inFile.is_open()) {
        while (std::getline(inFile, line)) {
            std::istringstream iss(line);
            Student s;
            iss >> s.name >> s.age >> s.grade;
            if (s.name == name) {
                s.grade = newGrade;
                updated = true;
            }
            students.push_back(s);
        }
        inFile.close();

        
        std::ofstream outFile("students.txt");
        if (outFile.is_open()) {
            for (const Student& s : students) {
                outFile << s.name << " " << s.age << " " << s.grade << std::endl;
            }
            outFile.close();
        } else {
            std::cout << "Unable to open file for writing.\n";
        }

        if (updated) {
            std::cout << "Grade updated successfully!\n";
        } else {
            std::cout << "Student not found.\n";
        }
    } else {
        std::cout << "Unable to open file for reading.\n";
    }
}



int main() {
    int choice;
    do {
        std::cout << "\n========== Student Management Menu ==========\n";
        std::cout << "1. Add Student\n";
        std::cout << "2. Display all students\n";
        std::cout << "3. Search Student by Name\n";
        std::cout << "4. Update Student Grade\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudentByName();
                break;
            case 4:
                updateStudentGrade();
                break;
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}