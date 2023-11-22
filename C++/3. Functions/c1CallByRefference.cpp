#include <iostream>

using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x,y;
    cout<<"Enter Two Numbers"<<endl;
    cin>>x>>y;
    cout<<"Before Swapping Number is : "<<((x*10)+y)<<endl;
    swap(x,y);
    cout<<"After Swapping Number is : "<<((x*10)+y)<<endl;

}