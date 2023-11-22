#include <iostream>
using namespace std;

int fact(int n)
{
    int factroial = 1;
    for(int i = 2; i <= n; i++)
    {
        factroial = factroial* i;
    }
    return factroial;
}
int main()
{
    int n,r;
    cin>>n>>r;
    int comb = (fact(n)/(fact( n-r)*fact(r)));

    cout<<fact(n - r)<<endl;
    cout<<fact(r)<<endl;
    cout<<fact(n)<<endl;
    cout<<comb<<endl;
}