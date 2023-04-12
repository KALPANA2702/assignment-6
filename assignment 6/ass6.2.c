//wap to print sum of first n even natural numbers
#include<stdio.h>
int main()
{ 
   int i,n,e,s=0;
   printf("enter the number");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    e=2*i;
    printf("\n%d",e);
    s=e+s;
   }
   printf("\nthe sum of first %d natural even number is %d",n,s);
   return 0;
}