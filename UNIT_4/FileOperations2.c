#include<stdio.h>
void main()
{
	FILE *fp = fopen("sample.txt","a");
	char str[100];
	printf("Enter the string:");
	//scanf("%s",str);
	gets(str);
	//fgets(str,stdin);
	fputs(str,fp);
	fclose(fp);
}