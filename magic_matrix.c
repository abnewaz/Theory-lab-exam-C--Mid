#include<stdio.h>


int main()
{

    int matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int ref = 0;
    int check_sum = 0;

    //find the sum from two diagonal values
    for (int j = 0; j < 3; j++)
    {
        ref += matrix[j][j];
        check_sum += matrix[j][3-1-j];
    }
//    printf("%d\n", ref);
//    printf("%d", check_sum);

    //first check diagonal are same or not
    if (ref != check_sum)
    {
        printf("No");
    }
    else
    {
        //row and column sum check

        int row_sum, col_sum, i, j, magic = 1;
        for (i = 0; i < 3; i++)
        {
            row_sum = 0;
            col_sum = 0;

            for (j = 0; j < 3; j++)
            {
                row_sum += matrix[i][j];
                col_sum += matrix[j][i];

            }
            if (row_sum != ref || col_sum != ref)
            {
                printf("No");
                magic = 0;
                break;
            }
        }
        if (magic == 1)
        {
            printf("Yes");
        }

    }



    return 0;
}
