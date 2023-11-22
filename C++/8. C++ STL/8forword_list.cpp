#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> l = {1,2,3,4,5,6};
    forward_list<int> l1;
    l1.assign({1,2,3,4,5,6,7});
    l1.push_front(0);
    l1.push_front(-1);
    for(auto x:l1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    l1.pop_front();
    l1.pop_front();
    for(auto x:l1)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    l1.emplace_after(l1.begin(),111);

    for(auto x:l1)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    l1.emplace_front(22);

    for(auto x:l1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    l1.insert_after(l1.begin(),300);
    l1.insert_after(l1.begin(),{200,301,4000});

    for(auto x:l1)
    {
        cout<<x<<" ";
    }
    cout<<endl;


    for(auto x:l1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}