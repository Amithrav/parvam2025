#include<iostream>
using namespace std;
class invoice
{
    public:
     void display(int pid)
    {
        cout<< "invoice id generated "<< pid <<endl;
        cout<<" default quantity 1   |no dis applied "<<endl;
    }
    void display(int pid,int quantity)
    {
        cout<< "generating invoice for pi d"<<  pid <<endl;
        cout<<" quantity : "<< quantity <<" no dis applied "<<endl;
    }
    void display(int pid,int quantity,float dis)
    {
        cout<<" genteratr invoice for pid "<< pid <<endl;
        cout<<" quantity "<< quantity <<" discount "<< dis <<"%"<<endl;
    }
};
int main()
{
    invoice i;
    i.display(101);
    i.display(102,4);
    i.display(103,5,10.5);
    return 0;
}

