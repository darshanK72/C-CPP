#include <stdio.h>

int main()
{
    int n,i,flag = 0;

    printf("Enter Number : ");
    scanf("%d",&n);

    for(i= 2; i < n; i++)
    {
        if(n%i == 0)
        {
            printf("Not Prime Number\n");
            flag = 100;
            break;
        }
    }

    if(flag == 0)
    {
        printf("Prime");
    }

    
}