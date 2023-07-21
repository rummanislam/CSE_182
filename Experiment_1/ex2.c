//conditional operator:
#include<stdio.h>
main()
{
    int a,b,max;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    max=(a>b)?(printf("Max =%d",a)):(printf("Max =%d",b));
}
