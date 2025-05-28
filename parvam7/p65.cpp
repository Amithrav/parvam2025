#include <iostream>
using namespace std;
class cat
{
    public:
    void meow()
    {
        cout << " meow meow meow.....!" << endl; 
    }
};
int main()
{
    cat *c = new cat();
    c->meow();
    delete c;
    return 0;
}