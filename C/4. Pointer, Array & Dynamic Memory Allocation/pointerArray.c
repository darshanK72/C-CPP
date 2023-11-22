#include <stdio.h>

int main()
{
    int i;
    int arr[10] = {1,2,34,53,42,52,23,42,5,2};

    for(i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("%d\n",arr);
    printf("%d\n",*arr);

    printf("%d\n",*(arr + 5));

    for(i = 0; i < 10; i++)
    {
        printf("%d ",*(arr + i));
    }
}