// write a C program to check whether the given number is a prime number and use that to find the next prime number greater than the given number
#include <stdio.h>

int checkprime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= (n / 2); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

void getnextprime(int n)
{
    while (!checkprime(++n))
        ;
    printf("The next prime number is %d\n", n);
}

int main()
{
    int n, res;
    printf("Enter the number : ");
    scanf("%d", &n);
    res = checkprime(n);
    if (res == 0)
        printf("The given number is not a prime number\n ");
    else
        printf("The given number is a prime number\n");
    getnextprime(n);
    return 0;
}