#include<stdio.h>
int main()
{
    int a,b,i,j,sum1=0,sum2=0;
    scanf("%d%d",&a,&b);
    int mat[a][b];
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            scanf("%d",&mat[i][j]);
            if(mat[i][j]%2==0){
                sum1+=mat[i][j];
            }
            else{
                sum2+=mat[i][j];
            }
        }
    }
    printf("%d %d",sum1,sum2);
}    