#include <iostream>
using namespace std;

class A
{
    public:
        static int count;
        int a;

        A()
        {
            count++;
        }

        A(int aa)
        {
            a = aa;
            count++;
        }

        void display()
        {
            cout<<a<<endl;
        }

};

int A::count = 0;

int main()
{
    A a1 = A(20);
    A a2 = A(40);
    A a3 = A(60);

    // a1.display();
    // a2.display();

    cout<<A::count<<endl;
}