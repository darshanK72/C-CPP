#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *ptr = (int*) malloc(5*sizeof(int));

    for(i = 0; i < 5; i++)
    {
        printf("%d ",ptr[i]);
    }

    printf("\n");

    ptr[0] = 120;
    ptr[1] = 121;
    ptr[2] = 633;
    ptr[3] = 523;
    ptr[4] = 526;

    for(i = 0; i < 5; i++)
    {
        printf("%d ",ptr[i]);
    }

    printf("\n");
    
    realloc(ptr,10*sizeof(int));
    ptr[5] = 634;
    ptr[6] = 222;
    ptr[7] = 663;
    ptr[8] = 536633;
    ptr[9] = 5244246;

    for(i = 0; i < 10; i++)
    {
        printf("%d ",ptr[i]);
    }

    free(ptr);
}