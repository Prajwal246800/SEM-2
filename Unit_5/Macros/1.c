#include<stdio.h>
#define squ(x) x*x
#define cub(x) squ(squ(x))

int main()
{
    printf("Enter the number : ");
    int n;
    scanf("%d",&n);
    printf(" The square is %d and cube is %d ",squ(n),cub(n));
    return 0;
}