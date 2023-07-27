#include<stdio.h>
main()
{
    int n,i=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    printf("There are %d digits in the number.",i);

}
