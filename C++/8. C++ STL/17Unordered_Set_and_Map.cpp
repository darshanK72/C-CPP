#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_map<int,string> mp;
    mp.insert({1,"one"});
    mp.insert({2,"two"});
    mp.insert({3,"three"});
    mp.insert({4,"four"});
    mp.insert({5,"five"});

    for(auto ele:mp)
    {
        cout<<ele.first<<": "<<ele.second<<endl;
    }
    cout<<"-------------"<<endl;


    unordered_set<int> st = {1,2,3,1,3,2,1,3,5,6,3,6,7};

    for(auto ele:st)
    {
        cout<<ele<<" ";
    }
    cout<<endl<<"-----------"<<endl;

}