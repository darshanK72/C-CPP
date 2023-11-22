#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;



string convert(long int DecNo)
{
    string BinNo = "";
    while(DecNo > 0)
    {
        BinNo = BinNo + char(DecNo%2 + 48);
        DecNo /= 2;
    }
    cout<<BinNo<<endl;
    reverse(BinNo.begin(),BinNo.end());
    return BinNo;
    /*
    long long int originalNO = 0;
    int j = 0;
    for(int i = (BinNo.length()-1); i >= 0; i--)
    {
        originalNO = originalNO + ((int(BinNo[i]) - 48) * pow(10,j));
        j++;
    }
    return originalNO;*/
}
int main()
{
    long int DecNo;
    cout<<"Enter Decimal Number :";
    cin>>DecNo;

    cout<<convert(DecNo)<<endl;
}