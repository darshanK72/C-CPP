// Find out the Largest Number among the three given Numbers A,B and C
// The difference between Max_Number1 and Max_Number2 is that in first programm we do not consider that Numbers can be equal
// But in this programm we can easily find max though some of them are equal

#include <iostream>
using namespace std;

int main()
{
    int A,B,C,Max;
    cout<<"Enter the Numbers"<<endl;
    cin>>A>>B>>C;

    if (A >= B && A >= C)
    Max = A;
    if (B >= A && B >= C)
    Max = B;
    if (C >= A && C >= B)
    Max = C;
    
    cout<<"The Largest Number is "<< Max;

    return 0;
}