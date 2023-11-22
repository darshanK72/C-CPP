#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;


int main()
{
    int a1[5] = {1,4,2,5,3};
    char a2[5] = {'e','h','i','t','g'};

    pair<int,char> v[5];
    for(int i = 0; i < 5; i++)
    {
        v[i] = {a1[i],a2[i]};
    }

    sort(v,v+5);

    for(auto x:v)
    {
        cout<<x.second;
    }
}