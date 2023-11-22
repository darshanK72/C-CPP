#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
    list<string> l;
    l.assign({"Mango","Banana","Orange","Apple","Kivi"});

    for(auto ele:l)
    {
        cout<<ele<<"--->";
    }
    cout<<endl;

    l.push_front("Watermellon");
    for(auto ele:l)
    {
        cout<<ele<<"--->";
    }
    cout<<endl;

    l.push_back("Guava");
    for(auto ele:l)
    {
        cout<<ele<<"--->";
    }
    cout<<endl;

    l.pop_back();
    l.pop_front();
    for(auto ele:l)
    {
        cout<<ele<<"--->";
    }
    cout<<endl;

    cout<<l.front()<<endl;
    cout<<l.back()<<endl;

}
