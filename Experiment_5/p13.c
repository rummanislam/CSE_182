
#include<stdio.h>
#include<math.h>
main()
{
char a,i;

printf("Enter + to add two numbers:\n");
printf("Enter - to subtract two numbers:\n");
printf("Enter * to multiply two numbers:\n");
printf("Enter / to divide two numbers:\n");
printf("Enter r to find root of a number:\n");

scanf("%c",&a);


switch(a)
{
case '+':
{
int x,y,s;
printf("The program is ready for addition.\n");
printf("Enter two numbers:");
scanf("%d%d",&x,&y);
s=x+y;
printf("%d + %d =%d",x,y,s);
}
break;
case '-':
{
int x,y,s;
printf("The program is ready for subraction.\n");
printf("Enter two numbers:");
scanf("%d%d",&x,&y);
s=x-y;
printf("%d - %d =%d",x,y,s);
}
break;
case '*':
{
int x,y,m;
printf("The program is ready for multiplicaton.\n");
printf("Enter two numbers:");
scanf("%d%d",&x,&y);
m=x*y;
printf("%d x %d =%d",x,y,m);
}
break;
case '/':
{
float x,y,d;
printf("The program is ready for division\n");
printf("Enter two numbers:");
scanf("%f%f",&x,&y);
d=x/y;
printf("%.2f / %.2f =%.2f",x,y,d);
}
break;
case 'r':
    {
        float  r,x;
        printf("The program is ready to find square root.\n");
        printf("Enter a number:");
        scanf("%f",&r);
        x=sqrt(r);
        printf("The  square root of %.3f =%.3f",r,x);
    }
    break;
default:
printf("Enter correct key. ");
}

}
