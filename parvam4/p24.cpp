#include<iostream>
using namespace std;
class person
{
    private:
    string name;
    int age;


public :
void setData(string n,int a)
{
    name = n;
    age = a;

}
void displaydata()
{
    cout<<" name "<< name <<" age "<< age <<endl;
}
};
int main()
{
    person p;
    p.setData("amith",19);
    p.displaydata();
    return 0;
}
