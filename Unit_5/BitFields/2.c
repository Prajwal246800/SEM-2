#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

struct
{
    union 
    {
        int a;
        float b;
        char c[10];
    };
    
}a;

int main()
{
    a.a=10;
    printf("%d\n",sizeof(a));
    return 0;
}