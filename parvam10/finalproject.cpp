#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct motorcycle {
    string bikename;
    int minspeed, maxspeed;
    int cc;
    int minamt, maxamt;
    float mileage;
    int stock;
    int sold[10];

    void input() {
        cout << "Enter bike name: ";
        cin >> bikename;
        cout << "Enter min speed: ";
        cin >> minspeed;
        cout << "Enter max speed: ";
        cin >> maxspeed;
        cout << "Enter the CC of the bike: ";
        cin >> cc;
        cout << "Enter the min amount: ";
        cin >> minamt;
        cout << "Enter the max amount: ";
        cin >> maxamt;
        cout << "Enter the mileage: ";
        cin >> mileage;
        cout << "Enter the stock quantity: ";
        cin >> stock;
        cout << "Enter the number of stocks sold in year (2015-2024):\n";
        for (int i = 0; i < 10; i++) {
            cout << "Year " << 2015 + i << ": ";
            cin >> sold[i];
        }
    }

    void display() const {
        cout << "\n=========== Bike Details ===========\n";
        cout << "Bike Name: " << bikename << "\n";
        cout << "Speed Range: " << minspeed << " - " << maxspeed << " km/h\n";
        cout << "CC: " << cc << "\n";
        cout << "Amount Range: Rs. " << minamt << " - Rs. " << maxamt << "\n";
        cout << "Mileage: " << mileage << " kmpl\n";
        cout << "Stock Quantity Remaining: " << stock << "\n";
        cout << "Year-wise Stocks Sold:\n";
        for (int i = 0; i < 10; i++) {
            cout << "Year " << 2015 + i << ": " << sold[i] << " bikes sold\n";
        }
        cout << "====================================\n";
    }
};

void savefile(const motorcycle& m) {
    ofstream file("bikes.txt", ios::app);  
    if (file) {
        file << m.bikename << "\n"
             << m.minspeed << " " << m.maxspeed << "\n"
             << m.cc << "\n"
             << m.minamt << " " << m.maxamt << "\n"
             << m.mileage << "\n"
             << m.stock << "\n";
        for (int i = 0; i < 10; i++) {
            file << m.sold[i] << " ";
        }
        file << "\n---\n";  
        file.close();
    } else {
        cout << "Error saving data to file.\n";
    }
}

void searchbike(int from, int to, float mileagerange, int speedmin) {
    ifstream file("bikes.txt");
    motorcycle m;
    bool found = false;

    if (!file) {
        cout << "No data file found\n";
        return;
    }

    while (file >> m.bikename >> m.minspeed >> m.maxspeed >> m.cc >> m.minamt >> m.maxamt >> m.mileage >> m.stock) {
        for (int i = 0; i < 10; i++) {
            file >> m.sold[i];
        }
        string separator;
        getline(file, separator); 
        getline(file, separator); 

        if (m.maxamt >= from && m.minamt <= to && m.mileage >= mileagerange && m.maxspeed >= speedmin) {
            m.display();
            found = true;
        }
    }

    file.close();
    if (!found) {
        cout << "No bikes found for provided information.\n";
    }
}

void displaybike() {
    ifstream file("bikes.txt");
    motorcycle m;
    bool found = false;

    if (!file) {
        cout << "No data file found\n";
        return;
    }

    while (file >> m.bikename >> m.minspeed >> m.maxspeed >> m.cc >> m.minamt >> m.maxamt >> m.mileage >> m.stock) {
        for (int i = 0; i < 10; i++) {
            file >> m.sold[i];
        }
        string separator;
        getline(file, separator);
        getline(file, separator); 
        m.display();
        found = true;
    }

    file.close();
    if (!found) {
        cout << "No bikes found in file.\n";
    }
}

int main() {
    int choice;
    do {
        cout << "\n======= Motorcycle Registration System ==========\n";
        cout << "1. Enter Details of Bike\n";
        cout << "2. Search by Mileage, Budget, Speed\n";
        cout << "3. Display All Bikes\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            motorcycle m;
            m.input();
            savefile(m);
        } else if (choice == 2) {
            int from, to, speed;
            float mileage;
            cout << "Enter the budget range:\nFROM: ";
            cin >> from;
            cout << "TO: ";
            cin >> to;
            cout << "Enter the minimum mileage: ";
            cin >> mileage;
            cout << "Enter the minimum speed: ";
            cin >> speed;
            searchbike(from, to, mileage, speed);
        } else if (choice == 3) {
            displaybike();
        } else if (choice == 4) {
            cout << "Exiting program. Tata, bye bye!\n";
        } else {
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}