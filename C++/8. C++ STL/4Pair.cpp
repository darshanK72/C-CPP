#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int,int> p1(20,30);
    pair<int,int> p2(10,10);
    pair<int,int> p3;
    pair<int,string> p4(1,"Hello");
    pair<int,string> p5(1,"Hello");

    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<(p1 != p2)<<endl;
    cout<<(p4 == p5)<<endl;
    cout<<(p1 > p2)<<endl;
    cout<<(p2 < p1)<<endl;



}