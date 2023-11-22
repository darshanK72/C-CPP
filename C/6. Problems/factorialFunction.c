#include <stdio.h>

int factorial(int n)
{
    int i;
    int fact = 1;

    for(i = 1;i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    printf("factorial of %d is %d",n,factorial(n));
}