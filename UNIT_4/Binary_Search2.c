#include<stdio.h>

int binarysearch(int *p,int high,int ele)
{
    int low=0,mid,pos=-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(p[mid]==ele)
            return mid;
        else if (ele>p[mid])
            low=mid+1;
        else
            high=mid-1;
    }
    return pos;
}

int main()
{
    int pos,ele,a[20],n;
    printf("Enter the no of elements\n");
    scanf("%d",&n);
    printf("Enter %d no of elements\n",n);
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the search element \n");
    scanf("%d",&ele);
    pos=binarysearch(a,n,ele);
    if(pos==-1)
        printf("Element not found\n");
    else
        printf("Element found at position %d",pos);
    return 0;
}