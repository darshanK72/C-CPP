#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number of Elements in Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" number of Elements of Array : ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    /*int x = sizeof(arr)/sizeof(arr[0]);

    int maximum = arr[0];
    for(int i = 1; i< n ; i++)
    {
        maximum = max(maximum, arr[i]);
    }

    cout<<"Maximum of Array : "<<maximum;*/

    int *maximum = max_element(arr,arr + n);

    cout<<*maximum;
}