#include<stdio.h>
int main()
{
    int m, n, i, j, k, x, y, z;

    scanf("%d%d",&n,&m);
    int matrix[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        //printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",matrix[j][i]);
        }
        printf("\n");
    }


    return 0;
}
