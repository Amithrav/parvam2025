#include<iostream>
using namespace std;

class DemoPrivate {
private:
    int secret;

public:
    void setSecret(int val) {
        secret = val;
    }

    void showSecret() {
        cout << "Secret: " << secret << endl;
    }
};

int main() {
    DemoPrivate obj;
    // obj.secret = 10;       // Not Allowed: private member
    obj.setSecret(10);        // Allowed via public method
    obj.showSecret();
    return 0;
}