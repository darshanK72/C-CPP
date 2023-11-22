#include <stdio.h>
#include <stdlib.h>

int main()
{
    setenv("PI","3.133",50);

    printf("%d",atoi(getenv("PI")));

}