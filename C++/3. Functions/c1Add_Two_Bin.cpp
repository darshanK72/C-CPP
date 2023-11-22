#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;


string Add(string a,string b)
{
    int i = a.length() - 1;
    int j = b.length() - 1;
    int sum = 0;
    int carry = 0;
    string no = "";
    while(i >= 0 || j >= 0)
    {
        sum = carry + int(a[i] - '0') + int(b[j] - '0');
        if(sum%2 == 0)
        {
            no += '0';
        }
        else
        {
            no += '1';
        }
        carry = sum % 2;
        i--;
        j--;
    }
    if(carry == 1)
    {
        no += '1';
    }
    return no;
}
int main()
{
    string a,b;
    cout<<"Enter two Binary Numbers : " ;
    cin>>a>>b;

    cout<<Add(a,b)<<endl;
}

