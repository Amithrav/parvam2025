#include <iostream>
using namespace std;

class Vehicle{
    public:
        void start()
        {
            cout << " Bus moving... " << endl;
        }
};

class bus : public Vehicle
{
public:
    void move()
    {
        cout << " Moving from Banashankari to Elec. City " << endl;
    }
};

int main(){
    bus b1;
    b1.start();
    b1.move();

    return 0;
}