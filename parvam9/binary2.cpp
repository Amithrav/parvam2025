#include<iostream>
#include<string>
using namespace std;

int BinarySearch(int arr [], int size, int key)
{
    int left = 0, right = size - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == key)
        return mid;
        else if (arr[mid] < key)
        left = mid + 1;
        else 
            right = mid - 1;

    }

    return -1;
}

void displayBooks(int arr[], string titles[], int size)
{
    cout << "avalible books:\n";
    for(int i = 0;i < size; i++)
    {
        cout << "ID: " << arr[i] << " - " << titles << endl;
    }
}
int main ()
{
   const int size = 7;
   int bookIDs[size] = {1001,1005,1010,1020,1030,1050,1100};
   string BookTitles[size] = {
    "Python Programming", "Data Structures", "Algorithms", "Web Development", "Machine Learning","operating systems","computer network"};
   

   displayBooks(bookIDs, BookTitles, size);

   int searchID;
   cout << "Enter the ID of the book you want to search for: ";
   cin >> searchID;

   int index = BinarySearch(bookIDs, size, searchID);

   if(index != 1)
   {
    cout << "BOOK found: " << BookTitles[index] << "ID : " << bookIDs[index] << endl;
   }
   else
   {
    cout << "BOOK WITH ID " << searchID << "not found "<< endl;
   }

   return 0;


}