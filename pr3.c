#include<stdio.h>
#include<math.h>
main()
{ int a,b,c,p;
  float area,s;
  a=10;
 b=12;
c= 13;
 p=(a+b+c);
 s=p/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("The perimeter of the triangle is =%d unit \n",p);
printf("The area of the triangle is= %f sq. unit",area);
}
