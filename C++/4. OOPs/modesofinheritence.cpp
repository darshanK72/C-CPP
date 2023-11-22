#include <iostream>
using namespace std;

class A
{
    private:
        int a;
    public:
        int b;

        int get()
        {
            return this->c;
        }
    protected:
        int c;

    
};

class B:public A
{
    public:
        int get()
        {
            return this->c;
        }
};

class C:private A
{
    public:
        int get()
        {
            return this->b;
        }
};

class D:protected A
{
    public:
        int get()
        {
            return this->b;
        }

};

int main()
{
    B b1;
    cout<<b1.b<<endl;
    // cout<<b1.c<<endl;

    C c1;
    // cout<<c1.b<<endl;
    // cout<<c1.c<<endl;

    D d1;
    // cout<<c1.b<<endl;
    // cout<<c1.c<<endl;

}