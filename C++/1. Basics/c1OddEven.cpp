#include <iostream>

using namespace std;

int main()
{
    int N =1;
   
    while(N != 0)
    {
        cout<<"Enter the Number"<<endl;
        cin>>N;
        if(N == 0)
            cout<<N<<" is Zero"<<endl;
        if(N%2 == 0)
            cout<<N<<" is Even"<<endl;
        else
            cout<<N<<" is Odd"<<endl;   
    }

    return 0;

}