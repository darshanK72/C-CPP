#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll_no;
    char div;
    float marks;
    string address;

public:

    void setName(string n)
    {
        name = n;
    }

    void setRollNo(int r)
    {
        roll_no = r;
    }

    void setDiv(char d)
    {
        div = d;
    }
    
    void setMarks(float m)
    {
        marks = m;
    }

    void setAddress(string a)
    {
        address = a;
    }

    string getName()
    {
        return name;
    }

    void greet()
    {
        cout << "Welcome to the World!! " << name << endl;
        cout<<address<<endl;
        cout<<marks<<endl;
    }

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Roll No : "<<roll_no<<endl;
    }
};


int main()
{
    Student s1;
    s1.setName("Ravi");
    s1.setRollNo(12);
    s1.setAddress("Nashik");
    s1.setDiv('A');
    s1.setMarks(87.42);

    // s1.greet();

    cout<<s1.getName()<<endl;
}