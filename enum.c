#include <stdio.h>

enum Month{Jan=1, Feb=2, Mar=3, Ap=4, May=5, Jun=6, Jul=7, Aug=8, Sep=9, Oct=10, Nov=11, Dec=12};

int main()
{
    /*enum is a user defined type of named integer 
    identifiers, helps to make a program more
    readable*/

    enum Month thisMonth = Feb;

    printf("%d", thisMonth); /*enums are not strings,
    but they can be treated as int*/

    if(thisMonth == Nov || thisMonth == Dec)
    {
        printf("\nThis year is coming to an end. :(\n");
    }
    else
    {
        printf("\nHave much work to complete before year comes to an end. :)\n");
    }

    return 0;
}