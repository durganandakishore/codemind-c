#include<stdio.h>
int main()
{
    int a,r,l=0;
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        l=((r>l)?r:l);
        a=a/10;
    }
    printf("%d",l);
}