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
            cout<<a<<endl;
        }

};

int main()
{
    A a1 = A(20);

    A * ptr = &a1;

    cout<<a1.a<<endl;
    cout<<(*ptr).a<<endl;
    cout<<ptr->a<<endl;


    ptr->display();

    // int x = 20;
    // int* p = &x;

    // printf("%d",*p);

}