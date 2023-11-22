#include <iostream>

using namespace std;

int addn(int *a,int *b)
{
    int c;
    c = *a + *b;
    return c;
}

int subt(int *a,int *b)
{
    int c;
    c = *a - *b;
    return abs(c);
}

int main()
{
    int a,b;
    cin>>a>>b;
    int *pa = &a;
    int *pb = &b;
    cout<<addn(pa,pb)<<endl;
    cout<<subt(pa,pb)<<endl;

    return 0;
}