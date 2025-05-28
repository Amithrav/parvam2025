#include <iostream>
using namespace std;

class Veh
{
    public:
        string v;

        void wt()
        {
            string ve;
            cout << "\tWhat Are You Driving Today\n\t\tCar\tor\tBike\n\tINPUT : ";
            cin>>ve;
            v = ve;
        }
        string gwt()
        {
            return v;
        }

        void st()
        {
            cout <<"\nYour "<<gwt()<<" Has Started."<<endl;
        }

};

class Car : public Veh
{
    public:
        string cr;
        void crs()
        {
            cout << "\nWhich Car Are You Taking ( EV or Eng ) :";
            cin >> cr;
        }

        string gcr()
        {
            return cr;
        }
};

class Bike : public Veh
{
    public:
        string b;
        void bk()
        {
            cout << "\nWhich Bike Are You Taking ( EV or Eng ) : ";
            cin >> b;
        }

        string gbk()
        {
            return b;
        }
};

class ev : public Car, public Bike
{
    public:
        void EV()
        {
            cout << "An Electrical Vehicle.\n";
        }
};

class Eng : public Car, public Bike
{
    public:
        void eng()
        {
            cout << "An Engine Type Vehicle.\n";
        }
};

class Bye : public Veh
{
    public:
        void bye()
        {
            cout << "\nEnjoy Your Ride...\n GoodBye.\n";
        }

};

int main()
{
    Car c;
    Bike k;
    Veh V;
    ev r;
    Eng g;
    Bye b;
    V.wt();
    if(V.gwt()== "Car")
    {
        
        c.crs();

        if (c.gcr()=="EV")
        {
            r.EV();
            V.st();
        }
        else if(c.gcr()== "Eng")
        {
            g.eng();
            V.st();
        }
        else
        {
            cout << "Invalid Input.";
        }

        b.bye();
    }
    else if (V.gwt()== "Bike")
    {
        
        k.bk();

        if (k.gbk()=="EV")
        {
            r.EV();
            V.st();
        }
        else if(k.gbk()== "Eng")
        {
            g.eng();
            V.st();
        }
        else
        {
            cout << "Invalid Input.";
        }
        b.bye();
    
    }
    else
    {
        cout <<"You Have That Vehicle.";
    }
    
    


    return 0;
}