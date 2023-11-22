#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter Number : ");
    scanf("%d",&n);

    int sum = 0;

    for(i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Total Sum = %d\n",sum);
}