#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}
