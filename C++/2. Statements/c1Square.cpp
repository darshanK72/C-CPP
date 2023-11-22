#include<iostream>

using namespace std;

int main()
{
    int n = 1;

    while(n != 0)
    {
        cout<<"Enter the Number"<<endl;
        cin>>n;
        cout<<"Square of "<<n<<" is " << n*n <<endl;
    }

    return 0;
}