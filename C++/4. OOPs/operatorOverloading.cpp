#include <iostream>
using namespace std;

class Complex
{
    public:
        int real;
        int imag;

        Complex()
        {

        }

        Complex(int r,int i)
        {
            real = r;
            imag = i;
        }

        Complex operator+(Complex c)
        {
            Complex temp = Complex();
            temp.real = real + c.real;
            temp.imag = imag + c.imag;
            return temp;
        }
        
        void display()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }

};

int main()
{
    Complex c1 = Complex(3,5);
    c1.display();

    Complex c2 = Complex(6,7);
    c2.display();

    Complex c3 = c1 + c2;
    c3.display();
}