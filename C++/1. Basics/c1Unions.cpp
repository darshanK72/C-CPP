#include <iostream>

using namespace std;

typedef union uni
{
    char name[20];
    int ID;
    char nick_Name[10];
}un;

int main()
{
    un e1;

    cout<<"Enter the Name : ";
    cin>>e1.name;
    cout<<"Entetr the ID : ";
    cin>>e1.ID;
    cout<<"Enter the nick_Name : ";
    cin>>e1.nick_Name;

    cout<<"\n";
    //cout<<"Name : "<<e1.name<<endl;
    cout<<"ID : "<<e1.ID<<endl;// This will print a garbage 
    cout<<"nick_Name : "<<e1.nick_Name<<endl;

    return 0;

}