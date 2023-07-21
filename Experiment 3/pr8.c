#include<stdio.h>
main()
{
    float a,b,c,d,e,f,g;
    printf("Enter electricity units:");
    scanf("%f",&a);
    if(a>0)
    {
        if(a<=50)
        {
            b=a*0.5;
            printf("The electric bill is =%f tk",b);
        }
        else if(a<=150)
        {
            c=(50*0.5)+((a-50)*0.75);
            printf("The electric bill is = %f tk",c);
        }
        else if(a<=250)
        {
            d=(50*0.5)+(100*0.75)+(a-150)*1.2;
            printf("The electric bill is =%f tk",d);
        }
        else if(a>250)
        {
            f=(50*0.5)+(100*0.75)+(100*1.2)+((a-250)*1.5);
            g=f+f*0.2;
            printf("The electric bill is =%f tk.\n",g);
            printf("***Additional 20 percent surcharge is added");
        }
    }
    else
    {
        printf("Invalid input.");
    }

}
