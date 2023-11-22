#include <stdio.h>

int main()
{
    // int arr[5][6] = {{1,2,3,4,5,6},{1,2,3,234,5,6},{1,743,3,4,5,6},{1,2,3,4,5,6},{1,2,234,4,5,6}};

    int arr[4][3];

    for(int i = 0;i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i = 0;i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}