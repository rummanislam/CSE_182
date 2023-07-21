#include<stdio.h>
main()
{
    int a;
    printf("Enter the year:");
    scanf("%d",&a);
  ((a%4==0)&&((a%400==0)||(a%100!=0)))?(printf("%d is a leap year",a)):(printf("%d is not a leap year",a));

}
