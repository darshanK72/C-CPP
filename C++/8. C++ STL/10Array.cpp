#include <iostream>
#include <array>
using namespace std;


int main()
{
    array<int,10> a1{1,2,3,4,5,6,7,8,9,10};
    array<int,10> a2 = {11,12,13,14,15,16,17,18,19,20};
    array<int,5> a3;
    a3.fill(20);

    cout<<a1.at(4)<<endl;
    cout<<a1[4]<<endl;

    cout<<a2.front()<<endl;
    cout<<a2.back()<<endl;

    for(auto ele:a1)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    for(auto ele:a2)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    for(auto ele:a3)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    a3.front() = 300;
    a3.back() == 300;

    for(auto ele:a3)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
}

