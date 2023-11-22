#include <stdio.h>

int main()
{
    // Arithemetic Operators
    // +
    // -
    // *
    // /
    // %
    printf("Arithemetic Operators : \n");
    int a = 34;
    int b = 13;

    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b;

    printf("a + b =  %d\n",sum);
    printf("a - b =  %d\n",sub);
    printf("a * b = %d\n",mul);
    printf("a / b = %d\n",div);
    printf("a mod b = %d\n\n",mod);

    // Assignment Operators
    // =
    // +=
    // -=
    // *=
    // /=
    // %=
    printf("Assignment Operators :  \n");

    int x = 20;
    printf("x = %d\n",x);

    x += 4;
    printf("x += %d\n",x);

    x -= 3;
    printf("x -= %d\n",x);

    x *= 4;
    printf("x *= %d\n",x);

    x /= 2;
    printf("x /= %d\n",x);

    x %= 2;
    printf("x mod= %d\n\n",x);

    // Relational Operators
    // >
    // <
    // >=
    // <=
    // == 
    // !=

    printf("Relational Operators : \n");
    int p= 3;
    int q = 12;

    int result = p > q;
    printf("p > q = %d\n",result);

    result = p < q;
    printf("p < q = %d\n",result);

    result = p >= q;
    printf("p >= q = %d\n",result);
    
    result = p <= q;
    printf("p <= q = %d\n",result);

    result = p == q;
    printf("p == q = %d\n",result);

    result = p != q;
    printf("p != q = %d\n\n",result);

    // Logical Operators
    // &&
    // ||
    // !

    printf("Logical Operators : \n");

    int logic = (a > b) && (b > a);
    printf("(a > b) && (b < a) = %d\n",logic);

    logic = (a > b) || (b > a);
    printf("(a > b) || (b > a) = %d\n",logic);

    logic = !(a > b);
    printf("!(a > b) = %d\n\n",logic);

    // Bitwise Operators
    // &
    // |
    // ~
    // <<
    // >>

    printf("5 & 3 = %d\n",5 & 3);
    printf("5 | 3 = %d\n",5 | 3);
    printf("~5 = %d\n",~5);
    printf("32<<2 = %d\n",32<<2);
    printf("32>>2 = %d\n\n",32>>2);

    // Unary Opetators
    // ++
    // --
    printf("Unary Operators : \n");

    x = 2;

    printf("x = %d\n",x);
    printf("x++ = %d\n",x++);
    printf("x-- = %d\n",x--);
    printf("++x = %d\n", ++x);
    printf("--x = %d\n\n",--x);


    // Ternery Operator

    printf("Ternery Opetator : \n");
    result = (a > b) ? 1:0;
    printf("(a > b) ? 1 : 0 = %d\n\n",result);







}