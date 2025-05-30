#include <iostream>
using namespace std;

int recursiveBinarySearch(int arr[], int left, int right, int key) {
    if (left > right) {
        return -1;
    }
    int mid = (left + right) / 2;
    if (arr[mid] == key) {
        return mid;
    } else if (arr[mid] < key) {
        return recursiveBinarySearch(arr, mid + 1, right, key);
    } else {
        return recursiveBinarySearch(arr, left, mid - 1, key);
    }
}

int main() {
    int patientIDs[] = {2001, 2005, 2010, 2020, 2040, 2070};
    int size = sizeof(patientIDs) / sizeof(patientIDs[0]);
    int searchID;
    cout << "Enter Patient ID to search: ";
    cin >> searchID;
    int result = recursiveBinarySearch(patientIDs, 0, size - 1, searchID);
    if (result != -1) {
        cout << "Patient ID found at index: " << result << endl;
    }
       else
    
       { cout << "patient ID not found : ";
      
    }
    return 0;
}