#include <iostream>

using namespace std;

class Car {

    string model;

    int year;

public:

    // Constructor 1: No parameters

    Car() {

        model = "Unknown";

        year = 0;

    }

    // Constructor 2: One parameter

    Car(string m) {

        model = m;

        year = 0;

    }

    // Constructor 3: Two parameters

    Car(string m, int y) {

        model = m;

        year = y;

    }

    void displayInfo() {

        cout << "Model: " << model << ", Year: " << year << endl;

    }

};

int main() {

    Car car1;                   // Default constructor

    Car car2("Toyota");         // One-parameter constructor

    Car car3("Honda", 2022);    // Two-parameter constructor

    car1.displayInfo();

    car2.displayInfo();

    car3.displayInfo();

    return 0;

}

        