#include <iostream>
using namespace std;

class Employee
{
    private:
        int employee_id;
        string name;
    
    public:

        Employee()
        {
            cout<<"Default Constrctor Called"<<endl;
            employee_id = 0;
            name = "";
        }

        Employee(int i,string n)
        {
            cout<<"Parameterised Constructor Called"<<endl;
            employee_id = i;
            name = n;
        }

        ~Employee()
        {
            cout<<"Distructor Called for object"<<employee_id<<endl;   
        }

        void display()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Employee ID : "<<employee_id<<endl;
        }
};

int main()
{
    Employee e1;
    e1.display();

    Employee e2 = Employee(1,"Ravi");
    e2.display();

}