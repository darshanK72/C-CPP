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

    Student()
    {
        cout<<"Default Constructor called"<<endl;

    }

    Student(string n,int r, char d, float m, string a)
    {
        cout<<"Parameterised Constructor called "<<endl;
        name = n;
        roll_no = r;
        div = d;
        marks = m;
        address = a;
    }

    Student(const Student &s)
    {
        cout<<"Copy Constructor called"<<endl;
        name = s.name;
        roll_no = s.roll_no;
        div = s.div;
        marks = s.marks;
        address = s.address;
    }

    ~Student()
    {
        cout<<"Destructor Called"<<roll_no<<endl;
    }

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Roll No : "<<roll_no<<endl;
        cout<<"Div : "<<div<<endl;
        cout<<"Marks : "<<marks<<endl;
        cout<<"Address : "<<address<<endl;
        cout<<"--------------------------------------------"<<endl;
    }

};
int main()
{
    Student s1 = Student("Ravi",12,'A',23.4,"Nashik");
    s1.display();

    Student s2 = Student("Ram",11,'B',95.5,"Malegaon");
    s2.display();


    Student s3 = s1;
    s3.display();


    Student s4;
    s4.display();

}