#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fp1("file.txt");
    string s;
    while (getline(fp1,s))
    {
        cout<<s<<endl;
    }
    fp1.close();

    ofstream fp2("file.txt",ios::app);

    fp2<<"This is form writing file new "<<endl;

    fp2.close();
    
}