#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1,3,4,5,21,6,2,46,3,2,423,6};

    int n = (sizeof(arr)/sizeof(arr[0]));
    vector<int> v(arr,arr+n);

    sort(v.begin(),v.end());

    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    vector<int> v1 = {23,5,235,5,32,5,33,25};

    vector<int> v2(v.size()+v1.size());
    merge(v.begin(),v.end(),v1.begin(),v1.end(),v2.begin());

    for(auto x:v2)
    {
        cout<<x<<" ";
    }
    cout<<endl;



}