#include <stdio.h>

int main()
{

    int a = 42;
    int b = 75;
    int c = 5234;

    if((a > b) && (a > c))
    {
        printf("a is Greater\n");
    }
    else if((b > a) && (b > c))
    {
        printf("b is Greater\n");
    }
    else
    {
        printf("c is Greater\n");
    }


}