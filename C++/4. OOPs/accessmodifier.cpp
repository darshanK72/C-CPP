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

class B:A
{
    public:
        int get()
        {
            return this->c;
        }
};

int main()
{
    A a1;
    cout<<a1.b<<endl;
    B b1;
    // cout<<b1.b<<endl;
    cout<<b1.get()<<endl;

}