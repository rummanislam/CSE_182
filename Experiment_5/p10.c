#include<stdio.h>
main()
{
int n;
printf("Give the no. of day in week:");
scanf("%d",&n);
printf("The %dth day is:",n);
switch(n)
{
case 1:
printf("Sunday");
break;
case 2:
printf("Monday");
break;
case 3:
printf("Tuesday");
break;
case 4:
printf("Wednesday");
break;
case 5:
printf("Thursday");
break;
case 6:
printf("Friday");
break;
case 7:
printf("Saturday");
break;
default:
printf("!!!! Enter correct number of day");
}
}
