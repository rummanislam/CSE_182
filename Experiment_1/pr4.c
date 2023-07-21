#include<stdio.h>
main()
{
    float c,f;
    printf("Enter the temperature in celcius:");
    scanf("%f",&c);
    f=((9*c)/5)+32;
    printf("%.2f celsius = %.2f fahrenheit",c,f);
}
