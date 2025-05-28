#include<iostream>
using namespace std;
class student 
{
    private:
    int rnum;
    public:
    void setrnum(int r)
    {
        rnum = r;
    }
    int getrnum()
    {
        return rnum;
    }
};
int main()
{
    student s1;
    s1.setrnum(101);
    cout << s1.getrnum() << endl;
    return 0;
}