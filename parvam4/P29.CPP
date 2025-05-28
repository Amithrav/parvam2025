#include <iostream>
using namespace std;
class Product {

private:

    int quantity;            

public:

    float pricePerItem;
    float dis;   


    void setProduct(int q, float price,float d) {

        if (q > 0 && price > 0) {
            quantity = q;

            pricePerItem = price;
            dis=d;

        } else {

            cout << "Invalid quantity or price!" << endl;

        }

    }

    float getTotalPrice() {

        return quantity * pricePerItem-dis;

    }

   

    int getQuantity() {

        return quantity;

    }

};

int main() {

    Product p;

    int qty;

    float price;
    float discount;


    cout << "Enter quantity: ";

    cin >> qty;

    cout << "Enter price per item: ";

    cin >> price;
    cout<<"enter the amount of discount";
    cin>>discount;

    

    p.setProduct(qty, price,discount);

    cout << "\nQuantity: " << p.getQuantity() << endl;

    cout << "Price per Item: " << p.pricePerItem << endl;

    cout << "Total Price: " << p.getTotalPrice() << endl;

    return 0;

}
