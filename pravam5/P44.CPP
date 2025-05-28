#include<iostream>
using namespace std;
class bankaccount
{
     protected:
     double balance ;

     public:

     void setbalance(double b)

     {
        balance=b;
     }
};
class savingsaccount : public bankaccount
{
    public:
    void showbalance()

    {
        cout << " balance is = $ " << balance << endl;
    }
};

int main()
 {
    savingsaccount acc;
    acc.setbalance(1000);
    acc.showbalance();

    return 0;
 }