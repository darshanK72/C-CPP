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

    }

    Student(string n,int r, char d, float m, string a)
    {
        name = n;
        roll_no = r;
        div = d;
        marks = m;
        address = a;
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
    int i;
    // Student s1 = Student("Ravi",12,'A',23.4,"Nashik");
    // s1.display();

    // Student s2 = Student("Ram",11,'B',95.5,"Malegaon");
    // s2.display();

    // Student s3;
    // s3.display();

    Student arr[3];

    for(i = 0; i < 3; i++)
    {
        string n;
        int r;
        char d;
        float m;
        string ad;

        cout<<"Enter Property of Student : "<<endl;
        cout<<"Name : ";
        cin.ignore();
        getline(cin,n);
        cout<<"Roll NO : ";
        cin>>r;
        cout<<"Division : ";
        cin>>d;
        cout<<"Address : ";
        cin.ignore();
        getline(cin,ad);
        cout<<"Marks : ";
        cin>>m;

        Student t = Student(n,r,d,m,ad);
        arr[i] = t;
    }

    for(i = 0; i < 3; i++)
    {
        arr[i].display();
    }





}