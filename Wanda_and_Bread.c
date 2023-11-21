#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    if(n%m==0 || k*m-1==n)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
}