#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter Number : ");
    scanf("%d",&n);
    int f = 1;


    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
           f = 0;
           break;
        }
    }

    if(f == 0)
    {
        printf("Not Prime Number");
    }
    else
    {
        printf("Prime Number");
    }
}