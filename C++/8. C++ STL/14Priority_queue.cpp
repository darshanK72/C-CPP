#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> p;

    p.push(10);
    p.push(15);
    p.push(20);
    p.push(12);

    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
    cout<<endl;


    priority_queue<int,vector<int>,greater<int>> p1;

    p1.push(10);
    p1.push(15);
    p1.push(20);
    p1.push(12);
    p1.push(1);


    while(!p1.empty())
    {
        cout<<p1.top()<<" ";
        p1.pop();
    }
}