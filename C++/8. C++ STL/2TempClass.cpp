#include <iostream>
using namespace std;


template <class T>
class Point
{
    private:
    T x;
    T y;
    public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(T x,T y)
    {
        this->x = x;
        this->y = y;
    }

    void get_coordinaces()
    {
        cout<<"Point("<<x<<','<<y<<')'<<endl;
    }
};

int main()
{
    Point<int> p1;
    Point<int> p2(20,40);
    Point<char> p3('x','y');
    Point<float> p4(2.4f,88.2f);
    Point<string> p5("Hello","Bye");

    p1.get_coordinaces();
    p2.get_coordinaces();
    p3.get_coordinaces();
    p4.get_coordinaces();
    p5.get_coordinaces();

}