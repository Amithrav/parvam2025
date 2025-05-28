#include<iostream>
using namespace  std; 
class sample 
{
    int *data;
    public: 
    sample()
    {
        data = new int;
        *data=10;
        cout<<"constructor memory allocated"<<endl;

    }
    ~sample()
    {
        delete data;
        cout<<"destructor memory released"<<endl;
    }
};
int main()
{
    sample s;
    return 0;
}