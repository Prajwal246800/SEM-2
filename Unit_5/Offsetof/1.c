#include<stdio.h>
#include<stddef.h>

union A
{
    int a;
    float b;
};
struct B
{
    int a;
    float b;
};

void main()
{
    printf("%lu\n",offsetof(union A , a));
    printf("%lu\n",offsetof(union A , b));
    printf("%lu\n",offsetof(struct B , a));
    printf("%lu\n",offsetof(struct B , b));
}