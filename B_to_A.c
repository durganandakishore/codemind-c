#include<stdio.h>
int main()
{
    int i,b,a;
    scanf("%d %d",&b,&a);
    i=a;
    while ( i>=b )
    {
        printf("%d ",i);
        i--;
    }
}