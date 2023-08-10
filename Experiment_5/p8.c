#include<stdio.h>
int factorial(int r);
main()
{
int n,i,r,f,sum=0,a ;
printf("Enter any integer:");
scanf("%d",&n);
a=n;
while(n!=0)
{
r=n%10;
n=n/10;
f=factorial(r);
sum=sum+f;
}
if(sum==a)
{
printf("%d is strong number.",a);
}
else
{
printf("%d is not a strong number.",a);
}
}

int factorial(int r)
{
int i,m=1;
for(i=1;i<=r;i++)
{
m=m*i;
}
return m;
}
