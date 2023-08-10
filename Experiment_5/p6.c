
#include<stdio.h>
main()
{
int n,i,j,x,sum=0;
printf("Enter the last number:");
scanf("%d",&n);
printf("The sum of all prime numbers from 1 to %d is:\n",n);
for(i=1;i<=n;i++)
{
x=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
{
x++;
}
}
if(x==2)
{
sum=sum+i;
printf("+%d",i);
}
}
printf("=%d ",sum);
}
