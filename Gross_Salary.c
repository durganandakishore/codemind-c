#include<stdio.h>
int main()
{
    float BS,DA,HRA,GS;
    scanf("%f",&BS);
    if(BS<=10000)
    {
        DA=BS*0.80;
        HRA=BS*0.20;
    }
    else if(BS<=20000)
    {
        DA=BS*0.90;
        HRA=BS*0.25;
    }
    else if(BS>20000)
    {
        DA=BS*0.95;
        HRA=BS*0.30;
    }
    GS=BS+DA+HRA;
    printf("%.2f",GS);
}