#include <stdio.h>

int main()
{
    char c;
    printf("Enter Character : ");
    scanf("%c",&c);
    printf("c = %c\n",c);


    int x;
    printf("Enter Number : ");
    scanf("%d",&x);
    printf("x = %d\n",x);

    float f;
    printf("Enter Float Number : ");
    scanf("%f",&f);
    printf("f = %f\n",f);
    printf("f = %0.3f\n",f);
    printf("f = %0.15f\n",f);


}