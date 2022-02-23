#include<stdio.h>
//in pointer constant we can change the starting holding variable but we can not direct assign the value to ptr
int main(void)
{
    int var1 = 0, var2 = 5;
    const int *ptr = &var1;
    ptr = &var2;
//    *ptr = 99;
//    var1=22;
    printf("%d\n", *ptr);

    return 0;
} 
