#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<=a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=a;i++)
    {
        int end=(a-1)-i;
        if(end>=i)
        {
            printf("%d %d ",arr[i],end==i?0:arr[end]);
            
        }
    }
}
