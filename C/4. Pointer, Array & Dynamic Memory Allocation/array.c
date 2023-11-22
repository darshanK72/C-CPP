#include <stdio.h>

int main()
{
    int i;
    double values[10] = {14,15,63,235,53,63,34,63,5,633};

    printf("%lf\n",values[5]);
    printf("%lf\n",values[8]);

    for(i = 0; i < 10;i++)
    {
        printf("%lf ",values[i]);
    }

    printf("\n");

    for(i = 0; i < 10;i++)
    {
        printf("%lf ",*(values + i));
    }

}