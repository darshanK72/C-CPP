#include <iostream>

using namespace std;

int fib (int a)
{
    if(a<=1)
        return 1;
    
    return  a * fib(a-1);

}

int main()
{
    int num,fact;
    cout<<"Enter The Number : "<<endl;
    cin>>num;
    fact = fib(num);
    cout<<"The Factroial of "<<num<<" is "<<fact;
}