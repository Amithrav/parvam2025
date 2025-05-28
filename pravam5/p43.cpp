#include <iostream>
#include <string>
using namespace std;

class Person
{
    protected:
    string name;

    public:
    Person(string n) : name (n)
    {
        cout << "Person constructor called for: " << name << endl;
    }
    void introduce()
    {
        cout << "Hi, I am " << name << endl;
    }

};

class Student :  virtual public Person
{
    protected:
    int studentID;

    public:
    Student(string n, int id) : Person(n), studentID(id)
    {
        cout << "Student constructor called ID: " << studentID << endl;
    }
    void study()
    {
        cout << name << " is studying." << endl;
    }
};

class GraduateStudent : public Student
{
    protected:
    string researchTopic;

    public:
    GraduateStudent(string n, int id, string topic) 
       : Person (n), Student(n, id), researchTopic(topic)
       {
        cout << "GraduateStudent constructor called. Topic: " << researchTopic << endl;
        }
        void research()
        {
            cout << name << " is researching on " << researchTopic << endl;
            }
};

class Employee : virtual public Person
{
    protected:
    string department;
    public:
    Employee(string dept) : Person("Unknown"), department(dept)
    {
        cout << "Employee constructor called. Department: " << department << endl;
        }
        void work()
        {
            cout << "Working in " << department << " department." << endl;
            }
};

class TeacherAssistant : public Student, public Employee
{
    public:
    TeacherAssistant(string n, int id, string dept)
    : Person (n) , Student(n, id), Employee(dept)
    {
        cout << "TeacherAssistant constructor called." << endl;
    }
    void assist()
    {
        cout << name << " is assisting in " << department << endl;
    }
};

class Professor : virtual public Person
{
    protected:
    string subject;
    public:
    Professor(string n, string sub) : Person(n), subject(sub)
    {
        cout << "Professor constructor called. Subject: " << subject << endl;
        }
        void teach()
        {
            cout << name << " is teaching " << subject << endl;
        }
    };

    class ResearcherProfessor : public Professor, public GraduateStudent
    {
        public:
        ResearcherProfessor(string n, string sub, int id, string topic)
        : Person(n), Professor(n, sub), GraduateStudent(n, id, topic)
        {
            cout << "ResearcherProfessor constructor called." << endl;
            }
            void conductResearch()
            {
                cout << name << " is conducting research on " << GraduateStudent::researchTopic
                << "and teaches " << subject << endl;
    }
};

int main()
{
    cout<< "\n--- Single Inheritance ---\n" ;
    Student s("Dyamesh", 123);
    s.introduce();
    s.study();

    cout << "\n--- Multiple Inheritance ---\n" ;
    GraduateStudent gs("Sri hari" , 102 , " Artificial Intelligence");
    gs.introduce();
    gs.study();
    gs.research();

    cout<< "\n--- Multiple Inheritance ---\n" ;
    TeacherAssistant ta( "Rohith ", 103 , " Computer Science");
    ta.introduce();
    ta.study();
    ta.work();
    ta.assist();;

    cout << "\n--- Hierarchical Inheritance ---\n" ;
    Professor p("Dr. Akash ", "Mathematics");
    p.introduce();
    p.teach();

    cout<< "\n--- Hybrid Inheritance ---\n" ;
    ResearcherProfessor rp("Dr. Goutham ", "Physics", 104, "Quantum Mechanics");
    rp.introduce();
    rp.teach();
    rp.research();
    rp.conductResearch();
    return 0;
}