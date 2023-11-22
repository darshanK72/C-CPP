#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int,int> mp;
    for(int i = 1; i <= 10; i++)
    {
        mp[i] = i*i;
    }

    multimap<int,int> mmp;

    mmp.insert({10,20});
    mmp.insert({5,20});
    mmp.insert({10,100});
    mmp.insert({20,400});

    for(auto x:mmp)
    {
        cout<<x.first<<":"<<x.second<<endl;
    }
    cout<<"-------------"<<endl;


    cout<<mmp.count(10)<<endl;

    cout<<mmp.find(10)->first<<":"<<mmp.find(10)->second<<endl;

    // cout<<mp.at(2)<<endl;

    // for(auto x:mp)
    // {
    //     cout<<x.first<<":"<<x.second<<endl;
    // }
    // cout<<"---------"<<endl;

    // mp.erase(9);

    // for(auto x:mp)
    // {
    //     cout<<x.first<<":"<<x.second<<endl;
    // }
    // cout<<"---------"<<endl;


    // mp.insert(mp.upper_bound(8),{9,81});

    // for(auto x:mp)
    // {
    //     cout<<x.first<<":"<<x.second<<endl;
    // }
    // cout<<"---------"<<endl;

    // cout<<mp.lower_bound(7)->first<<endl;
    // cout<<mp.upper_bound(7)->first<<endl;


    // cout<<mp.find(10)->first<<endl;



}