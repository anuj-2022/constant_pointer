#include<stdio.h>
//in const ptr we can not cange the holding the starting address of variable but we can change the variable value
int main(void)
{
    int var1 = 0, var2 = 0;
    int *const ptr = &var1;
 //   ptr = &var2;
    var1=22;
    *ptr = 345;
    printf("%d\n", *ptr);

    return 0;
} 
