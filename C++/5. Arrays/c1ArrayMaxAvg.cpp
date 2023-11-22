#include <iostream>
#include <limits.h>
using namespace std;

int FindMax(int* a,int n)
{
    int max = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(max <= *(a + i))
        {
            max = *(a + i);
        }
    }
    return max;
}

int FindAvg(int* a,int n)
{
    int avg = 0;
    for(int i = 0; i < n; i++)
    {
        avg += *(a + i);
    }
    return (avg/n);
}
int main()
{
    int n;
    cout<<"Enter Number of Elements in Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter"<<" n "<<"Elements of Array : ";
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<FindMax(arr,n)<<endl;
    cout<<FindAvg(arr,n)<<endl;
}