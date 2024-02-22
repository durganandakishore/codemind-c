#include<stdio.h>
int main()
{
    int k,m,n,t;
    scanf("%d",&t);
    while(t>=1)
    {
        scanf("%d %d %d",&k,&m,&n);
        printf("%s
",(m-k)>=n?"YES":"NO");
        t--;
    }
}