#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    r=n%10;
    while (n>=9)
    {
        n/=10;
    }
    printf("%d",n+r);
}