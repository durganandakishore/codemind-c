#include<stdio.h>
int main()
{
    int a,b,i,j,sum=0;
    scanf("%d %d",&a,&b);
    int mat[a][b];
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=1;i<=a;i++)
    {
        int sum=0;
        for(j=1;j<=b;j++)
        {
            sum+=mat[i][j];
        }
        printf("%d ",sum);
    }
    
}