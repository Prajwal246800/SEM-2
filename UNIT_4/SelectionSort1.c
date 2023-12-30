#include<stdio.h>

int swap(int *a , int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int sort(int *p, int n)
{
    for (int i=0;i<n;i++)
    {
        for ( int j=i+1;j<n;j++)
        {
            if (p[i]>p[j])
            {
                swap(&p[i],&p[j]);
            }
        }
    }
}

int main()
{
    int a[10]={1,24,54,64,787,21,353,3,34,12};
    sort(a,10);
    for (int i=0;i<10;i++)
    printf("%d\n",a[i]);
    return 0;
}