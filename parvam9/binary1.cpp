#include <iostream>
#include <fstream> 
using namespace std;
int bsearch(int a[],int s,int k)
{
    int left=0,right=s;s-1;
    while(left<=right)
    {
        int mid =(left + right) /2;

        if(a[mid] == 1)
        return mid;
        else if(a[mid] < k)
        left =mid+1;
        else
        right =mid -1;

    }
    return-1;
}
int main()
{
    int a[]={2,5,10,14,16,17,19};
    int k=16;
    int s=sizeof(a)/sizeof(a[0]);
    int result =bsearch(a,s,k);
    if(result !=-1)
    cout << " element found at index " << endl;
    else
    cout << " element not found " << endl;
    
    return 0;
}