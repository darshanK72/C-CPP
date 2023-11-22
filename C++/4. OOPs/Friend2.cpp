#include <iostream>
using namespace std;

class Operation
{
    private:
    int a,b,c;

    friend Operation Subtraction(Operation,Operation);

    public:
    void Sum(int x,int y)
    {
        a = x;
        b = y;
        c = a + b;
    }

    void Print(Operation)
    {
        cout<<"Operation Result : "<<c<<endl;
    }

};

Operation Subtraction(Operation O1,Operation O2)
{
    Operation O3;
    O3.Sum((O1.a - O2.a),(O1.b - O2.b));
    return O3;
}

int main()
{
    Operation O1,O2,O3;

    O1.Sum(5,8);
    O1.Print(O1);

    O2.Sum(12,74);
    O2.Print(O2);

    O3 = Subtraction(O1,O2);
    O3.Print(O3);
}