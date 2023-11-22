#include <stdio.h>

int main()
{
    FILE* fp = fopen("file.txt","a");

    fprintf(fp,"\nThis is from new file appending program");

    fclose(fp);
}