#include <iostream>
using namespace std;

class Shape
{
private:
    int no_of_siedes;
    float area;
    int perimeter;

public:
    Shape()
    {
        cout<<"Default Constructor"<<endl;
        no_of_siedes = 0;
        area = 0;
        perimeter = 0;
    }

    Shape(int n, float a, int p)
    {
        cout << "Paramterised Constructor" << endl;
        no_of_siedes = n;
        area = a;
        perimeter = p;
    }

    Shape(const Shape &sh)
    {
        cout<<"Copy Constructor"<<endl;
        no_of_siedes = sh.no_of_siedes;
        area = sh.area;
        perimeter = sh.perimeter;
    }


    void display()
    {
        cout << "No of Sides : " << no_of_siedes << endl;
        cout << "Area : " << area << endl;
        cout << "Perimeter : " <<perimeter<< endl;
    }
};

int main()
{
    Shape s1 = Shape(4, 300.50, 400);
    s1.display();

    Shape s2 = Shape();
    s2.display();

    Shape s3 = Shape(s1);
    s3.display();
}