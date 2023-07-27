#include<stdio.h>
main()
{
    int sum=0,i,n;
    printf("Enter the last number:");
    scanf("%d",&n);
    printf("The sum of first %d natural number:\n",n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        printf("+%d",i);

    }
        printf(" =%d",sum);
}
