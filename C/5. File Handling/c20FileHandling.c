#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE* fp;
    char ch;

    fp = fopen("C:\\Users\\DARSHAN KHAIRNAR\\Desktop\\first.txt","a+");
    if(fp == NULL)
    {
       printf("\n File not Found");
       return 0;
    }
    while(1)
    {
       fscanf(fp,"%c",&ch);
       if(feof(fp))
       {
          break;
       }
       printf("%c",ch);
    }


    fprintf(fp,"this is from the a+ where we can append and read data from file");
    fclose(fp);
}