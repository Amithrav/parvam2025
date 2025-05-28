#include<iostream>
using namespace std;
class calci {
    public:
    int add(int a, int b);
    int sub(int a, int b);
    };
    int calci::add(int a, int b){
        return a+b;
    }
    int calci::sub(int a, int b){
        return a-b;
    }
    int main() {
    calci c;
    cout<<"add"<<" "<<c.add(10,5)<< endl;
    cout<<"sub"<<" "<<c.sub(10,5)<< endl;
    return 0;
}