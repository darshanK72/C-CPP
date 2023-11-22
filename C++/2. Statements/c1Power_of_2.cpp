//write a programm to take m as number and N as power
//if N is power of 2 then calculate M raised to N by using product of M only n times
// if N is not a power of 2 then retur -1 as result

#include <iostream>
using namespace std;

int main()
{
    int N,M,i = 1, c = 0;
    long result = 1;

    cout<<"Enter the Power"<<endl;
    cin>>N;
    cout<<"Enter the Number"<<endl;
    cin>>M;

    // this loop is required for determining whether N is power of 2 or not
    // it calculates how many times 2 present in N using i and c variables
    // for example suppose N = 8, then i = 8 and c = 3 , thus we get 8 as 2 raised to 3
    do{
        i = i * 2;
        c++;
    }while(i < N);

    // if the N is not power of 2 then get result as -1
    // for example 6, 10 are not power of 2

    if(i != N)
    {
        result = -1;
    }
    else
    {
        i = 1;
        cout<<N<<" is in Power of 2"<<endl;
        // Calculates the M raised to N by multiplying N raised to 2,  c times.
        do
        {
            M = M * M;
            i++;
        }while(i <= c);

        result = M;
    }
    
    
    cout<<result;

    return 0;
}