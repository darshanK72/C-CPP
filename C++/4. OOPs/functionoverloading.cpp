#include <iostream>
using namespace std;

class Calculator
{
public:

    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    float add(float a, float b)
    {
        return a + b;
    }

    string add(string a, string b)
    {
        return a + b;
    }
};

int main()
{
    Calculator c = Calculator();

    cout << "int sum = " << c.add(52, 63) << endl;
    cout << "three int sum = " << c.add(52, 63, 72) << endl;
    cout << "float sum = " << c.add(63.25f, 21.23f) << endl;
    cout << "string sum = " << c.add("Hello ", "World") << endl;
}