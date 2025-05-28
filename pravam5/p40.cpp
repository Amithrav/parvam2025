#include <iostream>
using namespace std;

class person{
public:
    void introduce()
    {
        cout << "I am a person. " << endl;
    }
};

class student : public person{
    public:
        void study()
        {
            cout << " Studying. " << endl;
        }
};

class  Employee : public person{
    public:
        void work()
        {
            cout << "Working. " << endl;
        }
};

class workingStudent : public student,public Employee
{
    public:
        void manage()
        {
            cout << "Managing both work and studies." << endl;

        }
};

int main (){
    workingStudent ws;
    
    ws.student::introduce();
    ws.Employee::introduce();
    ws.study();
    ws.work();
    ws.manage();

    
    return 0;
}
