// write a C program to print a pyramid pattern with numbers increased by 1
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : \n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = i; j < n; j++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("%d ", i);
        printf("\n");
    }
    return 0;
}