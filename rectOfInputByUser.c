#include <stdio.h>

int main()
{
    int rows, colms;
    char symbol;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &colms);
    getchar();  // Consume the newline character left by the previous scanf, you can also use fflush(stdin) or scanf("%c") instead of getchar()
    printf("Enter symbol: ");
    scanf("%c", &symbol);

    printf("Displaying rectangle of specified symbol with given number of rows and columns: \n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<colms; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}