#include<stdio.h>

int selectionsort(int a[],int n)
{
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    printf("The sorted elements are : ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}

int main()
{
    int a[11]={10,8,9,4,5,7,6,3,0,1,2};
    selectionsort(a,11);
    return 0;
}
