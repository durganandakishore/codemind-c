#include<stdio.h>
int main()
{
    int a,b,i,j,sum=0;
    scanf("%d %d",&a,&b);
    int mat[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&mat[i][j]);
            sum+=mat[i][j];
        }
    }
    printf("%d",sum);
}