#include <stdio.h>

int main()
{
    FILE* fp = fopen("file.txt","w");

    fprintf(fp,"This is from new file writing program");

    fclose(fp);
}