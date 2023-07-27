
#include<stdio.h>
main()
{
    int a,i,n;
    printf("Enter last number:");
    scanf("%d",&n);
    printf("The natural numbers (%d to 1):\n",n);
    for(i=n;i>=1;i--)
    {
        printf("%d ",i);
    }


}
