// write C function to reverse array elements using index notation and pointer notation
#include <stdio.h>

// using array notation
void reversearray(int a[], int size)
{
    int i = 0, j = size - 1;
    while (i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}

// using pointer notation
void reversearray1(int *start, int size)
{
    int *last = start + size - 1;
    while (start < last)
    {
        int temp = *start;
        *start = *last;
        *last = temp;
        start++;
        last--;
    }
}

int main()
{
    int a[50], n;
    printf("Enter the no of elements : ");
    scanf("%d", &n);
    printf("Enter array elements : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    reversearray(a, n);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    reversearray1(a, n);
    printf("\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}