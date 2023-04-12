//wap to print sum of first N natural number
int main()
{
    int i,n,s=0;
    printf("enter the no. of natural number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
        printf("\n%d",i);
    }
    printf("\nthe sum of %d natural number is %d",n,s);
    return 0;
}