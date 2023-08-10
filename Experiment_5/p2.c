
#include<stdio.h>
main()
{
int a,b,i,hcf;
printf("Enter 2 numbers:");
scanf("%d%d",&a,&b);
for(i=1;i<=a && i<=b;i++)
{
if(a%i==0 && b%i==0)
{
hcf=i;
}
}
printf("The Highest Common Factor(HCF) =%d",hcf);
}
