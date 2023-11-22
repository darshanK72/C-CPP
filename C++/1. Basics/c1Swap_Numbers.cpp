#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two digit Numbers"<<endl;
    cin>>a;

    b = a%10; 
    a = a/10;

    //cout<<"a = "<<a<<endl;
    //cout<<"b = "<<b<<endl;


    a = a + b;
    b = a - b;
    a = a - b;

    a = (a*10) + b ;
    
    cout<<"After Swapping"<<endl;

    cout<<a<<endl;
    //cout<<"b = "<<b<<endl;

    return 0;
}