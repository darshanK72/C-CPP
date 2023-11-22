#include <iostream>
using namespace std;

int Linear_Search(int arr[],int n,int key)
{
   for(int i = 0; i < n; i++)
   {
       if(arr[i] == key)
       {
           return (i+1);
       }
       
   }
    cout<<" Element Not Found";
    return 0;
}
int main()
{
    int n;
    cout<<"Enter Number of Elements in array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter Elements of array : ";
    for(int i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter Element to be search : ";
    cin>>k;
    cout<<"The Element is at Position : "<<Linear_Search(arr,n,k)<<endl;
}