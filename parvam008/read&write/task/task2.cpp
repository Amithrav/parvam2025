#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;


string getCurrentTime() {
    time_t now = time(0);
    char *dt = ctime(&now); 
    string timeStr(dt);
    timeStr.pop_back();
    return timeStr;
}

void writeLog(int userID, const string &action) {
    ofstream outFile("log.txt", ios::app);
    if (!outFile) {
        cerr << "Error: Could not open log.txt for writing.\n";
        return;
    }
    outFile << "[UserID: " << userID << "] " << action << " at " << getCurrentTime() << endl;
    outFile.close();
    cout << "Log written successfully.\n";
}

void readLogs() {
    ifstream inFile("log.txt");
    if (!inFile) {
        cerr << "Error: Could not open log.txt for reading.\n";
        return;
    }

    cout << "\n=== Log File Contents ===\n";
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();
}


void clearLogs() {
    ofstream outFile("log.txt", ios::trunc);
    if (!outFile) {
        cerr << "Error: Could not open log.txt to clear.\n";
        return;
    }
    outFile.close();
    cout << "All logs have been cleared.\n";
}


int main() {
    int choice, userID;
    string action;

    do {
        cout << "\n===== Log Management Menu =====\n";
        cout << "1. Write a Log\n";
        cout << "2. View ALL Logs\n";
        cout << "3. Clear Log File\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter User ID: ";
                cin >> userID;
                cin.ignore(); 
                cout << "Enter action (e.g., Logged In, Visited Page): ";
                getline(cin, action);
                writeLog(userID, action);
                break;
            case 2:
                readLogs();
                break;
            case 3:
                clearLogs();
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}