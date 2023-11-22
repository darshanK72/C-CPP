#include <iostream>
using namespace std;

class Student
{
private:
    string address;

public:
    string name;
    int roll_no;
    char div;
    float marks;

    void greet()
    {
        cout << "Welcome to the World!! " << name << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "Darshan";
    s1.roll_no = 21;
    s1.div = 'A';
    s1.marks = 88.20;

    // s1.address = "Nashik";
    // cout<<s1.address<<endl;

    cout << s1.name << endl;

    s1.greet();
}