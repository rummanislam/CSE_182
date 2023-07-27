#include<stdio.h>
main()
{
    int n,a,i;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("The reverse of %d = ",n);
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        printf("%d",a);
    }
}
