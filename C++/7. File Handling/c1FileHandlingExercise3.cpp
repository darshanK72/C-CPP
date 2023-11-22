#include <iostream>
#include <fstream>

using namespace std;

class Student
{
    public:
        string name;
        int roll;
        string branch;
        void getdata()
        {
            cout<<name<<endl;
            cout<<roll<<endl;
            cout<<branch<<endl;
        }
        friend ofstream & operator << ( ofstream &os,Student s);
        friend ifstream & operator >> (ifstream &is, Student &s);

};

ofstream &operator << (ofstream &os,Student s)
{
    os<<s.name<<endl;
    os<<s.roll<<endl;
    os<<s.branch<<endl;
    return os;
}
ifstream & operator >> (ifstream &is, Student &s)
{
    is>>s.name>>s.roll>>s.branch;
    return is;
}

int main()
{
    Student s2;
    /*s1.name = "Darshan Khairnar";
    s1.roll = 55;
    s1.branch = "Mechanical Engineering";

    ofstream file("Student1.txt");
    file<<s1;*/

    ifstream file2("Student1.txt");
    file2>>s2;

    cout<<s2.name<<endl;
    file2.close();
}