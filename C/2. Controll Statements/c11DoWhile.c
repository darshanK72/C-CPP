#include <stdio.h>

int main()
{
    int num, o;
    o = 43;

    do
    {
        printf("Guess the Number : ");
        scanf("%d", &num);

        if (num > o)
        {
            printf("Greater than original number, try again\n");
        }
        else if (num < o)
        {
            printf("Lesser than original number, try again\n");
        }
        else
        {
            printf("Success, you gess right number");
            break;
        }

    } while (num != o);
}