#include <stdio.h>

int main()
{
    char op;
    printf("Enter Operator : ");
    scanf("%c",&op);

    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    switch(op)
    {
        case '+':
        printf("Sum = %d\n",a + b);
        break;

        case '-':
        printf("Sub = %d\n",a - b);
        break;

        case '*':
        printf("Mul = %d\n",a*b);
        break;

        case '/':
        printf("Div = %d\n",a/b);
        break;

        default:
        printf("Wrong Operator");
        break;
    }
}