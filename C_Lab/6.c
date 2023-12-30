// Write a C function to find the Inversion Count in an array. Given an array a[], two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
#include <stdio.h>

void findinversioncount(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                count++;
    printf("The inversion count is %d", count);
}

int main()
{
    int a[30], n;
    printf("Enter the numbers you want to enter : ");
    scanf("%d", &n);
    printf("Enter the %d elements : ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    findinversioncount(a, n);
    return 0;
}