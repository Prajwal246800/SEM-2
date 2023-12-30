// write a C program to print union and intersection of given array
#include <stdio.h>

int isinarray(int a[], int size, int ele)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == ele)
            return 0;
    }
    return 1;
}

void findunion(int a[], int size1, int b[], int size2)
{
    int unionarray[size1 + size2], sizeu = 0;
    for (int i = 0; i < size1; i++)
    {
        if (isinarray(unionarray, sizeu, a[i]))
        {
            printf("%d ", a[i]);
            unionarray[sizeu++] = a[i];
        }
    }
    for (int i = 0; i < size2; i++)
    {
        if (isinarray(unionarray, sizeu, b[i]))
        {
            printf("%d ", b[i]);
            unionarray[sizeu++] = b[i];
        }
    }
}

void findintersection(int a[], int size1, int b[], int size2)
{
    for (int i = 0; i < size1; i++)
    {
        if (!isinarray(b, size2, a[i]))
            printf("%d ", a[i]);
    }
}

int main()
{
    int a[30] = {1, 2, 3, 4}, b[30] = {1, 2, 3, 10}, m, n;
    // printf("%d\n",sizeof(a)/sizeof(a[0]));
    printf("Enter no of elements in first set : ");
    scanf("%d", &m);
    printf("Enter first set of elements : ");
    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);
    printf("Enter no of elements in second set : ");
    scanf("%d", &n);
    printf("Enter first set of elements : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    printf("Union is : ");
    findunion(a, m, b, n);
    printf("\nIntersection is : ");
    findintersection(a, m, b, n);
    return 0;
}