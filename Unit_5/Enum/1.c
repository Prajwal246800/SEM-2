#include<stdio.h>

enum days
{
    //name = 'A'  //valid
    // name = "pesu"  //invalid
    //name = a(variable name) //invalid
    
    sun=15,mon,tue='a',wed,thu,fri,sat
};

int main()
{
    printf("size of enum days : %d\n",sizeof(enum days));
    enum days d;

   // printf("Enter the value of thu\n");   
   // scanf("%d",&thu); //error

    printf("%d %d %d %d %d %d %d\n",sun,mon,tue,wed,thu,fri,sat);


    return 0;
}