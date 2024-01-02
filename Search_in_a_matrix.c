#include<stdio.h>
int main()
{
    int a,b,i,j,c,count=0;
    scanf("%d%d",&a,&b);
    int mat[a][b];
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    scanf("%d",&c);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            if(mat[i][j]==c)
            {
                count++;
            }
        }
    }
    if(count>0)
    {
        printf("%d",1);
    }
    else
    {
        printf("%d",0);
    }
}