
#include <iostream>
using namespace std;

class User{
    public:
      string name, email;
      void login(){
        cout << name <<"logged in with email"<< email << endl;
      }
};

class Custmer: public User{
    public:
      void browsProducts(){
        cout << name << " is browsing products."<< endl;
      }
};
 
int main(){
    Custmer c;
    c.name = "Alice";
    c.email = "dhanu12@gmail.com";
    c.login();
    c.browsProducts();
    return 0;
}