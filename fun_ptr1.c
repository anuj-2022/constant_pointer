#include <stdio.h>

int sum(int num1, int num2);
int sub(int num1, int num2);
int mult(int num1, int num2);
int div(int num1, int num2);

int main()
{  
  int x, y, choice, result;
  int (*ope[4])(int, int);// Declaration of a function pointer. 

  ope[0] = sum;// Assigning address of func to the ope pointer. 
  ope[1] = sub;// Assigning address of func to the ope pointer. 
  ope[2] = mult;// Assigning address of func to the ope pointer. 
  ope[3] = div;// Assigning address of func to the ope pointer. 

  printf("Enter two integer numbers: ");
  scanf("%d%d", &x, &y);

  printf("Enter 0 to sum\n1 to subtract\n2 to multiply\n3 to divide: ");
  scanf("%d", &choice);

  result = ope[choice](x, y);// Calling a function using function pointer, and indirection operator can be removed.
  printf("%d\n", result);

  return 0;
}

int sum(int x, int y)
{
        return(x + y);
}
int sub(int x, int y)
{
        return(x - y);
}
int mult(int x, int y)
{
        return(x * y);
}
int div(int x, int y)
{
if (y != 0) 
        return (x / y);

else
        return 0;
}


