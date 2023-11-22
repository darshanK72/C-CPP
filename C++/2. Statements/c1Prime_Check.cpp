#include <iostream>
using namespace std;

int main()
{
    int i,N;
    i = 2;
    cout<<"Enter the Number"<<endl;
    cin>>N;

    while(i<N)
    {
        if(N%i == 0)
        {
            cout<<N<<" is not a Prime Number"<<endl;
            break;
        }
        else
        i++;  
    }

    if(i==N)
    cout<<N<<" is a Prime Number"<<endl;
}