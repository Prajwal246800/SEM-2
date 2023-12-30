#include<stdio.h>
#include<string.h>

struct
{
    union
    {
        int a;
        char b[10];
    };
}obj;

int main()
{
    obj.a=10;
    printf("%d\n",obj.a);
    strcpy(obj.b,"Hello");
    printf("%d\n",obj.a);
    printf("%s\n",obj.b);
    return 0;
}