#include <stdio.h>

int main()
{
    int i = 1;
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    
    while(i <= 10)
    {
        printf("%d x %d = %d\n",num,i,num*i);
        i++;
    }
}