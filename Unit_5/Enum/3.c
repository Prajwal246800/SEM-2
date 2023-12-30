#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

enum{mon=11,tue,wed,thu,fri,sat,sun};
//enum{mon=INT_MAX,tue,wed,thu,fri,sat,sun}; tue cannot take INT_MAX + 1 value

// enum{mon=1};  //error
int main()
{
    printf("%d",INT_MAX);
    return 0;
}