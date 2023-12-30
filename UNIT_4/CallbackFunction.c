#include<stdio.h>

void callbackfunction(int res)
{
    printf("This is a callback function value is %d\n",res);
}

void samplefunction(int value ,void (*ptr)(int))
{
    printf("This is inside a sample function\n");
    ptr(value++);
    
}

int main()
{
    printf("This is a main function\n");
    samplefunction(5,callbackfunction);
    return 0;
}