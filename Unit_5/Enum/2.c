#include<stdio.h>

enum days
{
    sun,mon,tue,wed,thu,fri,sat
};

int main()
{
    int n;
    enum days d;
    printf("enter the value : ");
    scanf("%d",&n);
    switch(n)
    {
        case sun:
            printf("sun");
            break;
        case mon:
            printf("mon");
            break;
        case tue:
            printf("tue");
            break;
        case wed:
            printf("wed");
            break;
        case thu:
            printf("thu");
            break;
        case fri:
            printf("fri");
            break;
        case sat:
            printf("sat");
            break;
        default:
            printf("invalid input");
            break;
    }
    return 0;
}