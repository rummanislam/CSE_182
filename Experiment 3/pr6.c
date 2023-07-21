#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter three sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(((a+b)>c)&&((b+c)>a)&&((c+a)>b))
    {
      if((a==b)&&(b==c))
    {
        printf("It is a equilateral triangle.");
    }
    else if(((a==b)&&(a!=c))||((b==c)&&(b!=a))||((c==a)&&(c!=b)))
    {
        printf("It is a isosceles triangle.");
    }
    else
    {
        printf("It is a scalene triangle.");
    }
    }
    else
    {
        printf("The triangle is invalid");
    }

}
