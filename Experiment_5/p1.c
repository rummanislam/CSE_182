
#include<stdio.h>
main()
{
int n,a,c,s=0,r;
printf("Enter a number:");
scanf("%d",&n);
c=n;
while(n!=0)
{
r=n%10;
s=(s*10)+r;
n=n/10;
}
a=s;
if(a==c)
{
printf("%d is a palindrome number.",a);
}
else
{
printf("%d is not a palindrome number.",a);
}
}
