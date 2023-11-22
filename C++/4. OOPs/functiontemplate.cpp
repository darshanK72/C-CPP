#include <iostream>
using namespace std;

template <typename T>
T add(T a,T b)
{
    return a + b;
}

int main()
{
    cout<<add<int>(50,20)<<endl;
    cout<<add(526.23f,63.63f)<<endl;

    string s1 = "Hello ";
    string s2 = "World";
    cout<<add(s1,s2)<<endl;

}