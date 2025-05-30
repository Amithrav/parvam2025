#include <iostream>
#include <string> 

using namespace std;

int main() {
    int n;
    int rno;
    cout << "Enter number of students and rno : ";
    cin >> n >> rno;

    string* names = new string[n]; 

    for (int i = 0; i < n; i++) {
        cout << "Enter student name[" << i << "]: ";
        cin >> names[i];
    }
    int*rnum = new int[rno];
    for(int i=0 ; i<n;i++)
    {
        cout << " enter the rollno :["<<i<<"]:";
        cin>>rnum[i];
    }

    int key;
    cout << "Enter the rollno to search: ";
    cin >> key;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (rnum[i] == key) {
            cout << "roll num  " << key << " found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << " roll num " << key << " not found in the list." << endl;
    }

    delete[] names; 
    return 0;
}