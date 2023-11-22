#include <iostream>
using namespace std;

void add(int x,int y,int z = 0)
{
    cout<<(x+y+z)<<endl;
}

int main()
{
    int a,b,c;
    cout<<"Enter three Numbers : ";
    cin>>a>>b>>c;

    add(a,b,c);
    add(a,b);

}