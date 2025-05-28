#include<iostream>
using namespace std;

class animal {
public:
    virtual void sound() = 0;
    virtual ~animal() {}
};

class dog : public animal {
public:
    void sound() override {
        cout << "dog says woof!!!!!!!!!!!!!!!!" << endl;
    }
};

class cat : public animal {
public:
    void sound() override {
        cout << "cat says meowwww!!!!!!!!!!!!!!!!" << endl;
    }
};

int main() {
    animal *a1 = new dog();
    animal *a2 = new cat();

    a1->sound();
    a2->sound();

    delete a1; 
    delete a2;

    return 0;
}
