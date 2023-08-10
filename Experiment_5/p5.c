
#include<stdio.h>
main()
{
int n,i,j,x;
printf("Enter the last number:");
scanf("%d",&n);
printf("The prime numbers from 1 to %d are=\n",n);
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
printf("%d ",i);
}
}
}
