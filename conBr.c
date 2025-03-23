#include <stdio.h>

int main()
{
    int n, skip, exit;
    printf("Enter a number to print table of: ");
    scanf("%d", &n);
    printf("Enter a number to skip in table: ");
    scanf("%d", &skip);

    //continue statement
    while(skip>10 || skip<1)
    {
        printf("Invalid input! Enter a number less than 10\n");
        printf("Enter a number to skip in table: ");
        scanf("%d", &skip);
    }
    printf("Table of %d with skipping %d till 10 times is:\n", n, skip);
    for(int i=1; i<=10; i++)
    {
        if(i==skip)
            continue; //Skips the specified iteration and continues the loop
        printf("%d x %d = %d\n", n, i, n*i);
    }

    //break statement
    printf("Enter a number to exit from table: ");
    scanf("%d", &exit);

    while(exit>10 || exit<1)
    {
        printf("Invalid input! Enter a number less than 10\n");
        printf("Enter a number to exit from table: ");
        scanf("%d", &exit);
    }
    

    printf("Table of %d with exiting at %d is:\n", n, exit);
    for(int i=1; i<=10; i++)
    {
        if(i==exit)
            break; //breaks the loop at the specified iteration
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
}