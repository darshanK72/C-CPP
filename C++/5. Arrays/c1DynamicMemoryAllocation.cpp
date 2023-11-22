#include <iostream>
using namespace std;

int main()
{
    int s;
    cout<<"Enter Size: ";
    cin>>s;
    int arr[s];
    int *ptr; 
    ptr = new int[s];
    ptr = arr;
    cout<<"Enter Elements of Array : ";
    for(int i = 0; i<s; i++)
    {
        cin>>ptr[i];
    }

    for(int i = 0; i<s; i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    cout<<endl;
    delete []ptr;
    cout<<"Enter New Size : ";
    cin>>s;
    ptr = new int[s];
    for(int i = 0; i<s; i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
}