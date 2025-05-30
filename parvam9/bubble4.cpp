#include <iostream>
#include <string>
using namespace std;

struct City {
    string name;
    float temperature;
};

void bubbleSort(City cities[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (cities[j].temperature > cities[j + 1].temperature) {
                swap(cities[j], cities[j + 1]);
            }
        }
    }
}

int main() {
    City cities[5];

    for (int i = 0; i < 5; i++) {
        cout << "\nEnter city name: ";
        getline(cin, cities[i].name);
        cout << "Enter temperature: ";
        cin >> cities[i].temperature;
        cin.ignore(); 
    }

    bubbleSort(cities, 5);

    cout << "\nCities sorted by temperature (Low to High):\n";
    for (int i = 0; i < 5; i++) {
        cout << cities[i].name << " - " << cities[i].temperature << "°C\n";
    }

    return 0;
}