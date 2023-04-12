//wap to count the digit of a given number
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter a number");
    scanf("%d",&n);
while(n!=0)
{
   n=n/10;
   count++;
}
printf("the total digit of %n is %n",n,count);
return 0;
}