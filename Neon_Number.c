#include<stdio.h>
int main()
{
    int n,sq,sum=0,k;
    scanf("%d",&n);
    sq=n*n;
    while(sq>0)
    {
        k=sq%10;
        sum=sum+k;
        sq=sq/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}