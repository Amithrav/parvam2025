#include<iostream>
using namespace std;

void displaybedo(int *patientId , int *bedid , int size)
{
    cout<<"hospital bed occupancy : ";
    for(int i =  0 ; i < size; i++)
    {
        cout<<" bed ID :"<< *(bedid +i) << " | patient ID :"  << *(patientId + i)<<endl;
    }
    cout<<endl;
}
int main()
{
    const int size = 5;
    int bedid[size] = {201 , 202 , 203 , 204 , 205};
        int patientId[size] = {101 , 102 , 103 , 104 , 105};

    int *ptrpatient= patientId;
        int *ptrbed= bedid;

 displaybedo(ptrpatient ,ptrbed ,size );
 *(ptrpatient + 2) = 108;
  *(ptrpatient + 1) = 119;
 *(ptrpatient + 4) = 116;


 cout<<"updated bedid :";
  displaybedo(ptrpatient ,ptrbed ,size );
 return 0;


}
