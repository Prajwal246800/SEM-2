#include<stdio.h>
void main()
{
	char name[20],ch;
	printf("Enter the file name:");
	scanf("%s",name);
	FILE *fp = fopen(name,"r");
	if(fp == NULL)
		printf("\nCan't open file\n");
	else{
		while((ch=fgetc(fp)) != EOF)
			fputc(ch,stdout);
	fclose(fp);
	}
}