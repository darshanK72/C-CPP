#include <stdio.h>

void add()
{
    int a,b;
    printf("Enter two Numbers : ");
    scanf("%d %d",&a,&b);
    printf("Sum = %d\n\n",a+b);
}

int main()
{
    add();
    add();

}