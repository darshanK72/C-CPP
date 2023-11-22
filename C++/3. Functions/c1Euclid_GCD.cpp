#include <iostream>
using namespace std;

int gcd1(int M,int N)
{
    while(M%N != 0)
    {
        int nextm = N;
        int nextn = M%N;
        M = nextm;
        N = nextn;
    }
    return N;
}

int gcd2(int M,int N)
{
    if(M%N == 0)
    {
        return N;
    }
    return gcd2(N,M%N);

}
int main()
{
    int m,n;
    cout<<"Enter Two Numbers: ";
    cin>>m>>n;
    cout<<gcd1(m,n)<<endl;
    cout<<gcd2(m,n)<<endl;
}