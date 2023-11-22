#include <iostream>
using namespace std;

class Parent
{
    public:
        int data;

        Parent()
        {

        }

        Parent(int d)
        {
            data = d;
        }
    
        void increase()
        {
            data += 20;
        }

};

class Child : public Parent
{
    public:

        Child()
        {

        }

        Child(int d)
        {
            data = d;
        }

        void increase()
        {
            data += 40;
        }

};


int main()
{

    Parent p1 = Parent(10);
    p1.increase();
    cout<<p1.data<<endl;

    Child c1 = Child(20);
    c1.increase();
    cout<<c1.data<<endl;
}