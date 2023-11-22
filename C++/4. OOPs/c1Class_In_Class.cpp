#include <iostream>
using namespace std;

class Object
{
    private:
    int a;
    int b;
    public:
    void Set_Value(int x,int y)
    {
    a = x;
    b = y;
    }
    void Add_Value(Object o1,Object o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void Get_Value(void)
    {
        cout<<"Object Value : "<<a<<" + "<<b<<"i"<<endl;
    }


};

int main()
{
    Object o1,o2,o3;

    o1.Set_Value(3,5);
    o1.Get_Value();

    o2.Set_Value(7,5);
    o2.Get_Value();

    o3.Add_Value(o1,o2);
    o3.Get_Value();

}
