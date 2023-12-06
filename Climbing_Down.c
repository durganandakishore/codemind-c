#include<stdio.h>
int main()
{
    float a,b,c,d,e,f;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    e=a/c;
    f=b/d;
    if(e>f)
    {
        printf("Jesse");
    }
    else if(f>e)
    {
        printf("Walter");
        
    }
    else if(e==f)
    {
        printf("Both");
    }
}