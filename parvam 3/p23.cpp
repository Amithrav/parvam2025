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

    // Copy constructor
    Teacher(const Teacher &cy_tech) {
        tname = cy_tech.tname;
        tdob = cy_tech.tdob;
        tsalary = cy_tech.tsalary;
        tempid = cy_tech.tempid;
        tdept = cy_tech.tdept;
        texp = cy_tech.texp;
    }

    void getTeacherDetails() {
        cout << tname << " | " << tdob << " | " << tdept << " | " << tempid << " | " << texp << " | " << tsalary << endl;
    }

    void setSalary(float s_salary) {
        tsalary = s_salary;
    }

    float getSalary() {
        return tsalary;
    }
};

int main() {
    Teacher t1("Teacher 1", "12-05-1997", 15000, "CECTH007", "CSE", 5);
    Teacher t2 = t1;
    Teacher t3("Teacher 2", "11-04-1996", 15000, "CECTH008", "ECE", 4);
    Teacher t4("Teacher 3", "10-03-1995", 15000, "CECTH009", "ME", 6);
    Teacher t5("Teacher 4", "09-02-1994", 15000, "CECTH010", "EE", 7);

    cout << "\n-------Teacher Salary Update: Teacher Details--------" << endl;
    cout << "| Name | DOB | Department | Employee ID | Experience | Salary |" << endl;
    t1.getTeacherDetails();
    t2.getTeacherDetails();
    t3.getTeacherDetails();
    t4.getTeacherDetails();
    t5.getTeacherDetails();

    // Salary update conditions
    if (t2.getSalary() <= 15000) {
        t2.setSalary(t2.getSalary() * 2);
    } else {
        t2.setSalary(t2.getSalary() - 5000);
    }

    if (t3.getSalary() <= 15000) {
        t3.setSalary(t3.getSalary() * 2);
    } else {
        t3.setSalary(t3.getSalary() - 5000);
    }

    if (t4.getSalary() <= 15000) {
        t4.setSalary(t4.getSalary() * 2);
    } else {
        t4.setSalary(t4.getSalary() - 5000);
    }

    if (t5.getSalary() <= 15000) {
        t5.setSalary(t5.getSalary() * 2);
    } else {
        t5.setSalary(t5.getSalary() - 5000);
    }

    // Display updated salaries
    cout << "\n\nAfter Salary Update: Teacher Details" << endl;
    cout << "T1 Salary = " << t1.getSalary() << endl;
    cout << "T2 Salary = " << t2.getSalary() << endl;
    cout << "T3 Salary = " << t3.getSalary() << endl;
    cout << "T4 Salary = " << t4.getSalary() << endl;
    cout << "T5 Salary = " << t5.getSalary() << endl;

    return 0;
}
