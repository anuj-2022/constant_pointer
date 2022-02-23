#include <stdio.h>

int add(int,int);

int main()
{
   int a,b;  
   int (*ip)(int,int);  // Declaration of a function pointer.  
   int result;

   printf("Enter the values of a and b : ");
   scanf("%d %d",&a,&b);

   ip=add;  // Assigning address of func to the ip pointer.
   printf("the address &ip=%p ip=%p &add=%p\n",&ip,ip,add); 
   result=(*ip)(a,b);// Calling a function using function pointer.   

   printf("Value after addition is : %d\n",result);
    return 0;
}
int add(int a,int b)
{
    int c=a+b;
    return c;
}  

