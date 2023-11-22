#include <iostream>
#include <string>
using namespace std;

typedef struct Employee
{
    int ID;
    string name;
    string DoJ;
    long long int mobile_Number;
}st;

int main()
{
    st e1;
    cout<<"Enter the ID of Employee1 : ";
    cin>>e1.ID;
    cout<<"Enter the name of Employee1 : ";
    cin>>e1.name;
    cout<<"Enter the DoJ of Employee1 : ";
    cin>>e1.DoJ;
    cout<<"Enter the Mobile Number of Employee1 : ";
    cin>>e1.mobile_Number;
    cout<<"\n";
    cout<<"ID of Employee1 :"<<e1.ID<<endl;
    cout<<"name of Employee1 :"<<e1.name<<endl;
    cout<<"DoJ of Employee1 :"<<e1.DoJ<<endl;
    cout<<"Mobile Number of Employee1 :"<<e1.mobile_Number<<endl;

    return 0;

}