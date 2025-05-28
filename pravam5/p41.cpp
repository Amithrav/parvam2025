#include<iostream>
using namespace std;

class Film
{
    public:
    
    string hero ();
    string heroine();
    string villian();
     
    public:
    void sethero() {

    cout << " The name of hero is amith " << endl;
    
 };
  public :
   void setheroine(){
   
   cout << " The name of heroine is sri " << endl;
 };

    public:
    void  setvillian() {

    cout << " The name of the villian is dyamesh " << endl;
    
 }
};


int main()
{
   Film f1;
   f1.sethero();
   f1.setheroine();
   f1.setvillian();

   return 0;
}

