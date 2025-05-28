#include <iostream>
using namespace std;

class Product {
private:
    int quantity;
    float pricePerItem;
    float discount; 

public:
    void setProduct(int q, float price) {
        if (q > 0 && price > 0) {
            quantity = q;
            pricePerItem = price;
        } else {
            cout << "Invalid quantity or price!" << endl;
        }
    }

    void setDiscount(float d) {
        if (d >= 0 && d <= 100) {
            discount = d;
        } else {
            cout << "Invalid discount! Must be between 0 and 100." << endl;
        }
    }

    float getTotalPrice() {
        float total = quantity * pricePerItem;
        float discountAmount = total * (discount / 100);
        return total - discountAmount;
    }

    int getQuantity() {
        return quantity;
    }

    float getPricePerItem() {
        return pricePerItem;
    }

    float getDiscount() {
        return discount;
    }
};

int main() {
    Product p;
    int qty;
    float price, discount;

    cout << "Enter quantity: ";
    cin >> qty;

    cout << "Enter price per item: ";
    cin >> price;

    cout << "Enter discount percentage (0-100): ";
    cin >> discount;

    p.setProduct(qty, price);
    p.setDiscount(discount);

    cout << "\nQuantity: " << p.getQuantity() << endl;
    cout << "Price per Item: " << p.getPricePerItem() << endl;
    cout << "Discount: " << p.getDiscount() << "%" << endl;
    cout << "Total Price after Discount: " << p.getTotalPrice() << endl;

    return 0;
}
