//Write the programm for determining second largest number from given 5 Nunbers
// In this programm we use an algorithim 
// this programm also consider about two or more equal numbers 
        
#include<iostream>
using namespace std;

int main()
{
    int A,B,C,D,E;
    int Max = 0;
    int Max2 = 0;

    cout<<"Enter 5 Numbers "<<endl;
    cin>>A>>B>>C>>D>>E;

    // if A> Max then assign A to Max and Max to Max2
    if ( A > Max)
    {
        Max2 = Max;
        Max = A;
    }
    //if B> Max then assign B to max and A to Max 2 (if not, then kept previous and proceed for next)

    if ( B > Max)
    {
        Max2 = Max;
        Max = B;
    }
    if ( C > Max)
    {
        Max2 = Max;
        Max = C;
    }
    if ( D > Max)
    {
        Max2 = Max;
        Max = D;
    }
    //at last if E is largest then one before that that means D is second largest
    
    if ( E > Max)
    {
        Max2 = Max;
        Max = E;
    }
    cout<<"The Second Largest Number is "<<Max2;

    return 0;
}