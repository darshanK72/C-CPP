#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,6,7,14,3,76,5,23,3};

    auto it = find(v.begin(),v.end(),76);

    cout<<v[(it-v.begin())]<<endl;

    sort(v.begin(),v.end());

    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl<<"------------"<<endl;

    auto it1 = lower_bound(v.begin(),v.end(),20);
    auto it2 = upper_bound(v.begin(),v.end(),3);


    cout<<(it1-v.begin())<<endl;
    cout<<(it2-v.begin())<<endl;


    int ar1[] = {1,2,3,4};
    int ar2[] = {4,2,1,3};

    if(is_permutation(ar1,ar1+(sizeof(ar1)/sizeof(ar1[0])),ar2))
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    rotate(v.begin(),v.begin()+4,v.end());

    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl<<"------------"<<endl;

    int sum = 0;
    cout<<accumulate(v.begin(),v.end(),sum)<<endl;



}
