#include<stdio.h>
int main()
{
    int i,a,b,c,sum=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&b,&c);
        for(i=0;i<a;i++){
            if(arr[i]<b || arr[i]>c){
                sum+=arr[i];
            }
        }
    printf("%d",sum);
}