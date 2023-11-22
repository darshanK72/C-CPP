#include <stdio.h>

int main()
{
    int x = 534;

    int *y = &x;

    printf("x = %d\n",x); // 534
    printf("&x = %d\n",&x); // &x 234324324

    printf("y = %d\n",y); // 234324324
    printf("*y = %d\n",*y); // 534
    printf("&y = %d\n",&y); // 4394872934
}