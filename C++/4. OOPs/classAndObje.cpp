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

    void greet()
    {
        cout << "Hello "<<endl<<name<<endl;
    }
};



int main()
{
    Student s1;
    s1.roll_no = 30;
    s1.name = "Ravi Sharma";
    s1.address = "Nashik";
    s1.div = 'A';
    s1.marks = 88.60;

    s1.greet();


}