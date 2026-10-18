#include <stdio.h>
#include <string.h>

int main()
{
    char x[10] = "Hi";
    char y[10] = "Hello";
    char temp[10];

    printf("Before swap: %s, %s.\n", x, y);

    /*Must keep in mind that always set size of 
    character variable same to avoid unexpected 
    behaviour from strcpy function when it copies
    from second to first*/
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("After swap: %s, %s.\n", x, y);
    
    return 0;
}