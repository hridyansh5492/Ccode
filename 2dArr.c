#include <stdio.h>

int main()
{
    /*2D array is also called matrix or table, where
    all the elements are stored in rows and columns.
    Syntax:
    data_type array_name[row_size][column_size];
    */

    int num[3][3];
    int rows = sizeof(num)/sizeof(num[0]);
    int colms = sizeof(num[0])/sizeof(num[0][0]);

    printf("Size of whole matrix is %d.\n", sizeof(num));
    printf("Size of each row is %d.\n", sizeof(num[0]));
    printf("Size of each element in array is %d.\n", sizeof(num[0][0]));

    printf("Enter elements in array: \n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<colms; j++)
        {
            printf("\n\tElement [%d][%d]: ", i , j);
            scanf("%d", &num[i][j]);
        }
    }

    printf("\nThe entered matrix: \n");
    for(int i=0; i<rows; i++)
    {
        printf("|");
        for(int j=0; j<colms; j++)
        {
            printf("\t%d\t", num[i][j]);
        }
        printf("|\n");
    }

    return 0;
}