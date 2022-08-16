#include<stdio.h>
static inline int multiply(int a, int b)
{
   return a*b;
}
int main()
{
   printf("The Result of Multiplication is: %d\n",multiply(5,6));
}
