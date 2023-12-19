#include<stdio.h>
int main()
{
    int a,i,count=0,n;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&n);
    for(i=0;i<a;i++)
    {
        if(arr[i]==n)
        count++;
    }
    printf("%d",count);
}