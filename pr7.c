#include<stdio.h>
main()
{
    int a,b;
    printf("Enter a positive integer:");
    scanf("%d",&a);
    (a%2==0)?(printf("%d is an even number",a)):(printf("%d is a odd number",a));
}
