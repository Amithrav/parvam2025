#include <iostream>

using namespace std;

class Teacher {

public:

    string tname;

    string tdob;

    string tempid;

    string tdept;

    float texp;

    float tsalary;

    // Default constructor

    Teacher() {

        tempid = "Un Defined";

        tdept = "Un Assigned";

        texp = 0;

        tsalary = 0;

    }

    // Constructor with name, dob, and salary

    Teacher(string s_tname, string s_tdob, float s_tsalary) {

        tname = s_tname;

        tdob = s_tdob;

        tsalary = s_tsalary;

        tempid = "Un Defined";

        tdept = "Un Assigned";

        texp = 0;

    }

    // Constructor with all details

    Teacher(string s_tname, string s_tdob, float s_tsalary, string s_tempid, string s_tdept, float s_texp) {

        tname = s_tname;

        tdob = s_tdob;

        tsalary = s_tsalary;

        tempid = s_tempid;

        tdept = s_tdept;

        texp = s_texp;

    }

    // Function to display teacher info

    void display() {

        cout << "Name: " << tname << endl;

        cout << "DOB: " << tdob << endl;

        cout << "ID: " << tempid << endl;

        cout << "Department: " << tdept << endl;

        cout << "Experience: " << texp << " years" << endl;

        cout << "Salary: " << tsalary << endl;

    }

};

int main() {

    Teacher t1; // default constructor

    Teacher t2("Alice", "01-01-1980", 50000); // constructor with basic details

    Teacher t3("Bob", "15-03-1975", 60000, "T123", "Math", 10); 

    cout << "Teacher 1:\n";

    t1.display();

    cout << "\nTeacher 2:\n";

    t2.display();

    cout << "\nTeacher 3:\n";

    t3.display();

    return 0;

}
