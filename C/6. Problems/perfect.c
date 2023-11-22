#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter Number : ");
    scanf("%d",&n);

    int factorsum = 0;

    for(i = 1; i <= n/2; i++)
    {
        if(n%i == 0)
        {
            factorsum += i;
        }
    }

    if(factorsum == n)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not Perfect Number");
    }
}