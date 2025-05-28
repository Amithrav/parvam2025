#include<iostream>
using namespace std;
class Box
{
    public:
    int length;
    Box()
    {
        length=0;
    }
    Box(int l)
    {
        length =l;
    }
    void display()
    {
        cout << " length:" << length << endl;
    }
};
int main()
{
    Box b1;
    Box b2(20);
    b1.display();
    b2.display();
    return 0;
}