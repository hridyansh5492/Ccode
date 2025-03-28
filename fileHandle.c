#include <stdio.h>

int main()
{
    FILE *pF = fopen("f1.txt", "w");

    fprintf(pF, "SquareDADA\n");

    fclose(pF);

    /*
    remove file if already present

    if(remove("f1.txt") == 0)
    {
        printf("That file was deleted successfully!\n");
    }
    else
    {
        printf("That file was NOT deleted!\n");
    }*/
}