#include <iostream>

using namespace std;

class Item {

private:

    int quantity;

    float pricePerItem;

    float totalPrice;

    float discount;

public:

    // Constructor to initialize values

    Item(int q, float p) {

        quantity = q;

        pricePerItem = p;

        totalPrice = 0;

        discount = 0;

    }

    // Method to calculate total and discount

    void calculateTotal() {

        totalPrice = quantity * pricePerItem;

        // Apply 10% discount if total price > 2000

        if (totalPrice > 2000) {

            discount = 0.2 * totalPrice;

        } else {

            discount = 0;

        }

    }

    // Method to display the results

    void display() {

        float finalPrice = totalPrice - discount;

        cout << "Quantity: " << quantity << endl;

        cout << "Price per item: Rs. " << pricePerItem << endl;

        cout << "Total price before discount: Rs. " << totalPrice << endl;

        if (discount > 0) {

            cout << "Discount applied: Rs. " << discount << endl;

        } else {

            cout << "No discount applied." << endl;

        }

        cout << "Final price to pay: Rs. " << finalPrice << endl;

    }

};

int main() {

    int qty;

    float price;

    cout << "Enter quantity: ";

    cin >> qty;

    cout << "Enter price per item (in Rs): ";

    cin >> price;

    // Create object and perform operations

    Item item(qty, price);

    item.calculateTotal();

    item.display();

    return 0;

}