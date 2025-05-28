#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    void start(){
        cout<<brand<<"car started!"<<endl;
    }
};
int main(){
    car c1;
    c1.brand="Toyota";

    c1.start();

    return 0;
}