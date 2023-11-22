#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class item
{
    int id;
    string name;
    int quntity;
public:
    item(){}
    item(int idd, string nm, int qty)
    {
        id = idd;
        name = nm;
        quntity = qty;
    }
    friend ifstream &operator>>(ifstream &fis, item &i);
    friend ofstream &operator<<(ofstream &fos, item &i);
    friend ostream &operator<<(ostream &os, item &i);
};
ofstream &operator<<(ofstream &fos, item &i)
{
    fos << i.id<< endl
        << i.name << endl
        << i.quntity << endl;
    return fos;
}
ifstream &operator>>(ifstream &fis, item &i)
{
    fis >> i.id >> i.name >> i.quntity;
    return fis;
}
ostream &operator<<(ostream &os, item &i)
{
    cout << i.name << endl;
    cout << i.id << endl;
    cout << i.quntity << endl;
    return os;
}

int main()
{
    int n;
    int idd;
    string nnm;
    int ppqy;
    cout << "Enter Number of Items : ";
    cin >> n;
    vector<item *> list_of_items;

    for (int it = 0; it < n; it++)
    {
        cout << "Enter Details of Item" << endl;
        cout << "ID : ";
        cin >> idd;
        cout << "Name : ";
        cin >> nnm;
        cout << "Quantity : ";
        cin >> ppqy;

        list_of_items.push_back(new item(idd, nnm, ppqy));
    }

    ofstream fos("New Exercise.txt");
    vector<item *>::iterator itr;
    for(itr = list_of_items.begin() ; itr != list_of_items.end(); itr++)
    {
        fos<<**itr;
    }

    item new_item;
    ifstream fis("New Exercise.txt");
    for(int i = 0 ; i < n; i++)
    {
        fis>>new_item;
        cout<<"Item :"<<new_item<<endl;
    }
}