#include <iostream>
using namespace std;

int main()
{
    // char name[20] = "Ravi Sharma";
    // string name = "Ravi Sharma";

    // cout<<name.length()<<endl;

    // cout<<name<<endl;
    // name.append(" This is new appended string");
    // cout<<name<<endl;

    // string fullName;
    // cout<<"Enter Full Name : ";
    // // cin>>fullName;
    // getline(cin,fullName);
    // cout<<fullName<<endl;

    string s1;
    string s2;
    int num;
    cout<<"Enter String 1 : ";
    getline(cin,s1);

    cout<<"Enter Number : ";
    cin>>num;

    cout<<"Enter String 2 : ";
    cin.ignore();
    getline(cin,s2);

    cout<<"s1 = "<<s1<<endl;
    cout<<"s2 = "<<s2<<endl;

    string s3;
    cout<<"Enter string 3 : ";
    getline(cin,s3);
    cout<<s3<<endl;


    string s4 = s1 + " " + s2;
    cout<<s4<<endl;


    string s5 = "This is Sparta";
    cout<<s5[8]<<endl;

    s5[8] = 'M';
    cout<<s5<<endl;

    string s6 = "My \"name\" is Ravi";
    cout<<s6<<endl;

    string s7 = "My \'name\' is Darshan";
    cout<<s7<<endl;
}