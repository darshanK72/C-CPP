#include <stdio.h>

int main()
{
    int i;
    int abc[10] = {1,2,3,42,52,12,112,4,41,522};

    int arr[5];

    for(i = 0; i < 5; i++)
    {
        scanf("%d",&abc[i]);
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }

    for(i = 0; i < 10; i++)
    {
        printf("the number is %d\n",arr[i]);
    }
}