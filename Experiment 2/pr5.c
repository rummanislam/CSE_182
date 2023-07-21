#include<stdio.h>
main()
{
    int day,y,m,w,d;
    printf("Enter the days:");
    scanf("%d",&day);
    y=day/365;
    m=(day%365)/30;
    w=((day%365)%30)/7;
    d=((day%365)%30)%7;
    printf("%d days = %d years %d months %d weeks and %d days",day,y,m,w,d);
}
