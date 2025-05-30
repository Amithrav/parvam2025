#include <iostream>
#include <string>
using namespace std;

void bubbleSort( int ids[], string titles[], int n)
{
    for (int i = 0; i< n-1; i++)
    {
        for (int j = 0; j< n-i-1; j++)
        {
            if (ids[j] > ids[j+1])
            {
                swap (ids[j], ids[j+1]);
                swap (titles[j], titles[j+1]);
            }
        }
    }
}

int binarSearch(int arr[], int size, int key)
{
    int left = 0, right = size - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
        return mid;
        else if (arr[mid]< key)
        left = mid + 1;
        else 
        right = mid - 1;
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the number of books: ";
    cin >> n;

    int *booksIDs = new int[n];
    string *titles = new string[n];

    cout << "Enter the book ID and title: ";
    for (int i = 0; i< n; i++)
    {
        cout<< "Book: "<< i+1 << "ID: " ;
        cin >> booksIDs[i];
        cin.ignore();
        cout << "Book " << i+1 << " Title: ";
        getline(cin, titles[i]);
    }

    bubbleSort( booksIDs, titles, n);

    char choice;
    do
    {
        int searchId;
        cout << "\nEnter Book ID to search: ";
        cin >> searchId;

        int index = binarSearch(booksIDs, n, searchId);
        if (index != -1)
        cout << "Book Found: " << titles[index] << "(ID: " << booksIDs[index] << ")\n" << endl;
        else
        cout << "Book Not Found\n" ;
        
        cout<< "Do you want to search again? (y/n): ";
        cin >> choice;
    }while (choice == 'y' || choice == 'Y');

    delete[] booksIDs;
    delete[] titles;
    return 0;
}