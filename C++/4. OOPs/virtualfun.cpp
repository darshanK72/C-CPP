#include <iostream>
using namespace std;

class A
{
    public:
        int adata;

    virtual void greet()
        {
            cout<<"This is from class A"<<endl;
        }
        
};

class B
{
    public:
        int bdata;

    virtual void greet()
        {
            cout<<"This is from class A"<<endl;
        }      

};


class C:A
{
    public:
        int cdtata;
    
};

int main()
{
   C c1;
   c1.cdtata = 23;

   A *a1;
   a1 = c1;

}