#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream file;
    file.open("My.txt");
    string str1,str2,str3;
    file>>str1;
    file>>str2;
    file>>str3;

    cout<<str1<<" "<<str2<<" "<<str3<<endl;
}