//wap to orint factorial of a given number 
#include<stdio.h>
int main()
{
   int f=1,i,n;
   printf("enter a number");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   f=f*i;
   }
   printf("the factorial of %d is %d",n,f);
   return 0;
}