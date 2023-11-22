// 5! = 1 * 2 * 3 * 4 * 5 = 120
#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter Number : ");
    scanf("%d",&n);

    int fact = 1;

    for(i = 1;i <= n; i++)
    {
        fact *= i;
    }
    

    printf("factorial of %d is %d",n,fact);

}