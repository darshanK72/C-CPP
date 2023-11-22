#include <stdio.h>
#include <string.h>


struct Student
{
   int age;
   char name[20];
   float marks;
   char div;
};


int main()
{
    int x;

    struct Student s1;
    s1.age = 20;
    strcpy(s1.name,"Suhbham");
    s1.marks = 80.50;
    s1.div = 'A';

    printf("Name = %s\n",s1.name);
    printf("Age = %d\n",s1.age);
    printf("Marks = %f\n",s1.marks);
    printf("Division = %c\n",s1.div);


}