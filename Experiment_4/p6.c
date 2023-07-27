#include<stdio.h>
main()
{
    int n,i,fd,ld;
    printf("Enter the number:");
    scanf("%d",&n);
    ld=n%10;
    while(n>=10)
    {
        n=n/10;
        i++;
    }
    fd=n;
    printf("First digit= %d and last digit=%d",fd,ld);
}

