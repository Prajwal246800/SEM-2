// Write a C program to remove all the duplicates in the given string

/*#include<stdio.h>
#include<string.h>

int isinstr(char a[],char c,int i)
{
    for (int j=0;j<i;j++)
    {
        if(a[j]==c)
        {
            a[j]=0;
            return 0;
        }
    }
    return 1;
}

void removedup(char a[],int n)
{
    for (int i;i<n;i++)
    {
        if (isinstr(a,a[i],i))
            printf("%c",a[i]);
    }
}

int main()
{
    char a[30];
    printf("Enter the string : ");
    scanf("%s",a);
    removedup(a,strlen(a));
    //printf("%d",strlen(a));
    return 0;
}*/

// Write a C program to remove all the duplicates in the given string
#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    int i, j, k;
    printf("Enter the String:");
    fgets(s, 50, stdin);
    for (i = 0; i < strlen(s); i++)
    {
        for (j = i + 1; s[j] != '\0'; j++)
        {
            if (s[j] == s[i])
            {
                for (k = j; s[k] != '\0'; k++)
                    s[k] = s[k + 1];
            }
        }
    }
    printf("String ater removing duplicate char = %s", s);
    return 0;
}
