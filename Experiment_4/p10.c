#include<stdio.h>
main()
{
    int ft=1,n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ft=ft*i;

    }
    printf("The factorial of %d =%d",n,ft);
}
