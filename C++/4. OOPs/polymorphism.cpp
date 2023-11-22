#include <iostream>
using namespace std;


int add(int a,int b)
{
    return a + b;
}

int add(int x,int y, int z)
{
    return x + y + z;
}

float add(float a,float b)
{
    return a + b;
}

int main()
{

    cout<<add(3,5)<<endl;
    cout<<add(5,1,2)<<endl;
    // cout<<add(5,1,5,2)<<endl;
    cout<<add(5.6f,2.3f)<<endl;

}