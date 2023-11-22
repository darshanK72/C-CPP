#include <iostream>
using namespace std;

class Person
{
    public:
        int adharNo;
        string name;
        string address;


        virtual void showDetails() = 0;
};

class Student:public Person
{
    public:
        int rollNo;
        char div;
        int marks;

        Student()
        {

        }

        Student(int r,char d,int m,int a,string n,string ad)
        {
            rollNo = r;
            adharNo = a;
            div = d;
            marks = m;
            name = n;
            address = ad;
        }

        void showDetails()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Address : "<<address<<endl;
            cout<<"Adhar No : "<<adharNo<<endl;
        }
};


int main()
{
    // Person p1;
    Student s1;
}