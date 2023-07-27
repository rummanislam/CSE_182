#include<stdio.h>
main()
{
    int x,n,sum=0,r;
    printf("Enter the number:");
    scanf("%d",&n);
    x=n;
    while(x!=0)
    {
        r=x%10;
        sum=sum+r;
        x=x/10;
    }
    printf("The sum of digits are= %d",sum);

}
