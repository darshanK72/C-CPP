#include <stdio.h>

int main()
{
    // type varName = value;
    printf("hello world\n");

    char c = 'f'; // 1 byte
    printf("c = %c\n",c);

    short int s = 32767; // 2 bytes
    printf("s = %d\n",s);

    int x = 13234324; //4 bytes 
    printf("x = %d\n",x);

    float f = 23.5222; // 4 bytes
    printf("f = %f\n",f);
    printf("f = %0.2f\n",f);
    printf("f = %10.2f\n",f);
    printf("f = %-10.2f",f);
    printf("xxxx\n");

    long l = 234893; // 8 bytes
    printf("l = %ld\n",l);

    double d = 23424234.2334343; // 8 bytes
    printf("d = %lf\n",d);

    
}