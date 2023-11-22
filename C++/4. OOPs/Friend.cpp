#include <iostream>
using namespace std;

class Complex_Number
{
    private:
    int a;
    int b;

    friend Complex_Number Add_Number(Complex_Number,Complex_Number);
    friend Complex_Number Print_Number(Complex_Number);
    public:
    void Set_Number(int x,int y)
    {
        a = x;
        b = y;
    }

};

Complex_Number Print_Number(Complex_Number C)
{
    cout<<"Complex Number : "<<C.a<<" + "<<C.b<<"i"<<endl;
}

Complex_Number Add_Number(Complex_Number C1,Complex_Number C2)
{
    Complex_Number C3;
    C3.Set_Number((C1.a + C2.a),(C1.b + C2.b));
    return C3;
}

int main()
{
    Complex_Number C1,C2,C3;
    C1.Set_Number(3,6);
    C2.Set_Number(7,1);
    C3 = Add_Number(C1,C2);
    Print_Number(C1);
    Print_Number(C2);
    Print_Number(C3);

}