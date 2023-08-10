
#include<stdio.h>
main ()
{
int i;
for(i = 0; i<10; i++)
{
printf("%d ",i);
if(i == 6)
break;
}
printf("\ncame outside of loop i = %d",i);
}
