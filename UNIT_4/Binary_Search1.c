#include<stdio.h>
#include<stdlib.h>
int binary(int a[],int low,int high,int key)
{
    int mid,pos=-1;
    while(low<high)
    {
        mid = (high + low + 1)/2;
        if(a[mid]==key)
        {
            pos = mid;
            break;
        }
        else if(a[mid]>key)
        {
            low = mid+1;
        }
        else
            high=mid-1;
    }
    return pos;
}
int iseven(int key)
{
    if(key%2==0)
        return 1;
    else 
        return 0;
}
int isless22(int key)
{
    return key<22;
}
int main()
{
    int a[]={11,13,16,18,21,24,28,34,39,64};
    int low=0,key,high=sizeof(a),pos;
    printf("enter the search element : ");
    scanf("%d",&key);
    if(iseven(key))
    {
        if(isless22(key))
            pos = binary(a,low,high,key);
            if(pos=-1)
                printf("element not found");
            else
                printf("element found at position pos");
    }
    else
        printf("Element not found or not satisfied");
}