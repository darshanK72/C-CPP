#include <stdio.h>

int fact(int n)
{
    int i;
    int f = 1;

    for(i = 1;i <= n; i++)
    {
        f *= i;
    }

    return f;
}

int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    printf("factorial of %d is %d\n",n,fact(n));


}