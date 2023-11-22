#include <iostream>

using namespace std;

int main()
{
    int N;

    cin>>N;
    int arr[N];
    for(int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }

    for(int j = N; j > 0; j--)
    {
        cout<<arr[j - 1]<<" ";
    }

}

