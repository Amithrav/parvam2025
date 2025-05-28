#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class item {
private:
    string name;
    int quantity;
    float price;

public:
    item(string n = " ", int q = 0, float p = 0.0f) : name(n), quantity(q), price(p) {}

    item operator+(const item& other) {
        return item(name + " & " + other.name, quantity + other.quantity, price + other.price);
    }

    bool operator==(const item& other) const {  // Corrected equality comparison
        return (name == other.name && quantity == other.quantity && price == other.price);
    }

    friend ostream& operator<<(ostream& os, const item& it) {
        os << left << setw(15) << it.name
           << setw(10) << it.quantity
           << "$" << fixed << setprecision(2) << it.price;
        return os;
    }

    string getname() const { return name; }
    int getquantity() const { return quantity; }
    float getprice() const { return price; }
};

class Invoice {
public:
    // Overloaded method 1: Only item
    void generateInvoice(const item& it) {
        cout << "=== Invoice (Basic) ===" << endl;
        cout << it << endl;
        cout << "Total: $" << it.getprice() << endl << endl;
    }

    // Overloaded method 2: Item + Quantity
    void generateInvoice(const item& it, int quantity) {
        float total = it.getprice() * quantity;
        cout << "=== Invoice (With Quantity) ===" << endl;
        cout << it.getname() << " x " << quantity << endl;
        cout << "Unit Price: $" << it.getprice() << endl;
        cout << "Total: $" << total << endl << endl;
    }

    // Overloaded method 3: Item + Quantity + Discount
    void generateInvoice(const item& it, int quantity, float discount) {
        float subtotal = it.getprice() * quantity;
        float discountAmount = subtotal * (discount / 100);
        float total = subtotal - discountAmount;

        cout << "----Invoice (With Discount) ----" << endl;
        cout << it.getname() << " x " << quantity << endl;
        cout << "Subtotal: $" << subtotal << endl;
        cout << "Discount: " << discount << "% (-$" << discountAmount << ")" << endl;
        cout << "Total Payable: $" << total << endl << endl;
    }
};

int main() {
    // Inventory Items
    item item1("Laptop", 10, 1200.00);
    item item2("Monitor", 5, 300.00);
    item item3("Laptop", 10, 1200.00); // Same as item1

    // Display Items
    cout << "---- Inventory Items ---- "<< endl;
    cout << left << setw(15) << "Name" << setw(10) << "Qty" << "Price" << endl;
    cout << item1 << endl;
    cout << item2 << endl;

    // Operator Overloading Demo
    cout << "\n---- Add Items ----" << endl;
    item combined = item1 + item2;
    cout << combined << endl;

    // Invoice examples
    Invoice invoice;
    invoice.generateInvoice(item1);
    invoice.generateInvoice(item2, 3);
    invoice.generateInvoice(item1, 2, 10.0f);

    return 0;
}


