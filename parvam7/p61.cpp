
#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    double discount; 

public:

    Product(string name, double price) {
        this->name = name;
        this->price = price;
        this->discount = 0.0;
    }


    Product& setDiscount(double discount) {
        this->discount = discount;
        return *this;
    }

    double getFinalPrice() const {
        return price - (price * discount / 100);
    }

    
    bool isMoreExpensiveThan(const Product& other) const {
        return this->getFinalPrice() > other.getFinalPrice();
    }

    
    void display() const {
        cout << "Product: " << name << endl;
        cout << "Original Price: $" << price << endl;
        cout << "Discount: " << discount << "%" << endl;
        cout << "Final Price: $" << getFinalPrice() << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    Product p1("Laptop", 1200.00);
    Product p2("Tablet", 800.00);

    
    p1.setDiscount(10).display();
    p2.setDiscount(15).display();


    if (p1.isMoreExpensiveThan(p2)) {
        cout << "Laptop is more expensive than Tablet after discount." << endl;
    } else {
        cout << "Tablet is more expensive than Laptop after discount." << endl;
    }

    return 0;
}