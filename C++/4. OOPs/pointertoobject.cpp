#include <iostream>
using namespace std;


class Student
{
public:
    int roll_no;
    string name;
    string address;
    char div;
    float marks;
    Student(string name, int roll_no, string address, char div, float marks)
    {
        this->name = name;
        this->roll_no = roll_no;
        this->address = address;
        this->div = div;
        this->marks = marks;
    }

    void displayDetails()
    {
        cout << "Name : " << this->name << endl;
        cout << "Roll No : " << this->roll_no << endl;
        cout << "Address : " << this->address << endl;
        cout << "Div : " << this->div << endl;
        cout << "Marks : " << this->marks << endl;
    }
};



int main()
{
    Student s1 = Student("Ravi",22,"Nashik",'A',98.87);


    Student *s2 = &s1;

    s1.displayDetails();

    s2->displayDetails();

    cout<<s2->name<<endl;

}