#include<stdio.h>

void main()
{
const volatile int a=5;
volatile const int b=5;
//printf("The value of volatile is %d %d %d\n",++a,++a,++a);
printf("The value of int is %d %d %d\n",b,b,b);
}

