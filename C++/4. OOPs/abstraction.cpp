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
    void greet()
    {
        cout << "Hello "<<endl<<name<<endl;
    }
};



int main()
{
    Student s1;
    s1.greet();
}