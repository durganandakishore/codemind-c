#include<stdio.h>
int main()
{
    int a,b=0,c=1,d,i;
    scanf("%d",&a);
    for(i=1;i<=a-2;i++)
    {
        d=b+c;
        b=c;
        c=d;
        if(d==a)
        {
            break;
        }
    }
    if(d==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}