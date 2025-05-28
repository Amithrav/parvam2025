#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    void start(){
        cout<<brand<< "  "<<"car started!"<<endl;
    }

};
int main(){
    car c1,c2,c3,c4;
    c1.brand="Range rover";
    c2.brand="BMW";
    c3.brand="Fortuner";
    c4.brand="Benz";

    
    c1.start();
    c2.start();
    c3.start();
    c4.start();


    
    return 0;

}