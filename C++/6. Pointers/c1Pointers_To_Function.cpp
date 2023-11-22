#include <iostream>
using namespace std;

void display()
{
    cout<<"Hello World"<<endl;
}
void display_name()
{
    cout<<"Darshan Khairnar"<<endl;
}

int main()
{
    void (*ptrFun)();
    ptrFun = display;
    (*ptrFun)();
    ptrFun = display_name;
    (*ptrFun)();

    
}