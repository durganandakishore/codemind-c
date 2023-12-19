#include<stdio.h>
int main()
{
    int a,i;
    float sum=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    float average=sum/a;
    printf("%.2f",average);
}