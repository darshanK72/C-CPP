#include <iostream>
using namespace std;

template<typename T>
T add(T a,T b)
{
    return a + b;
}


int main()
{
    cout<<add(23,63)<<endl;
    cout<<add(3.3,5.3)<<endl;
    cout<<add(3.23f,5.6345f)<<endl;

}