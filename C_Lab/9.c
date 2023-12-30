// Write a C program to compare 2 dates and print appropriate messages. Use structure to store the date.
#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

void datecheck(struct date d1, struct date d2)
{
    if (d1.year > d2.year)
        printf("First date is after second date.\n");
    else if (d1.year < d2.year)
        printf("First date is before second date.\n");
    else
    {
        if (d1.month > d2.month)
            printf("First date is after second date.\n");
        else if (d1.month < d2.month)
            printf("First date is before second date.\n");
        else
        {
            if (d1.day > d2.day)
                printf("First date is after second date.\n");
            else if (d1.day < d2.day)
                printf("First date is before second date.\n");
            else
                printf("Both dates are same.\n");
        }
    }
}

int main()
{
    struct date d1, d2;
    printf("Enter the first date in dd-mm-year format : ");
    scanf("%d-%d-%d", &d1.day, &d1.month, &d1.year);
    // printf("%d %d %d ",d1.day,d1.month,d1.year);
    printf("Enter the second date in dd-mm-year format : ");
    scanf("%d-%d-%d", &d2.day, &d2.month, &d2.year);
    datecheck(d1, d2);
    return 0;
}