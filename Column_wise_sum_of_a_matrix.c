#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int mat[a][b];
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=1;i<=b;i++){
        int sum=0;
        for(j=1;j<=a;j++){
            sum+=mat[j][i];
        }
        printf("%d ",sum);
    }
    
}