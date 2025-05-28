#include<iostream>
using namespace std;
class Claculator{
    public:
    int add(int a, int b);
    int substract(int a, int b);
};
int Claculator::add(int a, int b){
    return a+b;
}
int Claculator::substract(int a, int b){
    return a-b;
}
int main(){
    Claculator calc;
    cout<<"add:"<<calc.add(10,5)<< endl;
    cout<<"substract:"<<calc.substract(10,5)<< endl;
    return 0;
}