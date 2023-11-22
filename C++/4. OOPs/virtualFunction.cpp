#include <iostream>
using namespace std;

class A
{
    public: 
        int a;

        A()
        {

        }

        A(int aa)
        {
            a = aa;
        }

        virtual void display()
        {
            cout<<"a = "<<a<<endl;
            cout<<"-------------------"<<endl;
        }

        virtual void hello()
        {
            cout<<"Hello A"<<endl;
        }

};

class B:public A
{
    public: 
        int b;

        B()
        {

        }

        B(int aa,int bb)
        {
            a = aa;
            b = bb;
        }

        void display()
        {
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
            cout<<"-------------------"<<endl;
        }

        void hello()
        {
            cout<<"Hello B"<<endl;
        }
};


int main()
{
    A a1 = A(20);
    A* p1 = &a1;
    p1->display();

    B b1 = B(10,30);
    B* p2 = &b1;
    p2->display();


    A * p3 = &b1; 
    p3->display();
    p3->hello();

}