#include<stdio.h>
#include<string.h>
int product(int N,...)
{
int loop,Result;
va_list va;
va_start(va,N);//init with number of arguments
//access arguments & calculating Product
Result=1;
for(loop=0;loop<N;loop++)
{
Result*=va_arg(va,int);
}
return Result;
}
int main()
{
printf("Product =%d\n",Product(2,2,20));
printf("Product =%d\n",product(4,1,2,3,3));
printf("Product =%d\n",product(6,10,2,3,3,4,5));
return 0;
}
