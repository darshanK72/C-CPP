#include <iostream>
using namespace std;

class Person
{
    private:
        int adharNo;
    protected:
        int bankbalance;
    public:
        string name;
        string address;

        Person()
        {

        }

        Person(int a,string n,string ad)
        {
            adharNo = a;
            name = n;
            address = ad;
        }
    
        int getAdharNo()
        {
            return adharNo;
        }

        string getName()
        {
            return name;
        }

        string getAddress()
        {
            return address;
        }
};

class Student:public Person
{
    private:
        int rollNo;
    public:
        char div;
        int marks;
        string collegeName;

        Student()
        {

        }

        Student(int r,char d,int m,string c,string n,string ad,int b)
        {
            rollNo = r;
            div = d;
            marks = m;
            collegeName = c;
            name = n;
            address = ad;
            bankbalance = b;
        }

        int getRollNo()
        {
            return rollNo;
        }

        char getDiv()
        {
            return div;
        }

        string getCollegeName()
        {
            return collegeName;
        }

        void showPersonDetail()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Address : "<<address<<endl;
            cout<<"Bank Balance"<<bankbalance<<endl;
            // cout<<"Adhar No : "<<adharNo<<endl;
        }
};

int main()
{
    Person p1 = Person(101,"Ravi Sharma","Nashik");
    cout<<p1.getName()<<endl;

    // cout<<p1.adharNo<<end;
    // cout<<p1.bankbalance<<end;

    Student s1 = Student(201,'A',87,"D.Y.Patil","Ram Sharma","Pune",63843);
    cout<<s1.getCollegeName()<<endl;
    s1.showPersonDetail();
    cout<<s1.getName()<<endl;
    // cout<<s1.rollNo<<endl;
    cout<<s1.div<<endl;

    cout<<s1.name<<endl;
    cout<<s1.address<<endl;
    // cout<<s1.bankbalance<<endl;


}