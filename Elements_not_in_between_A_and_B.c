#include<stdio.h>
int main()
{
    int i,a,b,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    int flag=0;
    
    for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            printf("%d ",arr[i]);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
}