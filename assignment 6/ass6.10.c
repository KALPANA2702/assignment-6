//wap tp print reverse of a number
#include<stdio.h>
int main()
{
    int n,r,i,rn=0;
    printf("enter any  number");
    scanf("%d",&n);
    for(i=n;n!=0;n=n/10)
    {
        r=n%10;
        rn=rn*10+r;
    }
    printf("the reverse number of %d is %d",n,rn);
    return 0;
}