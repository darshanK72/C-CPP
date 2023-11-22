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


int nCr(int n,int r)
{
    return fact(n) / (fact(r) * fact(n-r));
}


int main()
{
    int n,r;
    printf("Enter N : ");
    scanf("%d",&n);
    printf("Enter R : ");
    scanf("%d",&r);

    int result = nCr(n,r);
    printf("result = %d\n",result);

}