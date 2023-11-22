#include <stdio.h>

int main()
{
    FILE* fp = fopen("file.txt","r");

    char ch;

    while(1)
    {
        ch = getc(fp);

        if(ch == EOF)
        {
            break;
        }
        printf("%c",ch);
    }

    fclose(fp);
}