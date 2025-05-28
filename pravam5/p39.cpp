#include <iostream>
using namespace std;

class shape{
public:
    void setColor(string c)
    {
        cout << "Setting color:  " << endl;
    }
};

class Circle : public shape{
    public:
        void drawcircle()
        {
            cout << " Drawing a circle " << endl;
        }
};

class Rectangle : public shape{
    public:
        void drawrectangle()
        {
            cout << "Drawing rectangle. " << endl;
        }
};

int main (){
    Circle c;
    Rectangle r;
    c.setColor("Blue");
    c.drawcircle();

    r.setColor("Yellow");
    r.drawrectangle();

    
    return 0;
}

