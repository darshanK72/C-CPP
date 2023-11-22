#include <iostream>
#include <set>
using namespace std;


int main()
{
    set<int> s = {1,2,13,12,53,0,3,4,5,6,7,7,7,8,9};
    multiset<int> sm = {1,1,1,2,3,4,55,66,55,7,8,10,200};



    for(auto ele:sm)
    {
        cout<<ele<<" ";
    }
    cout<<endl;


    cout<<sm.count(1)<<endl;



    cout<<*sm.upper_bound(10)<<endl;
    cout<<*sm.lower_bound(11)<<endl;

    // cout<<s.count(7)<<endl;
    // for(auto ele:s)
    // {
    //     cout<<ele<<" ";
    // }
    // cout<<endl;
    

    // s.erase(53);
    // for(auto ele:s)
    // {
    //     cout<<ele<<" ";
    // }
    // cout<<endl;
    // s.erase(s.begin());
    
    // for(auto ele:s)
    // {
    //     cout<<ele<<" ";
    // }
    // cout<<endl;

    // s.insert({25,26,27});

    // for(auto ele:s)
    // {
    //     cout<<ele<<" ";
    // }
    // cout<<endl;

    // auto it = s.find(26);
    // cout<<*it<<endl;
}