#include<stdio.h>
int main()
{
    int m, n, i, j, k, x, y, z, counter=0;

    //scanf("%d%d",&n,&m);
    int matrix[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            matrix[i][j] = 0;
        }

    }

//    for(i=1;i<=3;i++)
//    {
//        for(j=1;j<=3;j++)
//        {
//            printf("%d %d\t",i,j);
//        }
//        printf("\n");
//    }

    printf("\n\nR = ");
    scanf("%d",&x);
    printf("%d\n",x);

    for(k=1;k<x+1;k++)
                    {
                        printf("rook position: ");
                        scanf("%d%d",&n,&m);
                        matrix[n-1][m-1] = 1;
                        counter++;}

    printf("total empty cells - %d", 9 - counter);
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++){
                    if (matrix[i][j] == 0){
                        printf("\n%d %d", i+1, j+1);
                    }

            }
        }


   /* for(i=1;i<=3;i++)
        {
            for(j=1;j<=3;j++)
            {
                    if(i==n && j==m){
                        //printf("%d %d",n,m);
                        matrix[i][j]='NULL';
            }
                    }

            }
        }

            for(i=1;i<3+1;i++)
            {
                for(j=1;j<3+1;j++)
                {
//                    if(i==n && j==m)
//                    {
//                        matrix[i][j]==0;
//                    }
                        if(matrix[i][j]=='NULL')
                        {
                            continue;
                        }
                    else
                        {
                            printf("%d %d\t",i,j);
                            counter++;
                        }
                }
                printf("\n");
            }
            printf("Total empty cell: %d",counter);

       // }

*/
//          printf("%d %d\t",i,j);
//        for(i=1;i<3+1;i++)
//            {
//                for(j=1;j<3+1;j++)
//                {
//                    if(matrix[i][j]==1)
//                    {
//                        continue;
//                    }
//                    else printf("%d %d\t",i,j);
//                }
//                printf("\n");
//            }




    return 0;
}


