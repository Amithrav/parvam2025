#include<iostream>
using namespace  std;
class student
{
    public:
    string name;
    int age;
    int usn;
    string clgname;
    student(string n,int a,int b,string c)
    {
        name=n;
        age=a;
        usn=b;
        clgname=c;
        cout<< " name : "<< name << " age: "<< age <<" usn "<< usn <<" clgname "<< clgname <<endl;
    }
    
};
int main()
{
    student s("musa",45,123,"pokemon institue of technology");
    return 0;
}



