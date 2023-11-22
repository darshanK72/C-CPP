#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fp("file.txt");

    string s;


    while(getline(fp,s))
    {
        cout<<s<<endl;
    }

    fp.close();
}