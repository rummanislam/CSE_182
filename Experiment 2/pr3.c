#include<stdio.h>
main()
{
    float c,m,k;
    printf("Enter the length in(cm):");
    scanf("%f",&c);
    m=c/100;
    k=c/100000;
    printf("%.2f cm= %f m \n%.2f cm= %f km",c,m,c,k);
}
