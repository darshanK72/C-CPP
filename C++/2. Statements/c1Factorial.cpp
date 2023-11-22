//Write the programm to find out factorial of given number

#include <iostream>
using namespace std;

int main()
{
    int N;
    long int factorial = 1; //declare first factorial = 1

    cout<<"Enter the Number"<<endl;
    cin>>N;

    for(int i = 0; i < N; ++i)
    {
        factorial = factorial * (i + 1);
        // Multiply 1 * 2 for the first
        // Multiply 2 * 3
        // Multiply 6 * 4 and so on up to N;    
    }

    cout<<"Factorial of given Number is : "<<factorial;

    return 0;
}