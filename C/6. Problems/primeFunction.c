#include <stdio.h>

int isPrime(int n)
{
    int i;
    int f = 1;

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
           f = 0;
           break;
        }
    }

    return f;
}

int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    int r = isPrime(n);

    if(r == 0)
    {
        printf("Not Prime Number");
    }
    else
    {
        printf("Prime Number");
    }

}