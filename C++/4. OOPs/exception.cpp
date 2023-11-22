#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter Two Numbers : ";
    cin>>a>>b;


    try
    {
        if(b == 0)
        {
            throw 20;
        }
        if(a < b)
        {
            throw 10;
        }
        cout<<a / b<<endl;
    }
    catch(int x)
    {
        if(x == 10)
        {
            cout<<"Cannot divide smaller number by grater number"<<endl;
        }
        else if(x == 20)
        {
            cout<<"Cannot divide by zero"<<endl;
        }
        else
        {
            cout<<"some error happend"<<endl;
        }
    }

    // if(b == 0)
    // {
    //     cout<<"Cannot divide by zero"<<endl;
    // }
    // else
    // {
    //     cout<<a/b<<endl;
    // }

}