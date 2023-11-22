#include <stdio.h>

void pattern(int n)
{
    int i,j,k,l;
    for(i = 1; i <= n; i++)
    {
         for(k = n-i; k >= 0; k--)
        {
            printf("  ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }

        for(l = i-1;l >= 1 ;l--)
        {
            printf("%d ",l);
        }

        printf("\n");
    }
}

int main()
{
//            1
//          1 2 1
//        1 2 3 2 1
//      1 2 3 4 3 2 1
//    1 2 3 4 5 4 3 2 1

    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    pattern(n);
}