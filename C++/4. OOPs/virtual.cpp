#include <iostream>
using namespace std;

class A
{
    public:
        int a;

        A()
        {

        }

        A(int a)
        {
            this->a = a;
        }

        virtual void display()
        {
            cout<<"display of A class"<<endl;
            cout<<a<<endl;
        }
};

class B : public A
{
    public:
        int d;

        B()
        {

        }

        B(int a,int d)
        {
            this->a = a;
            this->d = d;
        }

        void display()
        {
            cout<<"display of B class"<<endl;
            cout<<a<<endl;
            cout<<d<<endl;
        }

};

int main()
{
    A *ptr;

    A a1 = A(63);
    // a1.display();

    B b1 = B(274,30);
    // b1.display();

    ptr = &b1;
    ptr->display();

}