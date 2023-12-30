#include<stdio.h>
#include<stdlib.h>
#include<string.h>

union test
{
    int a;
    float b;
    char c[10];
};

void main()
{
    union test obj;
    obj.a=10;
    printf("%d\n",obj.a);
    obj.b=3.2;
    printf("%.1f\n",obj.b);
    strcpy(obj.c,"Prajwal\n");
    printf("%s",obj.c);
    obj.a=2;
    printf("%d\n",obj.a);
    printf("%.1f\n",obj.b);
    printf("%s",obj.c);
}