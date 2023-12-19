#include<stdio.h>
int main()
{
    int a,i,count=0,sum=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int average=sum/a;
    for(i=0;i<a;i++)
    {
        if(average==arr[i])
        count++;
    }
    if(count>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}