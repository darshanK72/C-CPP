//Write a programm to find out Nth power of given Number

#include <iostream>
using namespace std;

int main()
{
    int n,m;
    int i = 0;
    long result =1;

    cout<<"Enter Number"<<endl;
    cin>>n;
    cout<<"Enter Power"<<endl;
    cin>>m;

    do{
        //If power is 0 then result is one
        if( m == 0)
        break;
        
        //for example n = 10
        //result = 1 * 10
        //result = 10 * 10
        //result = 100 * 10
        // repeated up to Nth power of number 
       else
       {
           result = result * n;
            ++i;
       }
        
    }while(i < m);

    cout<<m<<"th Power of "<<n<<" is "<<result;

    return 0;
}