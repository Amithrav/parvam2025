#include <iostream>
using namespace std;

class person {
protected:
    string name;
    int accountnumber;

public:
    void setDetails(string n, int a) {
        name = n;
        accountnumber = a;
    }
};

class psavingsaccount {
protected:
    double balance;

public:
    void setBalance(double b) {
        balance = b;
    }

    double getBalance() {
        return balance;
    }

    void applyInterest() {
        balance += balance * 0.10; 
    }
};

class savingsaccount : public person, public psavingsaccount {
public:
    void display() {
        cout << "Account holder name: " << name << endl;
        cout << "Account number: " << accountnumber << endl;
        cout << "Balance is: $ " << getBalance() << endl;
    }
};

int main() {
    savingsaccount acc;
    acc.setDetails("Amith", 697149624);
    acc.setBalance(1000);
    acc.applyInterest();
    acc.display();

    return 0;
}
