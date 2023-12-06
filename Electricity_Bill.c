#include<stdio.h>
int main()
{
    int a;
    float b,c,d;
    scanf("%d",&a);
    if(a<=199)
    {
        b=1.20;
        c=a*b;
    }
    else if (a>=200 && a<400){
        b=1.40;
        c=a*b;
    }
    else if (a>=400 && a<600){
        b=1.60;
        c=a*b;
    }
    else if (a>=600 && a<800){
        b=1.80;
        c=a*b;
    }
    else if (a>=800)
    {
        b=2.00;
        c=a*b;
    }
    if(c>400)
    {
        d=c*0.15;
    }
    else
    {
        d=0.00;
    }
    printf("Units Consumed: %d
",a);
    printf("Cost per Unit: %.2f
",b);
    printf("Bill: %.2f
",c);
    printf("Surcharge: %.2f
",d);
    printf("Total Amount: %.2f
",c+d);

    
}