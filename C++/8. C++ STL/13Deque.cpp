#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    for(int i = 0; i < 5; i++)
    {
        d.push_front(i);
        d.push_back(i);
    }


    deque<int> d1;

    d1.assign({20,30,40,50,60});

    d1.insert(d1.begin(),200);
    d1.erase(d1.end());

    while(!d1.empty())
    {
        cout<<d1.front()<<" ";
        d1.pop_front();
    }
    // while(!d.empty())
    // {
    //     cout<<d.front()<<" ";
    //     d.pop_front();
    // }

    // while(!d.empty())
    // {
    //     cout<<d.back()<<" ";
    //     d.pop_back();
    // }
}