#include <iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter Year : ";
    cin>>year;

    if(year%4 == 0)
    {
        if(year%100 == 0)
        {
            if(year%400 == 0)
            {
                cout<<year<<" is A Leap Year"<<endl;
            }
            else
            {
                cout<<year<<" is Not A Leap Year"<<endl; 
            }  
        }
        else
        {
           cout<<year<<" is A Leap Year"<<endl; 
        }
    }
    else
    {
        cout<<year<<" is Not A Leap Year"<<endl;
    }
    
}