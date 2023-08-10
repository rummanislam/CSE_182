
#include<stdio.h>
main()
{
int a=0,b=1,n,i,f=0;
printf("Enter the number of terms:");
scanf("%d",&n);
printf("The first %d numbers of Fibonacci Series:\n%d %d",n,a,b);
for(i=0;i<(n-2);i++)
{
f=a+b;
printf("%d ",f);
a=b;
b=f;
}
}
