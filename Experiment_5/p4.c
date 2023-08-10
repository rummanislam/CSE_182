
#include<stdio.h>
main()
{
int a,i,x=0;
printf("Enter the number:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
{
x++;
}
}
if(x==2)
{
printf("%d is a prime number",a);
}
else
{
printf("%d is not a prime number.",a);
}
x=0;
}
