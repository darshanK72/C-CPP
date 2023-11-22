#include <iostream>
using namespace std;

template<class theme>
theme maximum(theme a,theme b)
{
    return a>b? a : b;

}
int main()
{
    cout<<maximum(5,300)<<endl;
    cout<<maximum(5.4, 6.44)<<endl;
    cout<<maximum(756.4f,878.2f)<<endl;
    cout<<maximum('A','a')<<endl;

}