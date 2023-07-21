
#include<stdio.h>
int main()
{
    float a,b,c,d,ratio;
    printf("Enter the values of a,b,c and d :");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    if((c-d)!=0)
    {
        ratio=(a+b)/(c-d);
        printf("The ratio is=%.2f",ratio);
    }

    return 0;
}
