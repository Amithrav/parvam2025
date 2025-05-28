






#include <iostream>
using namespace std;

class Pers
{
    public:
        string name;
        int age;
        Pers()
        {
            name = "Anonymous";
            age = 0;
        cout << "Name " << name << endl << "Age : "<< age <<endl;

        }
        Pers(string n, int a)
        {
            name = n;
            age = a;
            cout << "Name " << name << endl << "Age : "<< age <<endl;
        }

};

int main()
{
    Pers p1;
    Pers p2("Steven", 70);


    return 0;
}