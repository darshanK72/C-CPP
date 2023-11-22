#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int temp = n;


    int rev = 0;

    while(n > 0)
    {
        int d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }

    if(rev == temp)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not Palindrome Number");
    }
}