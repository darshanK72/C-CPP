#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // char name[20] = "hello World";
    // cout<<name<<endl;
    // cout<<strlen(name)<<endl;
    // cout<<strcmp("abc","bbc")<<endl;

    // string s1 = string(name);

    // cout<<s1<<endl;

    string nname = "Ravi Sharma";
    cout<<nname<<endl;
    // cout<<strlen(nname)<<endl;
    cout<<nname.length()<<endl;

    nname.append(" asdfadsf");
    cout<<nname<<endl;

    string s3;
    // cin>>s3;
    getline(cin,s3);

    cout<<s3<<endl;

}