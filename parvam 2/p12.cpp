#include<iostream>
using namespace std;

class Base {
protected:
    int protVar;

public:
    void setProtVar(int val) {
        protVar = val;
    }
};

class Derived : public Base {
public:
    void showProtVar() {
        cout << "Accessed from Derived: " << protVar << endl; // ✅ Allowed in subclass
    }
};

int main() {
    Derived d;
    // d.protVar = 5;         // Not Allowed directly from object
    d.setProtVar(5);          // Allowed via public method
    d.showProtVar();
    return 0;
}
