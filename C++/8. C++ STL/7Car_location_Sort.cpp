#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;



bool comp(pair<int,int> p1,pair<int,int> p2)
{
    int s1 = p1.first*p1.first + p1.second*p1.second;
    int s2 = p2.first*p2.first + p2.second*p2.second;
    return sqrt(s1) < sqrt(s2);
}

int main()
{
    vector<pair<int,int>> v;
    v.push_back({3,4});
    v.push_back({11,3});
    v.push_back({-5,8});
    v.push_back({-21,-15});
    v.push_back({23,-12});
    v.push_back({3,-3});

    cout<<"Before Sorting : ";
    for(auto x : v)
    {
        cout<<"("<<x.first<<","<<x.second<<")"<<" ";
    }
    sort(v.begin(),v.end(),comp);
    cout<<endl<<"After Sorting : ";
    for(auto x : v)
    {
        cout<<"("<<x.first<<","<<x.second<<")"<<" ";
    }


}