#include <iostream>
using namespace std;

class Student{

    private:
        int roll_no;
        string name;
        string address;
    
    public:
        void setRollNo(int n)
        {
            roll_no = n;
        }

        void setName(string n)
        {
            name = n;
        }

        void setAddress(string a)
        {
            address = a;
        }

        int getRollNo()
        {
            return roll_no;
        }

        string getName()
        {
            return name;
        }

        string getAddress()
        {
            return address;
        }
   
};

int main()
{
    Student s1;

    s1.setRollNo(1);
    s1.setName("Ravi");
    s1.setAddress("Nashik");

    cout<<"Student Details"<<endl;
    cout<<"Name : "<<s1.getName()<<endl;
    cout<<"Roll No : "<<s1.getRollNo()<<endl;
    cout<<"Address : "<<s1.getAddress()<<endl;

}

