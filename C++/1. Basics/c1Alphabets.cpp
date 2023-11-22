#include <iostream>

using namespace std;

int main()
{
    char ch = 'A';
    for(int i = 0; i< 58; i++)
    {
        if(i>25 && i<32)
        {
            continue;
        }
        cout<<(ch + i)<<" "<<(char)(ch + i)<<endl;
    }
}