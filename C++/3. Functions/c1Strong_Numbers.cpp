#include <iostream>
using namespace std;

int find_fact(int n)
{
    if (n <= 1)
        return 1;
    else
    {
        return n * find_fact(n - 1);
    }
}
int find_strong(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum = sum + find_fact(n%10);
        n = n/10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        if (i == find_strong(i))
        {
            cout<<i<<endl;
        }
    }
}