#include <iostream>
using namespace std;

void reverse_dig(int &a,int &b)
{
    int rev1,rev2;
    while(a)
    {
        int c = 0,rev1 = 0;
        c = a % 10;
        rev1 = rev1*10 + c;
        a = a / 10;
    }
    
    a = rev1;
    while(b)
    {
        int c = 0,rev2 = 0;
        c = b % 10;
        rev2 = rev2*10 + c;
        b = b / 10;
    }
    
    b = rev2;
}
void swap(int &a,int &b)
{
    int c;
    c = b;
    b = a;
    a = c;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        reverse_dig(a,b);
        swap(a,b);
        cout<<a<<" "<<b<<endl;
    }

    return 0;
}
