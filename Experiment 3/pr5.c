#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter three sides of the triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(((a+b)>c)&&((b+c)>a)&&((c+a)>b))
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("The triangle is invalid");
    }
}
