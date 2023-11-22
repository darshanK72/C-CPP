#include <iostream>
// using namespace std;


int a = 100;

class A
{
    public: 
        int a;

        void display();
};


void A::display()
{
    std::cout<<"Hello World"<<a<<std::endl;
}

int main()
{
    A a1 = A();
    a1.a = 20;

    std::cout<<::a<<std::endl;
    a1.display();

}