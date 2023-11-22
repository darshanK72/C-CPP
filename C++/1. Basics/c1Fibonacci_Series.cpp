#include <iostream>

using namespace std;

int main()
{
    int first = 0;
    int second = 1;
    int next;
    int N;
    cout<<"Enter the Number up to which print fibonacci series"<<endl;
    cin>>N;

    cout<<first<<" ";
    cout<<second<<" ";

    while(next < N)
    {
        next = first + second;
        cout<<next<<" ";
        first = second;
        second = next;
    }
}