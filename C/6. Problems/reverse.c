#include <stdio.h>

int main()
{
    // 123 - 321
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    // 123 % 10 = 3
    // 123 / 10 = 12

    int rev = 0;

    while(n > 0)
    {
        int d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }
    printf("rev = %d\n",rev);
}