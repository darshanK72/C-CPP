#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
    private:
    int ID;
    string Name;

    public:
    void Set_Data(void);
    void Get_Data(void);
};

void Employee :: Set_Data()
{
    cout<<"Enter Employee Id : ";
    cin>>ID;
    cout<<"Enter Employee Name : ";
    cin>>Name;
}

void Employee :: Get_Data()
{
    cout<<"Name of Employee Whose ID is "<<ID<<" is "<<Name<<endl;
}

int main()
{
    Employee list[4];
    for(int i = 0; i<4 ; i++)
    {
        list[i].Set_Data();
    }
    for(int i = 0; i<4 ; i++)
    {
        list[i].Get_Data();
    }
}