#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;


bool comp(string s1,string s2)
{
    return s1.length() < s2.length();
}

int main()
{
    string s0;
    string s1("My name is Darshan");
    string s2 = "Hello Darshan";
    string s3 = s1;
    string s4(s1);
    char arr[5] = {'a','b','c','d','\0'};
    string s5 = arr;


    cout<<s1.compare(s1)<<endl;
    cout<<s1.compare(s3)<<endl;

    cout<<s1.erase(0,2);
    cout<<s1<<endl;
    s1.clear();
    cout<<s1<<endl;

    s1.append("After Clearing the s1 statememnt,");
    cout<<s1<<endl;
    s1 += "We get this and this";
    cout<<s1<<endl;

    cout<<s1.find("this")<<endl;
    cout<<s1.find("this",41)<<endl;

    string s6 = "this is one of the string, but has one the of this";

    cout<<s6.rfind("one")<<endl;
    cout<<s6.find("one")<<endl;
    cout<<s6.at(3)<<endl;

    cout<<s1.compare(40,4,"this")<<endl;
    s1.replace(40,4,"that");
    cout<<s1<<endl;

    s1.insert(35,"Inserted " );
    cout<<s1<<endl;
    cout<<s2<<endl;
    s1.swap(s2);
    cout<<s1<<endl;
    cout<<s2<<endl;

    string arr_s[6] = {s1,s2,s3,s4,s5,s6};

    sort(arr_s,arr_s+6);

    cout<<"----Lexographical Sort-----"<<endl;
    for(auto x:arr_s)
    {
        cout<<x<<endl;
    }

    cout<<"----Length by sort-----"<<endl;
    sort(arr_s,arr_s+6,comp);

    for(auto x:arr_s)
    {
        cout<<x<<endl;
    }

    char s[30] = "my name is darshan Khairnar";
    char *ptr = strtok(s," ");

    while(ptr != NULL)
    {
        cout<<ptr<<endl;
        ptr = strtok(NULL," ");
    }

    // cout<<s0<<endl;
    // cout<<s1<<endl;
    // cout<<s2<<endl;
    // cout<<s3<<endl;
    // cout<<s4<<endl;
    // cout<<s5<<endl;
}