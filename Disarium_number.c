#include<stdio.h>
#include<math.h>
int main()
{
    int a,t,b,r,count=0,sum=0;
    scanf("%d",&a);
    t=a;
    while(a>0){
        a=a/10;
        count++;
    }
    a=t;
    while(a>0){
        r=a%10;
        b=pow(r,count);
        sum+=b;
        a=a/10;
        count--;
    }
    if(t==sum){
        printf("True");
    }
    else{
        printf("False");
    }
}