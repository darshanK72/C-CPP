#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fp("file.txt",ios::out);

    fp<<"Heello World form writing file"<<endl;
}
