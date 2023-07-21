#include<stdio.h>
main()
{
    int a,b,p,area;
    printf("Enter length and breadth of the rectangle:");
    scanf("%d%d",&a,&b);
    p=2*(a+b);
    area=a*b;
    printf("The perimeter=%d unit\nThe area =%d sq.unit",p,area);

}
