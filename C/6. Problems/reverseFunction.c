#include <stdio.h>

int reverse(int n)
{
    int rev = 0;

    while(n > 0)
    {
        int d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }

    return rev;
}

int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    printf("rev = %d\n",reverse(n));
}