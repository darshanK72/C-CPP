#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    // int arr[5] = {1,2,3,4,5};
    
    // for(i = 0; i < 5; i++)
    // {
    //     printf("%d ",arr[i]);
    // }

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

    free(ptr);
}