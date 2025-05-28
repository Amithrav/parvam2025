#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    void start(){
        cout<<brand<<"|____________/
                       _/__!___!__| 
                        /OO_____OO\
                       |_/_supra_|
                       |@@_|_|_|_@@/    started!"<<endl;
    }
};
int main(){
    car c1;
    c1.brand="supra MK4";

    c1.start();

    return 0;
}