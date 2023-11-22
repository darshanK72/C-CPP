//Finding area of circle using input radius
#include <iostream>

using namespace std;

double area(double r);
int main()
{
    double radius,a;

    cout<<"Enter the Radius"<<endl;
    cin>>radius;

    a = area(radius);

    cout<<a;

    return 0;
}

//Function calculation for area
double area(double r)
{
    double area;
    area = 3.143*r*r;
    return area;
}