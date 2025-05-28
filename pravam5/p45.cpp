#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setDetails(string n, int a) {
        name = n;
        age = a;
    }
};


class Patient : public Person {
private:
    string disease;
    float billAmount;

public:
    void setMedicalDetails(string d, float bill) {
        disease = d;
        billAmount = bill;
    }

    void display() {
        cout << "Patient Name : " << name << endl;
        cout << "Patient Age : " << age << endl;
        cout << "Disease : " << disease << endl;
        cout << "Bill Amount : $" << billAmount << endl;
        cout << "Reviewing patient's condition: " << disease << endl;
    }
};

int main() {
    Patient p;
    p.setDetails("John Doe", 45);
    p.setMedicalDetails("Pneumonia", 3200.5);
    p.display();

    return 0;
}