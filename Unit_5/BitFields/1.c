#include<stdio.h>
#include<stdlib.h>

struct A
{
   unsigned int a:4;
   unsigned int b:4;
};

struct
{
   unsigned int age:4;
}Age;

int main()
{
   struct A A;
   //scanf("%d",A.a);
   A.a = 10;
   A.b = 21;
   printf("%d\n",A.a);
   printf("%d\n",A.b);
   printf("%d\n",sizeof(struct A));

   Age.age=28;
   printf("%d\n",Age.age);
   return 0;
}