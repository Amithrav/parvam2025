#include <iostream>
using namespace std;

class Vehicle
{
    public:
    void start()
    {
        cout <<"Vehicle has started." <<endl;
    }
};
class Car : public Vehicle
{ 
    public:
    void drive()
    {
        cout << "Car is driving." <<endl;
    }
};
int main()
{
    Car myCar;
    myCar.start();
    myCar.drive();
    return 0;
}