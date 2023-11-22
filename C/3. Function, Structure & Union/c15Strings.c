#include <stdio.h>
#include <string.h>


int main()
{
    char name1[] = "Darshan Khairnar";
    printf("%s\n",name1);

    char name2[20];
    scanf("%s",name2);
    printf("%s\n",name2);

    char name3[20];
    gets(name3);
    printf("%s\n",name3);

    char *name4;
    // scanf("%s",name4);
    gets(name4);
    // printf("%s\n",name4);
    puts(name4);

    printf("Length of String : %d\n",strlen(name4));
    printf("Reverse of String : %s\n",strrev(name4));
    printf("Uppercase of String : %s\n",strupr(name4));
    printf("Lowercase of String : %s\n",strlwr(name4));

}