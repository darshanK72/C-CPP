#include <stdio.h>

void pattern2(int n)
{
    int i,j;
    
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

}

int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    pattern2(n);

}