//wap to calculate LCM of two number
#include<stdio.h>
int main()
{
    int a,b,l,i;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a*b;i++)
    if((i%a==0) && (i%b==0) )
    break;
    l=i;
    printf("the lcm of %d and %d is %d",a,b,l);
    return 0;
}