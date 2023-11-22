// Write the programm for finding out the Sum of digits of 3digit Number enter by the user

#include <iostream>
using namespace std;

int main()
{
    int Number,d1,d2,d3,Sum;
    cout<<"Enter the Three Digit Number"<<endl;
    cin>>Number;
    // In this Programm for 100's place we divide Number by 100 and get quotint as d1
    d1 = Number/100;
    // then 10's place number can obtained by dividing reminder by 10
    d2 = (Number%100)/10;
    // then unit digit number can obtain by using modulus of reminder
    d3 = (Number%100)%10;

    Sum = d1 + d2 + d3 ;

    cout<<"The Sum of Digits is "<< Sum;

    return 0;
}