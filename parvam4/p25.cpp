#include<iostream>
using namespace std;

class Account {
    private:
    double balance = 5000;
    int pin = 1234;

    bool verifyPin(int enteredPin) { 
        return enteredPin == pin;
    }

    public:
    void withdrawCash(int enteredPin, double amount) {
        if (verifyPin(enteredPin)) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawal successful. Remaining balance: " << balance << endl;
            } else {
                cout << "Insufficient balance." << endl;
            }
        } else {
            cout << "Invalid PIN" << endl;
        }
    }

    void checkBalance(int enteredPin) {
        if (verifyPin(enteredPin)) {
            cout << "Your balance is: " << balance << endl;
        } else {
            cout << "Invalid PIN" << endl;
        }
    }
};

int main() {
    Account myAcc;
    myAcc.withdrawCash(1234, 1000);
    myAcc.checkBalance(1234);
    myAcc.withdrawCash(1111, 500);

    return 0;
}
