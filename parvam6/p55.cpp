#include <iostream>
#include <string>
using namespace std;

// Abstract base class
class Booking {
public:
    virtual void bookTicket() = 0; // Pure virtual function
    virtual ~Booking() {}
};

class FlightBooking : public Booking {
    string name;
    int seat;
public:
    FlightBooking(string n, int s) : name(n), seat(s) {}
    void bookTicket() override {
        cout << "Flight booking confirmed for " << name << " with seat " << seat << endl;
    }
};

class TrainBooking : public Booking {
    string name;
    int seat;
public:
    TrainBooking(string n, int s) : name(n), seat(s) {}
    void bookTicket() override {
        cout << "Train booking confirmed for " << name << " with seat " << seat << endl;
    }
};

class BusBooking : public Booking {
    string name;
    int seat;
public:
    BusBooking(string n, int s) : name(n), seat(s) {}
    void bookTicket() override {
        cout << "Bus booking confirmed for " << name << " with seat " << seat << endl;
    }
};

class Manager {
public:
    void confirmBooking(string name) {
        cout << "Booking confirmed for " << name << endl;
    }

    void confirmBooking(string name, int tickets) {
        cout << "Booking confirmed for " << name << " with " << tickets << " tickets." << endl;
    }

    void confirmBooking(string name, int tickets, string date) {
        cout << "Booking confirmed for " << name << " with " << tickets << " tickets on " << date << endl;
    }
};

class GroupBooking {
    int groupSize;
public:
    GroupBooking(int size = 0) : groupSize(size) {}

    GroupBooking operator+(const GroupBooking &g) {
        return GroupBooking(this->groupSize + g.groupSize);
    }

    void display() {
        cout << "Total group size: " << groupSize << endl;
    }
};

int main() {
    cout << "===== MAIN =====" << endl;

    Booking* b1 = new FlightBooking("Alice", 2);
    Booking* b2 = new TrainBooking("Bob", 3);
    Booking* b3 = new BusBooking("Charlie", 1);

    cout << "\n=== Runtime Polymorphism ===" << endl;
    b1->bookTicket();
    b2->bookTicket();
    b3->bookTicket();

    cout << "\n=== Function Overloading ===" << endl;
    Manager mgr;
    mgr.confirmBooking("David");
    mgr.confirmBooking("Emma", 4);
    mgr.confirmBooking("Frank", 5, "2025-06-01");

    cout << "\n=== Operator Overloading ===" << endl;
    GroupBooking group1(4);
    GroupBooking group2(6);
    GroupBooking totalGroup = group1 + group2;
    totalGroup.display();

  
    delete b1;
    delete b2;
    delete b3;

    return 0;
}

