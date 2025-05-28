#include <iostream>
using namespace std;

class Person
{
    private:
        int pin,crd;
        string name;

        public:
            float bal = 240806;
            int verify(int p, int c)        //
            {
                if (c == 128)
                {
                    if (p == 2468)
                        bala();
                    else
                        cout << "Invalid PIN";
                }
                else
                    cout << "Invalid Card No.";
                
            }

            int detail()
            {
                cout << "Enter Your Name : ";
                cin >> name;
                cout << "Enter Your PIN : " ;
                cin >>pin;
                
                cout << "Enter Card No :";
                cin >>crd;
            }

            void bala()
            {
                int wit;
                cout << "Enter The Amount To Withdraw : ";
                cin >>wit;

                if (wit <= bal)
                {
                    bal = bal-wit;
                    cout << "Money Withdrawal Completed."<<endl<<endl<<"Your Balance Is : "<<bal;
                }
                else
                {
                    cout << "Insufficient Balance."<<endl<<endl<<"You Are Broke ... ";
                }

            }

};

int main()
{
    float bal = 240806;
    Person n;
    n.detail();
    n.verify(2468, 128);
    


    return 0;
}