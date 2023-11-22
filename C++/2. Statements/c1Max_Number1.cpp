// Find the largest number among the given numbers A and B and C and print which is maximum.


#include <iostream>
using namespace std;

int main()
{
    int A,B,C,Max;
    cout <<"Enter Three Numbers"<<endl;
    cin >>A>>B>>C;
    
    if(A > B)
    {
        if (A > C)
        Max = A;
        else
        Max = C;
    }
    if (B > A)
    {
        if (B > C)
        Max = B;
        else
        Max = C;
    }

    // (Edit) Previous programm did not considered that if two or three of them are equal 
    // But after editing we can 
    
    if (A==B)
    {
        if (A > C)
        Max = A;
        else
        Max = C;
    }
    if (A==C)
    {
        if (A > B)
        Max = A;
        else
        Max = B;
    }



    cout<<"Largest is: "<< Max;

    return 0;
}