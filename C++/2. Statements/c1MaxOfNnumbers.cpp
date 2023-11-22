// Write the programm to find out Largest among 5 numbers
// In this programm we use and algorithim in which we compare value with max and if it is grater than max then assign itself to max;
// In this way it checks all values and at last gives us maximum among all
#include <iostream>
using namespace std;

int main()
{
    int A,B,C,D,E,Max;
    cout<<"Emter Five Numbers "<<endl;
    cin>>A>>B>>C>>D>>E;

    A = Max;
    if ( B > Max)
    Max = B;
    if ( C > Max)
    Max = C;
    if ( D > Max)
    Max = D;
    if ( E > Max)
    Max = E;

    cout<<"Largest is "<< Max;
    return 0;

}