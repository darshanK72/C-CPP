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

        void display()
        {
            cout<<"a = "<<a<<endl;
        }
};

// Single Inheritence
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
        }

};

// Herircal Inheritence
class C:public A
{
    public:
        int c;

        C()
        {

        }

        C(int aa,int cc)
        {
            a = aa;
            c = cc;
        }

        void display()
        {
            cout<<"a = "<<a<<endl;
            cout<<"c = "<<c<<endl;
        }

};

class D
{
    public:
        int d;

        D()
        {

        }

        D(int dd)
        {
            d = dd;
        }

        void display()
        {
            cout<<"d = "<<d<<endl;
        }
};

class E:public A,public D
{
    public:

        E()
        {

        }

        E(int aa,int dd)
        {
            a = aa;
            d = dd;
        }

        void display()
        {
            cout<<"a = "<<a<<endl;
            cout<<"d = "<<d<<endl;
        }
};



int main()
{

    B b1 = B(20,30);
    C c1 = C(52,63);

    b1.display();
    c1.display();

    E e1 = E(53,86);
    e1.display();
    
}