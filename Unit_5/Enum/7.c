#include<stdio.h>
enum exa1{jan=1,feb,mar,apr,may,june,jly,aug,sep,oct,nov,dec};
//enum exa2{x,y,z};
int main()
{
	/*enum exa1 e1 = y;
	enum exa2 e2 = c;
	printf("%d and %d\n",e1,e2);*/
	
	/*for(enum exa1 i=jan;i<=dec;i+=2)
		printf("%d ",i);*/
	printf("%d\n",dec*mar);
	enum exa1 e = may & 1;
	printf("%d\n",e);
	printf("%d\n",june&&nov);
	printf("%d\n", mar == 3);	
	printf("%d\n",(apr>jan)?apr:jan);
	return 0;
}