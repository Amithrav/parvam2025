#include<iostream>
#include<string>
using namespace std;

class vehicle
{
    private:
    string model;
    int yr;

    public:
    vehicle (string m,int y)
    {
        model =m;
        yr=y;
    }
    void show()
    {
        cout << " model : " << model << " | year : " << yr << endl;

    }
};
int main()
{
    vehicle *v1 = new vehicle(" toyota camry" ,2022);
    vehicle *v2 = new vehicle( " tesla model 3",2024);
    v1->show();
    v2->show();

    delete v1;
    delete v2;

    return 0;
}