
#include<stdio.h>
int main()
{
    int a, b, m, n, i, j, k, x, y, z, p, q;

    scanf("%d%d",&n,&m);
    int matrix[n][m];

    printf("First matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        //printf("\n");
    }

//    scanf("%d%d",&a,&b);
    int mat[n][m];

     printf("Second matrix:\n");
    for(x=0;x<n;x++)
    {
        for(y=0;y<m;y++)
        {
            scanf("%d",&mat[x][y]);
        }
        //printf("\n");
    }

    printf("\n\n\n");


//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<m;j++)
//        {
//            printf("%d\t",matrix[i][j]);
//        }
//        printf("\n");
//    }

    //printf("\n\n\n");

//    for(x=0;x<n;x++)
//    {
//        for(y=0;y<m;y++)
//        {
//            printf("%d\t",mat[x][y]);
//        }
//        printf("\n");
//    }


    printf("\n\n\n");
    int mat_sum[n][m];
    for(a=0;a<n;a++)
    {
        for(b=0;b<m;b++)
        {


       // printf("%d")
           mat_sum[a][b] = matrix[a][b] + mat[a][b];
           printf("%d\t",mat_sum[a][b]);

//printf("%d\t",k);
//printf("\n");
//printf("%d\t.....................",p);
                }
                printf("\n");
            }
            //
            //
        //}
    //}

    return 0;
}
