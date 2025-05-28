#include<iostream>
using namespace std;
class animal
{
    public:
    animal()
    {
        cout << " animal constructor called. " << endl;
    }
    ~animal()
    {
        cout << " animal destructor called. " << endl;
    }
};

class dog : public animal
{
    public:
    dog()
     {
        cout << " dog constructor called." << endl;
    }
    ~dog()
    {
        cout << " dog destructor called. " << endl;
    }
};
int main()
 
{
    dog d;
    return 0;
}