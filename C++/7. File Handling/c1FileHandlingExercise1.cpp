#include <iostream>
#include <fstream>
using namespace std;


class item
{
    public:
        int id;
        string name;
        int quntity;
        friend ifstream& operator >> (ifstream &iff, item &i);

};

ifstream &operator >> (ifstream &iff, item &i)
{
    iff>>i.name>>i.id>>i.quntity;
    return iff;
}

int main()
{
    item i1;
    ifstream file("Item List.txt");
    file>>i1;

    cout<<i1.name<<endl;
    cout<<i1.id<<endl;
    cout<<i1.quntity<<endl;
}