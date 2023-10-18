#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d %d %d",&a,&b,&x);
    if ( a<=b+(x*2) )
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}