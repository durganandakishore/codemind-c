#include<stdio.h>
int main()
{
    int x1,x2,y1,y2;
    scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
    printf("%d",x1+x2<y1+y2 ? x1+x2:y1+y2);
}