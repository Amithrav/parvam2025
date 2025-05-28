#include<iostream>
using namespace std;
class payment 
{
    public:
    virtual ~payment(){}
    virtual void pay()=0;

};
class creditcardpayment:public payment 
{
    void pay()override
    {
        cout << " processing credit card payment...." << endl;
    }
};
class paypalpayment:public payment
{
    public:
    void pay() override
    {
        cout << " processing paypal payment...." << endl;
    }

};
int main()
{
    payment *paymentmethod=nullptr;
    int choice;
    cout << " choose a payment method :\n";
    cout << "1.creditcard \n";
    cout << " 2.paypal \n";
    cout << " enter your choice (1 or 2):";
    cin>>choice;
    switch (choice)
    {
        case 1:
        paymentmethod=new creditcardpayment();
        break;
        case 2:
         paymentmethod=new paypalpayment();
         break;
         default:
         cout << " invalid choice. exiting..." << endl;
         return 1;
    }
    paymentmethod->pay();

    delete paymentmethod;

    return 0;
}