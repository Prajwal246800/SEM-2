// write a C progrm to print the reverse of the given number and check if it is a pallendrome
#include <stdio.h>

void reverse(int n)
{
    while (n != 0)
    {
        int e = n % 10;
        printf("%d", e);
        n = n / 10;
    }
}

void palendrome(int n)
{
    int m = n, a = 0;
    while (n != 0)
    {
        int e = n % 10;
        a = a * 10 + e;
        n = n / 10;
    }
    m == a ? printf("\nThe given number is pallendrome.") : printf("\nThe given number is not a pallendrome.");
}

int main()
{
    printf("Enter the number : ");
    int n;
    scanf("%d", &n);
    reverse(n);
    palendrome(n);
    return 0;
}