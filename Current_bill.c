#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f",&a);
    if(a<=199)
    {
        b=a*1.20;
    }
    else if(a>=200 && a<400)
    {
        b=a*1.50;
    }
    else if(a>=400 && a<600)
    {
        b=a*1.80;
    }
    else 
    {
        b=a*2.00;
    }
    if(b>400)
    {
        b=b+0.15*b;
        printf("%.2f",b);
        
    }
    else
    {
        b=b+100;
        printf("%.2f",b);
    }
}