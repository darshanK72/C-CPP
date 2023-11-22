#include <iostream>
using namespace std;


class Student
{
private:
    int roll_no;
    string name;
    string address;
    char div;
    float marks;

public:

    Student()
    {

    }

    Student(string n, int r, string a, char c, float f)
    {
        cout<<"Constructor called"<<endl;
        marks = f;
        roll_no = r;
        name = n;
        address = a;
        div = c;
    }

    void displayDetails()
    {
        cout << "Name : " << name << endl;
        cout << "Roll No : " << roll_no << endl;
        cout << "Address : " << address << endl;
        cout << "Div : " << div << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    int i;
    Student class_room[5];

    for(i = 0; i < 5; i++)
    {
        Student s = Student("default name",1,"Nashik",'A',50.5);
        class_room[i] = s;
    }

    for(i = 0; i < 5; i++)
    {
        class_room[i].displayDetails();
        cout<<endl;
    }

}