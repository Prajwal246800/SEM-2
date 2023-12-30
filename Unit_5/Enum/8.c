#include<stdio.h>
enum days
{
	sun=1,mon,tue,wed,thu,fri,sat
};
void print(enum days d);
int main()
{
	enum days d;
	printf("Enter the no:");
	scanf("%d",&d);
	print(d);
	return 0;
}
void print(enum days d)
{
	switch(d)
	{
		case sun:printf("Sunday\n");break;
		case mon:printf("Monday\n");break;
		case tue:printf("Tuesday\n");break;
		case wed:printf("Wedenday\n");break;
		case thu:printf("Thursday\n");break;
		case fri:printf("Friday\n");break;
		case sat:printf("Saturday\n");break;
		default:printf("Invalid choice\n");
	}
}
		