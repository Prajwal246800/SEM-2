// Write a C function strend(s,t), which returns 1 if the string t occurs at the end of the string s, and zero otherwise.
#include <stdio.h>
#include <string.h>

int strend(char s[], char t[])
{
    int i, m = strlen(s), n = strlen(t);
    if (n > m)
        return 0;
    else
    {
        for (i = 0; i < m - n; i++)
            ;
        int j = 0;
        for (i; i < m; i++, j++)
        {
            if (s[i] != t[j])
                return 0;
            // j++;
        }
        return 1;
    }
}

int main()
{
    char s[30] = "Prajwal", t[30] = "wal";
    if (strend(s, t))
        printf("The string %s occurs at last of the string %s", t, s);
    else
        printf("The string %s doesnot occur at last of the string %s", t, s);
    return 0;
}