#include <iostream>

using namespace std;

int main()
{
    int N;
    cout<<"Enter the Numbers Up to which you have to print Prime Numbers"<<endl;
    cin>>N;

    for(int i = 2; i < N; i++)
    {
        if(N%i == 0)
        {
            cout<<N<<" is not a Prime Number"<<endl;
            break;
        }
        else
        {
            cout<<N <<" is a Prime Number"<<endl;
            break;
        }
        
        
    }
}