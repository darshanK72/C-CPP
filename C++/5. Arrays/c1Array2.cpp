#include<iostream>

using namespace std;

int main()
{
    int arr[] = {33,423,243,243,23423,234};

    int arr2[5];

    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter the "<<i<<" elenment :";
        cin>>arr2[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr2[i]<<endl;
    }
    
}