#include<stdio.h>
enum days
{
	//sun=1.7 error
	//sun="pesu" error
	//sun='a' valid 
	sun=1,mon,tue=10,wed,thu=-6,fri,sat
}d1,d2;
int main()
{
	printf("Size of enum is %lu\n",sizeof(d1));
	//sun=12;//error
	printf("%d %d %d %d %d %d %d\n",sun,mon,tue,wed,thu,fri,sat);
	return 0;
}