#include<iostream>
using namespace std;
class pop
{
    private:
    int quantity;
    float price;
    public:
    pop(int q=0,float p=0.0f):quantity(q),price(p){}
    pop operator+(const pop &other)
    {
        return pop(quantity + other.quantity,price + other.price);
    }
    bool operator==(const pop &other)
    {
        return (quantity==other.quantity && price == other.price);
    }
    friend ostream &operator<<(ostream &os, const pop &pop)
    {
        os<<"item->quantity"<<pop.quantity<<" price : $"<<pop.price;
        return os;

    }
};
int main()
{
pop pop1(10,250.50);
pop pop2(5,100.25);
pop pop3(10,250.50);
pop total= pop1 + pop2;

cout<<total<<endl;
if (pop1==pop3)
cout<<"pop1 and pop3 are in ame in price and quantity:"<<endl;
else
cout<<"pop1 and pop3 are different"<<endl;
return 0;
}
