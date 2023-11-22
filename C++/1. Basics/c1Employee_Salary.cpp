#include <iostream>
using namespace std;

int main()
{
    float salary;
    cout<<"Enter Basic Salary: ";
    cin>>salary;

    float bonous;
    if(salary >= 1000)
    {
        bonous = (0.2)* salary;
    }
    else
    {
        bonous = (.1)* salary;
    }


    int cut;
    cut = (0.15)*salary;

    salary = (salary+bonous+cut);
    cout<<"In Hand Salary : ";
    cout<<salary;
    
}
