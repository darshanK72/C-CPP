#include <iostream>

using namespace std;

int main()
{
    int num,rev = 0;
    cout<<"Enter Number : ";
    cin>>num;
    
    int a = num;
    while(a != 0)
    {
        rev = rev*10 + a%10;
        a = a / 10;
    }
    if(num  == rev)
    {
        cout<<"Number is Palindrome";
    }  
    else
    {
        cout<<"Number is Not Palindrome";
    }
    
}
